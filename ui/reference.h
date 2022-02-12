#ifndef REFERENCE_H
#define REFERENCE_H

#include <QWidget>
#include <QTextEdit>

class Reference : public QWidget
{
    Q_OBJECT
public:
    explicit Reference(QWidget *parent = nullptr);
    void setupUI();
    QTextEdit *reference = new QTextEdit();

signals:

};

#endif // REFERENCE_H
