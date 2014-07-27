#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::chargeAcc()
{
    acc.charge(10.0);
}

void MainWindow::dischargeAcc()
{
    acc.discharge(10.0);
}


void MainWindow::on_pushButton_2_clicked()
{
    acc.discharge(30.0);

    ui->AccBar->setValue(acc.Getcurrent_energy_level());
}

void MainWindow::on_pushButton_clicked()
{
    acc.charge(30.0);
    ui->AccBar->setValue(acc.Getcurrent_energy_level());
}
