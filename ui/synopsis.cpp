#include "synopsis.h"
#include<QVBoxLayout>

Synopsis::Synopsis(QWidget *parent) : QWidget(parent)
{
    setupUI();
}
void Synopsis::setupUI()
{
    QVBoxLayout *layout = new QVBoxLayout(this);
   layout->addWidget(synopsis);
    setLayout(layout);

    synopsis->setObjectName("synopsis");
}

