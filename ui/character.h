#ifndef CHARACTER_H
#define CHARACTER_H

#include <QWidget>

class Character : public QWidget
{
    Q_OBJECT
public:
    explicit Character(QWidget *parent = nullptr);
    void setUI();
    void OpenFile();
    void SaveFile();

signals:

};

#endif // CHARACTER_H
