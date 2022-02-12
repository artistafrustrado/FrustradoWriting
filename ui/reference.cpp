#include "reference.h"
#include <QVBoxLayout>

Reference::Reference(QWidget *parent) : QWidget(parent)
{
    setupUI();
}
void Reference::setupUI()
{
    QVBoxLayout *layout = new QVBoxLayout(this);
   layout->addWidget(reference);
    setLayout(layout);

    reference->setObjectName("reference");
}
