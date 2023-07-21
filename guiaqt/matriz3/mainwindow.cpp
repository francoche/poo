#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPushButton*boton[5][5];

   for(int i=0;i<5;i++){
       for(int j=0;j<5;j++){
           this->pos=this->pos+1;
           QString butname="estacion"+QString::number(this->pos);
           boton[j][i]=MainWindow::findChild<QPushButton*>(butname);
           botones[j][i]=boton[j][i];
           connect(boton[j][i], SIGNAL(clicked()), this, SLOT(ejemplo()));
       }

   }
   connect(&timer, SIGNAL(timeout()), this, SLOT(contar()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::esAdyacenteEstacion(int row, int col)
{
    if (row - 1 >= 0 && estaciones[row - 1][col]) {
            return true;
        }


        if (row + 1 < 5 && estaciones[row + 1][col]) {
            return true;
        }


        if (col - 1 >= 0 && estaciones[row][col - 1]) {
            return true;
        }


        if (col + 1 < 5 && estaciones[row][col + 1]) {
            return true;
        }

        return false;
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

void MainWindow::ejemplo()
{


    QPushButton * Aux = (QPushButton *)sender();
    int rowClicked = -1;
    int colClicked = -1;

    for (int row = 0; row < 5; ++row) {
                for (int col = 0; col < 5; ++col) {
                    if (botones[row][col] == Aux) {
                        rowClicked = row;
                        colClicked = col;
                        break;
                    }
                }
            }
    if (rowClicked != -1 && colClicked != -1) {
        if (esAdyacenteEstacion(rowClicked, colClicked)) {
            Aux->setText("/");
            estaciones[rowClicked][colClicked]=true;
            Aux->setEnabled(false);
        }
    }


    //Aux->setStyleSheet("QPushButton {background-color:rgb(255, 255, 0); height: 25px; width: 25px; border-color: rgb(255, 102, 153); border-radius: 25%; border-style: solid; border-width: 7px; }");
    //Aux->setText("/");
    //Aux->setEnabled(false);
    }









void MainWindow::on_start_clicked()
{
    int aux1 = rand() % 5;
    int aux2 = rand() % 5;
    int aux3 = rand() % 5;
    int aux4 = rand() % 5;

        botones[aux1][aux2]->setText("estacion");
        estaciones[aux1][aux2]=true;
        botones[aux1][aux2]->setEnabled(false);
        botones[aux3][aux4]->setText("estacion");
        estaciones[aux3][aux4]=true;
        botones[aux3][aux4]->setEnabled(false);



        this->timer.start(1000);
        contar();
        ui->start->setEnabled(false);

}


void MainWindow::on_pushButton_clicked()
{
    timer.stop();
        cont = 0;
        ui->lcdNumber->display(cont);
        for (int row = 0; row < 5; ++row) {
            for (int col = 0; col < 5; ++col) {
                botones[col][row]->setText("camino");
                botones[col][row]->setEnabled(true);
                estaciones[col][row]=false;
            }
        }
        ui->start->setEnabled(true);
}


