#ifndef SKELETON_H
#define SKELETON_H

#pragma once

#include <QMainWindow>
#include <QApplication>

class Skeleton : public QMainWindow {

  Q_OBJECT

  public:
    Skeleton(QWidget *parent = nullptr);
    void OpenFile();
    void SaveFile();
    void ExportFile();
    void buildStage();
    const QString *filename;
    void fromJson(QJsonDocument doc);
    QJsonDocument toJson();


  private:
     QTabWidget *tabWidget;

};


#endif // SKELETON_H
