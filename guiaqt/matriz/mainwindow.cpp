#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


     QPushButton*boton[25];
    for(int i=0;i<25;i++){
        QString butname="estacion"+QString::number(i+1);
        boton[i]=MainWindow::findChild<QPushButton*>(butname);
        botones[i]=boton[i];
        connect(boton[i], SIGNAL(clicked()), this, SLOT(ejemplo()));

    }
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
        on_pushButton_clicked();
    }
}
void MainWindow::empesar()
{
    QPushButton * Aux = (QPushButton *)sender();
        Aux->setStyleSheet("QPushButton {background-color:rgb(255, 255, 0); height: 25px; width: 25px; border-color: rgb(255, 102, 153); border-radius: 25%; border-style: solid; border-width: 7px; }");
        Aux->setText("anda loco");
}

void MainWindow::ejemplo()
{
    QPushButton * Aux = (QPushButton *)sender();
        //Aux->setStyleSheet("QPushButton {background-color:rgb(255, 255, 0); height: 25px; width: 25px; border-color: rgb(255, 102, 153); border-radius: 25%; border-style: solid; border-width: 7px; }");
        Aux->setText("/");
        Aux->setEnabled(false);

}


void MainWindow::on_start_clicked()
{
    int aux=rand()%25;
    int aux2=rand()%25;
    while (aux2==aux) {
        aux2=rand()%25;
    }
    botones[aux]->setText("estacion");
    botones[aux]->setEnabled(false);
    botones[aux2]->setText("estacion");
    botones[aux2]->setEnabled(false);
    this->timer.start(1000);
    contar();
    ui->start->setEnabled(false);
}


void MainWindow::on_pushButton_clicked()
{
    timer.stop();
    cont=0;
    ui->lcdNumber->display(cont);
    for(int i=0;i<25;i++){
        botones[i]->setText("camino");
        botones[i]->setEnabled(true);
    }
    ui->start->setEnabled(true);
}

