#ifndef EXPORTER_H
#define EXPORTER_H

#include <QWidget>
#include <QTextDocument>

class Exporter
{
public:
    Exporter();
    QTextDocument *document;
    void getData();
    void loadData();
};

#endif // EXPORTER_H
