#ifndef REFPROPS_H
#define REFPROPS_H

#include <QWidget>
#include<QTextEdit>

class RefProps : public QWidget
{
    Q_OBJECT
public:
    explicit RefProps(QWidget *parent = nullptr);
    QTextEdit *refProps = new QTextEdit();
    void setupUI();
signals:

};

#endif // REFPROPS_H
