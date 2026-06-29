#include "sensorserver.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SensorServer w;
    w.show();
    return a.exec();
}
