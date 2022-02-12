
#include <QToolBar>
#include <QIcon>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QTextEdit>
#include "skeleton.h"
#include <QTabWidget>
#include<QVBoxLayout>
#include<QLabel>
#include<ui/outline.h>
#include<ui/plot.h>
#include<ui/reference.h>
#include<ui/synopsis.h>
#include<ui/refprops.h>
#include<ui/Escaleta.h>
#include<ui/author.h>
#include<QTableWidget>
#include<ui/character.h>
#include<ui/locations.h>
#include<ui/movieinfo.h>
#include<ui/board.h>
#include <QFile>
#include<QFileDialog>
#include <QMessageBox>
#include <QTextStream>


#include<QJsonArray>
#include<QJsonDocument>
#include<QJsonObject>
#include <QJsonValue>
#include<QMessageBox>

Skeleton::Skeleton(QWidget *parent): QMainWindow(parent) {

    QPixmap newpix(":/resorces/icons/document-new.svg");
    QPixmap savepix(":/resorces/icons/document-save.svg");
    QPixmap openpix(":/resorces/icons/document-open.svg");
    QPixmap quitpix(":/resorces/icons/system-log-out.svg");
    QPixmap exportpix(":/resorces/icons/document-properties.svg");

    auto *fileNew = new QAction("&New", this);
    auto *fileSave = new QAction("&Save", this);
    auto *fileSaveAs = new QAction("&Save as", this);
    auto *fileOpen = new QAction("&Open", this);
    auto *filePrint = new QAction("&Print", this);
    auto *quit = new QAction("&Quit", this);

    quit->setShortcut(Qt::Key_Q | Qt::CTRL);
    connect(quit, SIGNAL(triggered()), this, SLOT(close()));


     QMenu *file = menuBar()->addMenu("&File");
     file->addAction(fileNew);
     file->addAction(fileSave);
     file->addAction(fileSaveAs);
     file->addAction(fileOpen);
     file->addAction(filePrint);
     file->addSeparator();
     file->addAction(quit);


     QMenu *exp = menuBar()->addMenu("&Export");
     exp->addAction(fileNew);
     exp->addAction(fileSave);
     exp->addAction(fileSaveAs);

      QMenu *rep = menuBar()->addMenu("&Reports");

      QMenu *ab = menuBar()->addMenu("&About");


     connect(quit, &QAction::triggered, qApp, &QApplication::quit);

     QToolBar *toolbar = addToolBar("main toolbar");

       toolbar->addAction(QIcon(newpix), "New File");
       auto *open2 = toolbar->addAction(QIcon(openpix), "Open File");
       auto *save2 = toolbar->addAction(QIcon(savepix), "Save File");
       toolbar->addAction(QIcon(savepix), "Save as File");
       toolbar->addSeparator();
       auto export2 = toolbar->addAction(QIcon(exportpix), "Export File");
       toolbar->addSeparator();
       QAction *quit2 = toolbar->addAction(QIcon(quitpix), "Quit Application");

       connect(quit2, &QAction::triggered, qApp, &QApplication::quit);

//       connect(open2, SIGNAL(triggered()), this, SLOT(OpenFile));

       //connect(ui->menuRecently_Open, SIGNAL(triggered(QAction*)), this, SLOT(onRecentOpenFiles(QAction*)));
       connect(open2, SIGNAL(triggered(QAction*)), this, SLOT(OpenFile(QAction*)));

       QObject::connect(open2, &QAction::triggered, this, &Skeleton::OpenFile);
       QObject::connect(save2, &QAction::triggered, this, &Skeleton::SaveFile);
       QObject::connect(export2, &QAction::triggered, this, &Skeleton::ExportFile);

       toolbar->setIconSize(QSize(32, 32));

     buildStage();
}

void Skeleton::buildStage()
{
        auto *tabs = new QTabWidget(this);
//        tabs->addTab(new Board(this), tr("Board"));

        tabs->addTab(new Board(this), tr("B2B"));
        tabs->addTab(new MovieInfo(this), tr("Movie Info"));
        tabs->addTab(new Synopsis(this), tr("Synopis"));
        tabs->addTab(new Plot(this), tr("Plot"));
        tabs->addTab(new Outline(this), tr("Outline"));
        tabs->addTab(new Escaleta(this), tr("Escaleta"));
        tabs->addTab(new Author(this) , tr("Author"));
        tabs->addTab(new Reference(this), tr("Reference"));
        tabs->addTab(new RefProps(this), tr("Ref. Props"));
        tabs->addTab(new Character(this), tr("Characters"));
        tabs->addTab(new Locations(this), tr("Locations"));

       setCentralWidget(tabs);
       statusBar()->showMessage("Ready");
}

void Skeleton::fromJson(QJsonDocument doc)
{

}

QJsonDocument Skeleton::toJson()
{
    QLineEdit *movieName = findChild<QLineEdit *>("name");
    QLineEdit *movieTheme = findChild<QLineEdit *>("theme");
    QLineEdit *movieGenre = findChild<QLineEdit *>("genre");
    QTextEdit *synopsis = findChild<QTextEdit *>("synopsis");
    QTextEdit *plot = findChild<QTextEdit *>("plot");
    QTextEdit *escaleta = findChild<QTextEdit *>("escaleta");
    QTextEdit *outline = findChild<QTextEdit *>("outline");
    QTextEdit *reference = findChild<QTextEdit *>("reference");
     QTextEdit *refProps = findChild<QTextEdit *>("RefProps");

    QJsonDocument doc;
    QJsonObject obj;
    obj["MovieName"] = movieName->text();
    doc.setObject(obj);
    obj["MovieTheme"] = movieTheme->text();
    doc.setObject(obj);
    obj["MovieGenre"] = movieGenre->text();
    doc.setObject(obj);

    obj["Synopsis"] = synopsis->toPlainText();
    doc.setObject(obj);
    obj["Plot"] = plot->toPlainText();
    doc.setObject(obj);
    obj["Escaleta"] = escaleta->toPlainText();
    doc.setObject(obj);
    obj["Outline"] = outline->toPlainText();
    doc.setObject(obj);
    obj["Reference"] = reference->toPlainText();
    doc.setObject(obj);
    obj["RefProps"] = refProps->toPlainText();
    doc.setObject(obj);

    return doc;
}

void Skeleton::SaveFile()
{
        QJsonDocument doc;
        doc = toJson();

        QByteArray contents = doc.toJson();
        QMessageBox::warning(this,"Info", contents);

        QString filename= QFileDialog::getSaveFileName(this, "Save As","~/", "Save The Cat (*.cat)");

         if (filename.isEmpty())
         {
                return;
          }
          QFile file(filename);

          //Open the file
          if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
          {
                return;
          }
          QTextStream out(&file);

	  file.write(contents);
	//out << doc;

          file.close();

          doc.toJson();

          // https://www.weiy.city/2020/08/how-to-write-and-read-json-file-by-qt/
}

void Skeleton::ExportFile()
{
        QJsonDocument doc;

        QByteArray contents = doc.toJson();
        QMessageBox::warning(this,"Info", contents);


        QMessageBox::warning(this,"Info", contents);
/*
        //QLayout * layout = widget -> findChild<QLayout *> (layoutName);
        QLineEdit * movieName = this->findChild<QLineEdit *> ("name");
        QLineEdit * movieTheme = this->findChild<QLineEdit *> ("theme");
        QLineEdit * movieGenre = this->findChild<QLineEdit *> ("genre");
*/


}

void Skeleton::OpenFile()
{
    statusBar()->showMessage("Open File");
    qDebug() <<"Open File";

    QString filter = "All Files (*.*);;Cat Files (*.cat)";
    QString  filename = QFileDialog::getOpenFileName(this,"Open File", filter);

    QFile file(filename);

    if(!file.open(QFile::ReadOnly|QFile::Text))
    {
        QMessageBox::warning(this,"Error", "Erro while atempting to open file");
    }

    QTextStream input(&file);
    QString contents = input.readAll();
    file.close();
}

/*
void MainWindow::onRecentOpenFiles(QAction* action)
{
  qDebug() << "TRIGGER";
}
 * */
