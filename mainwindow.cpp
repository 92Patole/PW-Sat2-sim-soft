#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <unistd.h>
#include <thread>
#include "QTimer"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(iterateSatelliteTime()));
    timer->start(500); // execute sattelite iteration every one second
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::iterateSatelliteTime()
{
    for(int i=0; i<10; i++)
    satellite.iterateAllModules();
    double a = satellite.getPowerBudget();
    ui->lcdNumber->display(a);
    this->repaint();


}


void MainWindow::on_powerConsumption_valueChanged(int value)
{
    satellite.setPowerConsumption(1,value);
    satellite.setPowerConsumption(2,value);
    satellite.setPowerConsumption(3,value);
    satellite.setPowerConsumption(4,value);
}
