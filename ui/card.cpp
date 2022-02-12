#include "card.h"
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>

Card::Card(QWidget *parent)
    : QWidget{parent}
{
    SetupUI();
}
void Card::SetupUI()
{
    QLabel *card_name_title = new QLabel("Name");
    QLabel *card_name_description = new QLabel("Description");

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(card_name_title);
    layout->addWidget(card_name);
    layout->addWidget(card_name_description);
    layout->addWidget(card_description);

    card_name->setObjectName("card_name");
    card_name_description->setObjectName("Description");
    card_description->setObjectName("card_description");
    setLayout(layout);
}

