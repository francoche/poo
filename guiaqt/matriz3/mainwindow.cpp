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
        if (estaciones[row-1][col]==true &&  testaciones[row-1][col].geta()==3) {

            return true;
        }


        if (estaciones[row+1][col]==true && testaciones[row+1][col].geta()==3) {

            return true;
        }

        return false;
}

bool MainWindow::esAdyacenteEstacion4(int row, int col)
{
        if (estaciones[row][col-1]==true && testaciones[row][col-1].geta()==4) {

            return true;
        }


        if (estaciones[row][col+1]==true && testaciones[row][col+1].geta()==4) {

            return true;
        }

        return false;
}

bool MainWindow::esAdyacenteEstacion5(int row, int col)
{
    if ( estaciones[row][col - 1]) {
        this->row2=row;
        this->col2=col-1;
        this->tipo_estacion3=this->testaciones[row][col-1].geta();

        return true;
    }


    if ( estaciones[row][col + 1]) {
        this->row2=row;
        this->col2=col+1;
         this->tipo_estacion3=this->testaciones[row][col+1].geta();

        return true;
    }
    if ( estaciones[row-1][col]) {
        this->row2=row-1;
        this->col2=col;
         this->tipo_estacion3=this->testaciones[row-1][col].geta();

        return true;
    }


    if ( estaciones[row+1][col]) {
        this->row2=row+1;
        this->col2=col;
         this->tipo_estacion3=this->testaciones[row+1][col].geta();

        return true;
    }
    return false;
}

bool MainWindow::esAdyacenteEstacion6(int row, int col)
{
    if (estaciones[row][col-1]==false && estaciones[row][col+1]==false && estaciones[row-1][col]==false && estaciones[row+1][col]==false) {

        return true;
    }





    return false;
}

bool MainWindow::esAdyacenteEstacion7(int row, int col)
{
    if (estaciones[row][col-1]==true && testaciones[row][col - 1].geta()==2) {

        return true;
    }


    if (estaciones[row][col+1]==true && testaciones[row][col + 1].geta()==2) {

        return true;
    }

    if (estaciones[row-1][col]==true && testaciones[row-1][col].geta()==2) {

        return true;
    }


    if (estaciones[row+1][col]==true &&testaciones[row+1][col].geta()==2) {

        return true;
    }
    return false;
}

bool MainWindow::esAdyacenteEstacion8(int row, int col)
{
    if (estaciones[row][col-1]==true && testaciones[row][col - 1].geta()==1) {

        return true;
    }


    if (estaciones[row][col+1]==true && testaciones[row][col + 1].geta()==1) {

        return true;
    }

    if (estaciones[row-1][col]==true && testaciones[row-1][col].geta()==1) {

        return true;
    }


    if (estaciones[row+1][col]==true && testaciones[row+1][col].geta()==1) {

        return true;
    }
    return false;
}

bool MainWindow::adyacente_ultimo(int row, int col)
{
    if(row-1==ultimox && col==ultimoy ){
        return true;
    }

    if(row+1==ultimox && col==ultimoy ){
        return true;
    }

    if(row==ultimox && col-1==ultimoy ){
        return true;
    }

    if(row==ultimox && col+1==ultimoy ){
        return true;
    }

    return false;
}



bool MainWindow::camino_horizontal(int row, int col)
{

    if ( ultimox==row-1 && ultimoy==col && testaciones[row][col].geta()==3) {

        return true;
    }

    if ( ultimox==row+1 && ultimoy==col && testaciones[row][col].geta()==3) {

        return true;
    }
    return false;
}

bool MainWindow::camino_vertical(int row, int col)
{
    if ( ultimox==row && ultimoy==col-1 && testaciones[row][col].geta()==4) {

        return true;
    }

    if ( ultimox==row && ultimoy==col+1 && testaciones[row][col].geta()==4) {

        return true;
    }
    return false;
}

bool MainWindow::camino_1_2(int row, int col)
{
    if ( ultimox==row && ultimoy==col-1) {
        if(testaciones[row][col].geta()==1 || testaciones[row][col].geta()==2){
          return true;
        }
    }

    if ( ultimox==row && ultimoy==col+1) {
        if(testaciones[row][col].geta()==1 || testaciones[row][col].geta()==2){
          return true;
        }
    }


    if ( ultimox==row-1 && ultimoy==col) {
        if(testaciones[row][col].geta()==1 || testaciones[row][col].geta()==2){
          return true;
        }
    }


    if ( ultimox==row+1 && ultimoy==col) {
        if(testaciones[row][col].geta()==1 || testaciones[row][col].geta()==2){
          return true;
        }
    }

    return false;
}

void MainWindow::bloquear(int row,int col)
{
    if(esAdyacenteEstacion5(row,col)){
        switch (this->tipo_estacion3) {
        case 1:{caminos[row2][col2]=false;
            //testaciones[row2][col2].setdatos(0,row2,col2);
            //estaciones[row2][col2]==false;
            break;}
        case 2:{
            caminos[row2][col2]=false;
            //testaciones[row2][col2].setdatos(0,row2,col2);

            break;}
        case 3:{caminos[row2][col2]=false;
            //estaciones[row2][col2]==false;
            //testaciones[row2][col2].setdatos(0,row2,col2);
            break;}
        case 4:{caminos[row2][col2]=false;
            //estaciones[row2][col2]==false;
            //testaciones[row2][col2].setdatos(0,row2,col2);
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
    int cont=0;

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
        cont++;
        if(cont>30){
            timer.stop();
            QMessageBox::information(this,"ganaste","ganaste");
            on_pushButton_clicked();
        }
    }

    if(cont<30){
        this->cont_estaciones++;
        testaciones[aux1][aux2].setdatos(this->tipo_estacion,aux1,aux2);
        botones[aux1][aux2]->setText("estacion"+QString::number(this->cont_estaciones)+'-'+QString::number(this->tipo_estacion));
        estaciones[aux1][aux2]=true;
        ocupado[aux1][aux2]=true;
        this->row=aux1;
        this->col=aux2;
    }
    /*this->cont_estaciones++;
    testaciones[aux1][aux2].setdatos(this->tipo_estacion,aux1,aux2);
    botones[aux1][aux2]->setText("estacion"+QString::number(this->cont_estaciones)+'-'+QString::number(this->tipo_estacion));
    estaciones[aux1][aux2]=true;
    ocupado[aux1][aux2]=true;
    this->row=aux1;
    this->col=aux2;*/

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
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    if (esAdyacenteEstacion(rowClicked, colClicked)&&esAdyacenteEstacion3(rowClicked,colClicked) && ultimo==false) {
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
                    caminos[j][i]=false;

                }
             }
            //[rowClicked][colClicked]=true;
            estaciones[rowClicked][colClicked]=true;
            ocupado[rowClicked][colClicked]=true;
            for(int i=0;i<5;i++){
                for(int j=0;j<5;j++){
                    if(estaciones[j][i]==true){
                        if(this->testaciones[j][i].geta()==2){
                            caminos[j][i]=true;
                        }
                        //caminos[j][i]=true;
                    }
                }
             }
            Aux->setEnabled(false);
            cont = 0;
            ui->lcdNumber->display(cont);
             ultimox=-1;
             ultimoy=-1;
             ultimo=false;
            generar_estacion();
        }else{
            /*if(this->cont_estaciones==1){
               estaciones[segx][segy]=true;
               cont_estaciones++;

            }*/
            Aux->setText("/");
            caminos[rowClicked][colClicked]=true;
            ocupado[rowClicked][colClicked]=true;
            bloquear(rowClicked,colClicked);
            this->ganaste++;
            Aux->setEnabled(false);
            ultimox=rowClicked;
            ultimoy=colClicked;
            ultimo=true;


        }
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    } else if (esAdyacenteEstacion(rowClicked, colClicked)&&esAdyacenteEstacion4(rowClicked,colClicked)&& ultimo==false) {
    if (rowClicked != -1 && colClicked != -1) {

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
                        caminos[j][i]=false;

                    }
                 }
                //[rowClicked][colClicked]=true;
                estaciones[rowClicked][colClicked]=true;
                ocupado[rowClicked][colClicked]=true;
                for(int i=0;i<5;i++){
                    for(int j=0;j<5;j++){
                        if(estaciones[j][i]==true){
                            if(this->testaciones[j][i].geta()==2){
                                caminos[j][i]=true;
                            }
                            //caminos[j][i]=true;
                        }
                    }
                 }
                Aux->setEnabled(false);
                cont = 0;
                ui->lcdNumber->display(cont);
                ultimox=-1;
                ultimoy=-1;
                ultimo=false;
                generar_estacion();
            }else{
                /*if(this->cont_estaciones==1){
                   estaciones[segx][segy]=true;
                   cont_estaciones++;

                }*/
                Aux->setText("/");
                caminos[rowClicked][colClicked]=true;
                ocupado[rowClicked][colClicked]=true;
                bloquear(rowClicked,colClicked);
                this->ganaste++;
                Aux->setEnabled(false);
                ultimox=rowClicked;
                ultimoy=colClicked;
                ultimo=true;


            }
        }
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    } else if (esAdyacenteEstacion(rowClicked, colClicked)&&esAdyacenteEstacion7(rowClicked,colClicked)&& ultimo==false) {
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
                    caminos[j][i]=false;

                }
             }
            //[rowClicked][colClicked]=true;
            estaciones[rowClicked][colClicked]=true;
            ocupado[rowClicked][colClicked]=true;
            for(int i=0;i<5;i++){
                for(int j=0;j<5;j++){
                    if(estaciones[j][i]==true){
                        if(this->testaciones[j][i].geta()==2){
                            caminos[j][i]=true;
                        }
                        //caminos[j][i]=true;
                    }
                }
             }
            Aux->setEnabled(false);
            cont = 0;
            ui->lcdNumber->display(cont);
            ultimox=-1;
            ultimoy=-1;
            ultimo=false;
            generar_estacion();
        }else{
            /*if(this->cont_estaciones==1){
               estaciones[segx][segy]=true;
               cont_estaciones++;

            }*/
            Aux->setText("/");
            caminos[rowClicked][colClicked]=true;
            ocupado[rowClicked][colClicked]=true;
            bloquear(rowClicked,colClicked);
            this->ganaste++;
            Aux->setEnabled(false);
            ultimox=rowClicked;
            ultimoy=colClicked;
            ultimo=true;


        }
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    else if (esAdyacenteEstacion8(rowClicked,colClicked)&&esAdyacenteEstacion(rowClicked, colClicked)&& ultimo==false) {
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
                        caminos[j][i]=false;

                    }
                 }
                //[rowClicked][colClicked]=true;
                estaciones[rowClicked][colClicked]=true;
                ocupado[rowClicked][colClicked]=true;
                for(int i=0;i<5;i++){
                    for(int j=0;j<5;j++){
                        if(estaciones[j][i]==true){
                            if(this->testaciones[j][i].geta()==2){
                                caminos[j][i]=true;
                            }
                            //caminos[j][i]=true;
                        }
                    }
                 }
                Aux->setEnabled(false);
                cont = 0;
                ui->lcdNumber->display(cont);
                ultimox=-1;
                ultimoy=-1;
                ultimo=false;
                generar_estacion();
            }else{
                /*if(this->cont_estaciones==1){
                   estaciones[segx][segy]=true;
                   cont_estaciones++;

                }*/
                Aux->setText("/");
                caminos[rowClicked][colClicked]=true;
                ocupado[rowClicked][colClicked]=true;
                bloquear(rowClicked,colClicked);
                this->ganaste++;
                Aux->setEnabled(false);
                ultimox=rowClicked;
                ultimoy=colClicked;
                ultimo=true;


            }
        }
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    else if (esAdyacenteEstacion(rowClicked, colClicked) && adyacente_ultimo(rowClicked,colClicked)) {
            if(rowClicked==this->row && colClicked==this->col && camino_horizontal(rowClicked,colClicked)){
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
                        caminos[j][i]=false;

                    }
                 }
                //[rowClicked][colClicked]=true;
                estaciones[rowClicked][colClicked]=true;
                ocupado[rowClicked][colClicked]=true;
                for(int i=0;i<5;i++){
                    for(int j=0;j<5;j++){
                        if(estaciones[j][i]==true){
                            if(this->testaciones[j][i].geta()==2){
                                caminos[j][i]=true;
                            }
                            //caminos[j][i]=true;
                        }
                    }
                 }
                Aux->setEnabled(false);
                cont = 0;
                ui->lcdNumber->display(cont);
                ultimox=-1;
                ultimoy=-1;
                ultimo=false;
                generar_estacion();
            }else if(rowClicked==this->row && colClicked==this->col && camino_vertical(rowClicked,colClicked)){
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
                        caminos[j][i]=false;

                    }
                 }
                //[rowClicked][colClicked]=true;
                estaciones[rowClicked][colClicked]=true;
                ocupado[rowClicked][colClicked]=true;
                for(int i=0;i<5;i++){
                    for(int j=0;j<5;j++){
                        if(estaciones[j][i]==true){
                            if(this->testaciones[j][i].geta()==2){
                                caminos[j][i]=true;
                            }
                            //caminos[j][i]=true;
                        }
                    }
                 }
                Aux->setEnabled(false);
                cont = 0;
                ui->lcdNumber->display(cont);
                ultimox=-1;
                ultimoy=-1;
                ultimo=false;
                generar_estacion();
            } else if(rowClicked==this->row && colClicked==this->col && camino_1_2(rowClicked,colClicked)){
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
                        caminos[j][i]=false;

                    }
                 }
                //[rowClicked][colClicked]=true;
                estaciones[rowClicked][colClicked]=true;
                ocupado[rowClicked][colClicked]=true;
                for(int i=0;i<5;i++){
                    for(int j=0;j<5;j++){
                        if(estaciones[j][i]==true){
                            if(this->testaciones[j][i].geta()==2){
                                caminos[j][i]=true;
                            }
                            //caminos[j][i]=true;
                        }
                    }
                 }
                Aux->setEnabled(false);
                cont = 0;
                ui->lcdNumber->display(cont);
                ultimox=-1;
                ultimoy=-1;
                ultimo=false;
                generar_estacion();
            }else if(estaciones[rowClicked][colClicked]==false){
                Aux->setText("/");
                caminos[rowClicked][colClicked]=true;
                ocupado[rowClicked][colClicked]=true;
                bloquear(rowClicked,colClicked);
                this->ganaste++;
                Aux->setEnabled(false);
                ultimox=rowClicked;
                ultimoy=colClicked;
                ultimo=true;


            }
        }
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
        //estaciones[aux3][aux4]=true;
        break;
    }
    case 2:{
        testaciones[aux3][aux4].setdatos(this->tipo_estacion2,aux3,aux4);
        //estaciones[aux3][aux4]=true;
        break;}
    case 3:{
        testaciones[aux3][aux4].setdatos(this->tipo_estacion2,aux3,aux4);
        //estaciones[aux3][aux4]=true;
        break;}
    case 4:{
        testaciones[aux3][aux4].setdatos(this->tipo_estacion2,aux3,aux4);
        //estaciones[aux3][aux4]=true;
        break;}
    }
        botones[aux1][aux2]->setText("estacion1-"+QString::number(this->tipo_estacion));
        caminos[aux1][aux2]=true;
        ocupado[aux1][aux2]=true;
        botones[aux1][aux2]->setEnabled(false);
        //ultimox=aux1;
        //ultimoy=aux2;
        this->ganaste++;
        botones[aux3][aux4]->setText("estacion2-"+QString::number(this->tipo_estacion2));
        //estaciones[aux3][aux4]=true;
        ocupado[aux3][aux4]=true;
        this->row=aux3;
        this->col=aux4;
        segx=aux3;
        segy=aux4;
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
                ultimox=-1;
                ultimoy=-1;
                segx=-1;
                segy=-1;
                ultimo=false;
            }
        }
        ui->start->setEnabled(true);
        this->cont_estaciones=0;
}


