#include "plot.h"
#include<QTextEdit>
#include<QVBoxLayout>

Plot::Plot(QWidget *parent) : QWidget(parent)
{
    setupUI();
}
void Plot::setupUI()
{
    QVBoxLayout *layout = new QVBoxLayout(this);
   layout->addWidget(plot);
    setLayout(layout);

    plot->setObjectName("plot");
}
