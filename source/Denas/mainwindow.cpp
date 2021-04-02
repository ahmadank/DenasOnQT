#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->batterySlider, SIGNAL(valueChanged(int)), ui->batteryBar, SLOT(setvalue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::battery(){

}
