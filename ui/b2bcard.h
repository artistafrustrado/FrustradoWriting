#ifndef B2BCARD_H
#define B2BCARD_H

#include <QWidget>
#include<QLineEdit>
#include<QTextEdit>

class B2bCard : public QWidget
{
    Q_OBJECT
public:
    explicit B2bCard(QWidget *parent = nullptr);
    void setupUI();
     QLineEdit *b2bCardTitle = new QLineEdit();
     QLineEdit *b2bCardDescription = new QLineEdit();
signals:

};

#endif // B2BCARD_H
