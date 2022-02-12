#ifndef PLOT_H
#define PLOT_H

#include <QWidget>
#include<QVBoxLayout>
#include <QTextEdit>

class Plot : public QWidget
{
    Q_OBJECT
public:
    explicit Plot(QWidget *parent = nullptr);
    QTextEdit *plot = new QTextEdit (this);
    void setupUI();
signals:

};

#endif // PLOT_H
