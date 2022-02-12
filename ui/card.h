#ifndef CARD_H
#define CARD_H

#include <QWidget>
#include <QLineEdit>
#include <QTextEdit>

class Card : public QWidget
{
    Q_OBJECT
public:
    explicit Card(QWidget *parent = nullptr);
    QLineEdit *card_name = new QLineEdit();
    QTextEdit *card_description = new QTextEdit(this);
    void SetupUI();
signals:

};

#endif // CARD_H
