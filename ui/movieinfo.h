#ifndef MOVIEINFO_H
#define MOVIEINFO_H

#include <QWidget>
#include<QLineEdit>

class MovieInfo : public QWidget
{
    Q_OBJECT
public:
    explicit MovieInfo(QWidget *parent = nullptr);
    QLineEdit *name = new QLineEdit();
    QLineEdit *theme = new QLineEdit();
    QLineEdit *genre = new QLineEdit();

    void setupUI();
signals:

};

#endif // MOVIEINFO_H
