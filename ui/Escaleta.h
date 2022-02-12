#ifndef ESCALETA_H
#define ESCALETA_H

#include <QWidget>
#include<QTextEdit>

class Escaleta : public QWidget
{
    Q_OBJECT
public:
    explicit Escaleta(QWidget *parent = nullptr);
     QTextEdit *escaleta = new QTextEdit(this);
     void setupUI();
signals:

};

#endif // ESCALETA_H
