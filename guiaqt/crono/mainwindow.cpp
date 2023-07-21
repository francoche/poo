#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->tiempo = new Tiempo();
    this->timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(moverbarra()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

inline void MainWindow::reset()
{
    this->ui->lcdNumber->display(this->tiempo->get_seg());
}

void MainWindow::moverbarra()
{
    this->tiempo->aumentar();
    reset();
    if(tiempo->get_seg()>9){
        QMessageBox::information(this,"perdiste","perdiste");
        on_pushButton_2_clicked();

    }
}

void MainWindow::on_pushButton_clicked()
{
    if (!this->timer->isActive()) {
        this->timer->start(1000);

    }

}







void MainWindow::on_pushButton_2_clicked()
{
   timer->stop();
   this->tiempo->reset();
   reset();

}

