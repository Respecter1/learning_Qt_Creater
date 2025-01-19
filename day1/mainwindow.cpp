#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
#include <QString>

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


void MainWindow::on_pushButton_clicked()
{
    clickCount++;
    ui->labelCounter->setText("Клики: "+ QString::number(clickCount));
    //ui - мы обращаемся к визуальной части программы
    //labelCounter - так мы периминовали нашу кнопку чтоб в коде легче читалось
    //setText - тут как и в обычном сете мы записуем в наш каунтер число
    //("Клики: "+ QString::number(clickCount)) текст + мы записуем колчество кликов
//    QMessageBox::information(this, "Приветствие", "Привет Qt!");
}

