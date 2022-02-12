#include "author.h"
#include<QGridLayout>
#include <QFormLayout>

Author::Author(QWidget *parent) : QWidget(parent)
{
    setupUI();
}
void Author::setupUI()
{
//    QGridLayout *layout = new QGridLayout();

    QFormLayout* layout = new QFormLayout(this);
    //layout->addRow("CNG Cryptoprovider:", lnProvider);

   layout->addRow("Nome:", authorName);
   layout->addRow("e-mail:", authorEmail);
   layout->addRow("Institution:", authorInstitute);

   authorName->setObjectName("authorName");
   authorEmail->setObjectName("authorEmail");
   authorInstitute->setObjectName("authorInstitute");

   setLayout(layout);
/*
   QLineEdit *authorName = new QLineEdit();
    QLineEdit *authorEmail = new QLineEdit();
    QLineEdit *authorInstitute = new QLineEdit();
*/
}
