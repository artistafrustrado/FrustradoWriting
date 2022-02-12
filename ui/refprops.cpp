#include "refprops.h"
#include<QVBoxLayout>

RefProps::RefProps(QWidget *parent) : QWidget(parent)
{
    setupUI();
}
void RefProps::setupUI()
{
    QVBoxLayout *layout = new QVBoxLayout(this);
   layout->addWidget(refProps);
    setLayout(layout);

    refProps->setObjectName("RefProps");
}
