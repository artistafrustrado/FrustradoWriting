#include "b2bcard.h"
#include <QVBoxLayout>

B2bCard::B2bCard(QWidget *parent) : QWidget{parent}
{
    setupUI();
}
void B2bCard::setupUI()
{
    QVBoxLayout *layout = new QVBoxLayout(this);
   layout->addWidget(b2bCardTitle);
   layout->addWidget(b2bCardDescription);
    setLayout(layout);

    b2bCardTitle->setObjectName("b2bCardTitle");
    b2bCardDescription->setObjectName("b2bCardDescription");
}
