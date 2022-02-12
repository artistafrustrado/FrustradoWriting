#include "exporter.h"
#include <QTextDocument>
#include <QPdfWriter>
#include <QPainter>
#include <QString>
#include <QFileDialog>
#include <QTextDocumentWriter>
#include <QTextImageFormat>
#include <QCursor>
#include <QTextCursor>
#include <QPixmap>
#include <QTextTable>

Exporter::Exporter()
{

}

void Exporter::loadData()
{

/*
    QString output = "this is just a test!";

    QPdfWriter pdfWriter(output);
    QPainter painter(&pdfWriter);
    painter.scale(20.0, 20.0);
    document->drawContents(&painter);


    QString filename = "/tmp/file-export.pdf";

    QPdfWriter writer(filename);
    int logicalDPIX=writer.logicalDpiX();
    const int PointsPerInch=72;

    QPainter painter1;
    painter1.begin(&writer)
    QTransform t;
    float scaling = (float)logicalDPIX/PointsPerInch;
    t.scale(scaling,scaling);

    // do drawing with painter
    painter1.end();
    painter1.setTransform(t);
*/
/*
    QTextCursor cursor(document);

    QTextImageFormat::setQuality(100);

    QPixmap chartImage = chartView->grab();
    chartImage.save("test.png", "PNG");    //just for testing, here looks fine
    chartImage.toImage();

    document->addResource(QTextDocument::ImageResource, QUrl("my_img.png"), chartImage);
    QTextImageFormat imageFormat;
    imageFormat.setName("img1.png");
    cursor.insertImage(imageFormat);
    cursor.insertBlock();
    cursor.insertText("some random text!");

    QString fileName = QFileDialog::getSaveFileName(nullptr,QObject::tr("Save File"),"output_file.odf",QObject::tr("Open Document ('''.odf)"));
    QTextDocumentWriter fileWriter (fileName);
    fileWriter.setFormat("odf");
    fileWriter.write(document);

    QTextDocument *doc = new QTextDocument;
   doc->setDocumentMargin(10);

*/
/*

   //QTextCursor cursor(doc);

   cursor.movePosition(QTextCursor::Start);

   QTextTable *table = cursor.insertTable(properties.size() + 1, 2, tableFormat);
   QTextTableCell headerCell = table->cellAt(0, 0);
   QTextCursor headerCellCursor = headerCell.firstCursorPosition();
   headerCellCursor.insertText(QObject::tr("Name"), boldFormat);
   headerCell = table->cellAt(0, 1);
   headerCellCursor = headerCell.firstCursorPosition();
   headerCellCursor.insertText(QObject::tr("Value"), boldFormat);

   for(int i = 0; i < properties.size(); i++){
       QTextCharFormat cellFormat = i % 2 == 0 ? textFormat : alternateCellFormat;
       QTextTableCell cell = table->cellAt(i + 1, 0);
       cell.setFormat(cellFormat);
       QTextCursor cellCursor = cell.firstCursorPosition();
       cellCursor.insertText(properties.at(i)->name());

       cell = table->cellAt(i + 1, 1);
       cell.setFormat(cellFormat);
       cellCursor = cell.firstCursorPosition();
       cellCursor.insertText(properties.at(i)->value().toString() + " " + properties.at(i)->unit());
   }

   cursor.movePosition(QTextCursor::End);
   cursor.insertBlock();

   //Print to PDF
   QPrinter printer(QPrinter::HighResolution);
   printer.setOutputFormat(QPrinter::PdfFormat);
   printer.setOutputFileName(filename);
   doc->print(&printer);
*/

}
