#include "character.h"
#include<QTableWidget>
#include<QVBoxLayout>

Character::Character(QWidget *parent) : QWidget(parent)
{
    setUI();
}

void Character::setUI()
{
    auto *tableWidget = new QTableWidget(12, 3, this);
    tableWidget->setRowCount(10);
    tableWidget->setColumnCount(5);



/*
    #model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
     #model->setHeaderData(1, Qt::Horizontal, QObject::tr("Name"));
     #model->setHeaderData(2, Qt::Horizontal, QObject::tr("City"));
     #model->setHeaderData(3, Qt::Horizontal, QObject::tr("Country"));
*/

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(tableWidget);

    setLayout(layout);
}
