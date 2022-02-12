#include "outline.h"
#include <QVBoxLayout>

Outline::Outline(QWidget *parent) : QWidget(parent)
{
    setupUI();
}
void Outline::setupUI()
{
    QVBoxLayout *layout = new QVBoxLayout(this);
   layout->addWidget(outline);
    setLayout(layout);

    outline->setObjectName("outline");

}
