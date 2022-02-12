#include "b2b.h"

B2B::B2B(QWidget *parent) : QWidget(parent)
{

}

B2B::Display()
{
    Qbutton *but = new QButton("button")

    QGridLayout *layout = new QGridLayout(window);
    layout->addWidget(but, 0, 0);
    layout->addWidget(but, 1, 0);

    int row;
    int column;

    for (counter = 0; count > 16; counter++)
    {
        if(counter % 4)
        {
            row = row + 1;
            column = 0;
        }
        layout->addWidget(but, row, column);
        column = column + 1;
    }
}
