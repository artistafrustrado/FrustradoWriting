#ifndef BOARD_H
#define BOARD_H

#include <QWidget>
#include <QLineEdit>
#include <QTextEdit>

class Board : public QWidget
{
    Q_OBJECT
public:
    explicit Board(QWidget *parent = nullptr);
    void setUI();
    QLineEdit *card_name = new QLineEdit();
    QTextEdit *card_description = new QTextEdit(this);
signals:

};

#endif // BOARD_H
