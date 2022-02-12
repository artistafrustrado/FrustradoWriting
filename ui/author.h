#ifndef AUTHOR_H
#define AUTHOR_H
#include <QLineEdit>
#include <QWidget>

class Author : public QWidget
{
    Q_OBJECT
public:
    explicit Author(QWidget *parent = nullptr);
    void setupUI();

    QLineEdit *authorName = new QLineEdit();
    QLineEdit *authorEmail = new QLineEdit();
    QLineEdit *authorInstitute = new QLineEdit();


signals:

};

#endif // AUTHOR_H
