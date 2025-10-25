#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_ctofbutton_clicked()
{
    float  celsius = ui->inputedit->toPlainText().toFloat();
    float fahre = (celsius* 9/5)+32;
    ui->value->setText("Sonuc : "+ QString::number(fahre) + "F");

}


void MainWindow::on_ftocbutton_clicked()
{
    float fahre = ui->inputedit->toPlainText().toFloat();
    float celsius = (fahre - 32)* 5/9;
    ui->value->setText("Sonuc : "+ QString::number(celsius) + "C");
}

