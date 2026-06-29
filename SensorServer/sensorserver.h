#ifndef SENSORSERVER_H
#define SENSORSERVER_H

#include <QtGui/QMainWindow>
#include "ui_sensorserver.h"

class SensorServer : public QMainWindow
{
    Q_OBJECT

public:
    SensorServer(QWidget *parent = 0, Qt::WFlags flags = 0);
    ~SensorServer();

private:
    Ui::SensorServerClass ui;
};

#endif // SENSORSERVER_H
