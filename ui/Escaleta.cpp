#include "Escaleta.h"
#include<QVBoxLayout>

Escaleta::Escaleta(QWidget *parent) : QWidget(parent)
{
    setupUI();
}
void Escaleta::setupUI()
{
    QVBoxLayout *layout = new QVBoxLayout(this);
   layout->addWidget(escaleta);
    setLayout(layout);

    escaleta->setObjectName("escaleta");
}
