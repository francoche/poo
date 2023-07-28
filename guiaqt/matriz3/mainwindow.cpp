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
    if (row - 1 >= 0 && caminos[row - 1][col]) {
            return true;
        }


        if (row + 1 < 5 && caminos[row + 1][col]) {
            return true;
        }


        if (col - 1 >= 0 && caminos[row][col - 1]) {
            return true;
        }


        if (col + 1 < 5 && caminos[row][col + 1]) {
            return true;
        }

        return false;
}

bool MainWindow::esAdyacenteEstacion2(int row2,int col2)
{
    if (estaciones[row2-1][col2]==true) {
            return true;

        }


        if (estaciones[row2+1][col2]==true) {
            return true;

        }


        if (estaciones[row2][col2-1]==true) {
            return true;

        }


        if (estaciones[row2][col2+1]==true) {
            return true;

        }

        return false;
}


bool MainWindow::esAdyacenteEstacion3(int row, int col)
{
    if (row - 1 >= 0 && estaciones[row - 1][col]) {
        this->col2=col;
        this->row2=row-1;
        this->tipo_estacion3=this->testaciones[row-1][col].geta();
        return true;

        }


        if (row + 1 < 5 && estaciones[row + 1][col]) {
            this->col2=col;
            this->row2=row+1;
            this->tipo_estacion3=this->testaciones[row+1][col].geta();
            return true;
        }


        if (col - 1 >= 0 && estaciones[row][col - 1]) {
            this->col2=col-1;
            this->row2=row;
            this->tipo_estacion3=this->testaciones[row][col-1].geta();
            return true;
        }


        if (col + 1 < 5 && estaciones[row][col + 1]) {
            this->col2=col+1;
            this->row2=row;
            this->tipo_estacion3=this->testaciones[row][col+1].geta();
            return true;
        }

        return false;
}

void MainWindow::bloquear(int row,int col)
{
    if(esAdyacenteEstacion3(row,col)){
        switch (this->tipo_estacion3) {
        case 1:{caminos[row2][col2]=false;
            break;}
        }
    }
}

void MainWindow::generar_estacion()
{
    /*int aux1 = rand() % 5;
    int aux2 = rand() % 5;

    while (ocupado[aux1][aux2]==true || esAdyacenteEstacion2(aux1,aux2)) {
        aux1 = rand() % 5;
        aux2 = rand() % 5;
    }
    this->cont_estaciones++;
    botones[aux1][aux2]->setText("estacion"+QString::number(this->cont_estaciones));;
    estaciones[aux1][aux2]=true;
    ocupado[aux1][aux2]=true;
    this->row=aux1;
    this->col=aux2;*/
    int aux1 ;
    int aux2 ;
    this->tipo_estacion=1+rand() % 4;
    switch (this->tipo_estacion) {
    case 1:
    case 2:{ aux1 = rand() % 5;
             aux2 = rand() % 5;
             break;}
    case 3:{ aux1 = 1+rand() % 3;
             aux2 = rand() % 5;
             break;}
    case 4:{ aux1 = rand() % 5;
             aux2 = 1+rand() % 3;
             break;}
    }
    while (ocupado[aux1][aux2]==true || esAdyacenteEstacion2(aux1,aux2)) {
        switch (this->tipo_estacion) {
        case 1:
        case 2:{ aux1 = rand() % 5;
                 aux2 = rand() % 5;
                 break;}
        case 3:{ aux1 = 1+rand() % 3;
                 aux2 = rand() % 5;
                 break;}
        case 4:{ aux1 = rand() % 5;
                 aux2 = 1+rand() % 3;
                 break;}
        }
    }
    this->cont_estaciones++;
    botones[aux1][aux2]->setText("estacion"+QString::number(this->cont_estaciones)+'-'+QString::number(this->tipo_estacion));
    estaciones[aux1][aux2]=true;
    ocupado[aux1][aux2]=true;
    this->row=aux1;
    this->col=aux2;
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
            if(rowClicked==this->row && colClicked==this->col){
                if(this->cont_estaciones==1){
                    this->cont_estaciones++;
                    this->ganaste++;

                }
                this->ganaste++;

                if(this->ganaste==26){
                    timer.stop();
                    QMessageBox::information(this,"ganaste","ganaste");
                    on_pushButton_clicked();
                }
                //Aux->setText("estacion"+QString::number(this->cont_estaciones));
                //estaciones[rowClicked][colClicked]=true;
                for(int i=0;i<5;i++){
                    for(int j=0;j<5;j++){
                        /*if(estaciones[j][i]==false){
                            caminos[j][i]=false;
                        }*/


                          caminos[j][i]=false;

                    }
                 }
                //caminos[rowClicked][colClicked]=true;
                estaciones[rowClicked][colClicked]=true;
                ocupado[rowClicked][colClicked]=true;
                for(int i=0;i<5;i++){
                    for(int j=0;j<5;j++){
                        if(estaciones[j][i]==true){
                            caminos[j][i]=true;
                        }
                    }
                 }
                Aux->setEnabled(false);
                cont = 0;
                ui->lcdNumber->display(cont);
                generar_estacion();
            }else{
                Aux->setText("/");
                caminos[rowClicked][colClicked]=true;
                ocupado[rowClicked][colClicked]=true;
                bloquear(rowClicked,colClicked);
                this->ganaste++;
                Aux->setEnabled(false);

            }
        }
    }


    //Aux->setStyleSheet("QPushButton {background-color:rgb(255, 255, 0); height: 25px; width: 25px; border-color: rgb(255, 102, 153); border-radius: 25%; border-style: solid; border-width: 7px; }");
    //Aux->setText("/");
    //Aux->setEnabled(false);
    }









void MainWindow::on_start_clicked()
{
    srand(time(NULL));
    int aux1 ;
    int aux2 ;
    int aux3;
    int aux4;
    this->tipo_estacion=1+rand() % 4;
    switch (this->tipo_estacion) {
    case 1:
    case 2:{ aux1 = rand() % 5;
             aux2 = rand() % 5;
             break;}
    case 3:{ aux1 = 1+rand() % 3;
             aux2 = rand() % 5;
             break;}
    case 4:{ aux1 = rand() % 5;
             aux2 = 1+rand() % 3;
             break;}
    }
    switch (this->tipo_estacion) {
    case 1:{
        testaciones[aux1][aux2].setdatos(this->tipo_estacion,aux1,aux2);
        estaciones[aux1][aux2]=true;
        break;
    }
    case 2:{
        testaciones[aux1][aux2].setdatos(this->tipo_estacion,aux1,aux2);
        estaciones[aux1][aux2]=true;
        break;
    }
    case 3:{
        testaciones[aux1][aux2].setdatos(this->tipo_estacion,aux1,aux2);
        estaciones[aux1][aux2]=true;
        break;
    }
    case 4:{
        testaciones[aux1][aux2].setdatos(this->tipo_estacion,aux1,aux2);
        estaciones[aux1][aux2]=true;
        break;
    }
    }
    //estaciones[aux1][aux2]=true;
    this->tipo_estacion2=1+rand() % 4;
    /*int aux1 = rand() % 5;
    //int aux2 = rand() % 5;
    int aux3 = rand() % 5;
    int aux4 = rand() % 5;
    while(aux1==aux3 && aux2==aux4){
         aux3 = rand() % 5;
         aux4 = rand() % 5;
    }*/
    switch (this->tipo_estacion2) {
    case 1:
    case 2:{ aux3 = rand() % 5;
             aux4 = rand() % 5;
             break;}
    case 3:{ aux3 = 1+rand() % 3;
             aux4 = rand() % 5;
             break;}
    case 4:{ aux3 = rand() % 5;
             aux4 = 1+rand() % 3;
             break;}
    }
    while(aux1==aux3 && aux2==aux4){
        switch (this->tipo_estacion2) {
        case 1:
        case 2:{ aux3 = rand() % 5;
                 aux4 = rand() % 5;
                 break;}
        case 3:{ aux3 = 1+rand() % 3;
                 aux4 = rand() % 5;
                 break;}
        case 4:{ aux3 = rand() % 5;
                 aux4 = 1+rand() % 3;
                 break;}
        }
    }
    while(esAdyacenteEstacion2(aux3,aux4)){
        switch (this->tipo_estacion2) {
        case 1:
        case 2:{ aux3 = rand() % 5;
                 aux4 = rand() % 5;
                 break;}
        case 3:{ aux3 = 1+rand() % 3;
                 aux4 = rand() % 5;
                 break;}
        case 4:{ aux3 = rand() % 5;
                 aux4 = 1+rand() % 3;
                 break;}
        }
    }
    switch (this->tipo_estacion2) {
    case 1:{
        testaciones[aux3][aux4].setdatos(this->tipo_estacion2,aux3,aux4);
        estaciones[aux3][aux4]=true;
        break;
    }
    case 2:{
        testaciones[aux3][aux4].setdatos(this->tipo_estacion2,aux3,aux4);
        estaciones[aux3][aux4]=true;
        break;}
    case 3:{
        testaciones[aux3][aux4].setdatos(this->tipo_estacion2,aux3,aux4);
        estaciones[aux3][aux4]=true;
        break;}
    case 4:{
        testaciones[aux3][aux4].setdatos(this->tipo_estacion2,aux3,aux4);
        estaciones[aux3][aux4]=true;
        break;}
    }
        botones[aux1][aux2]->setText("estacion1-"+QString::number(this->tipo_estacion));
        caminos[aux1][aux2]=true;
        ocupado[aux1][aux2]=true;
        botones[aux1][aux2]->setEnabled(false);
        this->ganaste++;
        botones[aux3][aux4]->setText("estacion2-"+QString::number(this->tipo_estacion2));
        //estaciones[aux3][aux4]=true;
        ocupado[aux3][aux4]=true;
        this->row=aux3;
        this->col=aux4;
        this->cont_estaciones++;
        this->timer.start(1000);
        contar();
        ui->start->setEnabled(false);

}


void MainWindow::on_pushButton_clicked()
{
    timer.stop();
        cont = 0;
        this->ganaste=0;
        ui->lcdNumber->display(cont);
        for (int row = 0; row < 5; ++row) {
            for (int col = 0; col < 5; ++col){
                botones[col][row]->setText("camino");
                botones[col][row]->setEnabled(true);
                caminos[col][row]=false;
                estaciones[col][row] =false;
                ocupado[col][row]=false;
            }
        }
        ui->start->setEnabled(true);
        this->cont_estaciones=0;
}


