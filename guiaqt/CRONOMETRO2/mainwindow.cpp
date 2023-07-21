#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cont=0;
    connect(&timer, SIGNAL(timeout()), this, SLOT(contar()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::contar()
{

    cont++;
    ui->lcdNumber->display(cont);
    if(cont>9){
        QMessageBox::information(this,"perdiste","perdiste");
        on_pushButton_2_clicked();
    }
}


void MainWindow::on_pushButton_clicked()
{
    this->timer.start(1000);
    contar();
}


void MainWindow::on_pushButton_2_clicked()
{
    timer.stop();
    cont=0;
    ui->lcdNumber->display(cont);
}

