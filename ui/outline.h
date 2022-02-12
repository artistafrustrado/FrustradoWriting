#ifndef OUTLINE_H
#define OUTLINE_H

#include <QWidget>
#include  <QTextEdit>

class Outline : public QWidget
{
    Q_OBJECT
public:
    explicit Outline(QWidget *parent = nullptr);
    QTextEdit *outline = new QTextEdit (this);
    void setupUI();
signals:


};

#endif // OUTLINE_H
