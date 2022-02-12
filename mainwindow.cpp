#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
//    ui->setupUi(this);
     SetupUI();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SetupUI()
{
    QString applicationName= "Screenplay Frustrado";
    setWindowTitle(applicationName);
    showMaximized();
}

