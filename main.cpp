/*
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
*/
/*
 *  https://zetcode.com/gui/qt5/menusandtoolbars/
 * */

#include "skeleton.h"

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  Skeleton window;

  window.showMaximized();
  window.setWindowTitle("Application skeleton");
  window.show();

  return app.exec();
}
