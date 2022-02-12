#include "locations.h"

#include<QTableWidget>
#include<QVBoxLayout>

Locations::Locations(QWidget *parent) : QWidget{parent}
{
    setUI();
}

void Locations::setUI()
{
    auto *tableWidget = new QTableWidget(12, 3, this);
    tableWidget->setRowCount(10);
    tableWidget->setColumnCount(5);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(tableWidget);

    setLayout(layout);
}
