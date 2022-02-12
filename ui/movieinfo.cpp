#include "movieinfo.h"
#include<QFormLayout>

MovieInfo::MovieInfo(QWidget *parent) : QWidget(parent)
{
    setupUI();
}

void MovieInfo::setupUI()
{
    QFormLayout *layout = new QFormLayout();
    layout->addRow("Name", name);
    layout->addRow("Theme", theme);
    layout->addRow("Genre", genre);
    setLayout(layout);
    name->setObjectName("name");
    theme->setObjectName("theme");
    genre->setObjectName("genre");
}
