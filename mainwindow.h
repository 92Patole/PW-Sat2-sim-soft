#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Accumulator.h>
#include <DataOperator.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void make_tick();
private slots:

    void iterateSatelliteTime();

    void on_powerConsumption_valueChanged(int value);

private:
    DataOperator satellite;
    void chargeAcc();
    void dischargeAcc();
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
