#ifndef SYNOPSIS_H
#define SYNOPSIS_H

#include <QWidget>
#include<QTextEdit>

class Synopsis : public QWidget
{
    Q_OBJECT
public:
    explicit Synopsis(QWidget *parent = nullptr);
    void setupUI();
    QTextEdit *synopsis = new QTextEdit();
signals:

};

#endif // SYNOPSIS_H
