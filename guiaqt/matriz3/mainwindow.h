#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPushButton>
#include<QTimer>
#include <QMessageBox>
#include <cstdlib>
#include <ctime>
#include "estaciones.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool esAdyacenteEstacion(int row,int col);
    void generar_estacion();
    bool esAdyacenteEstacion2(int row2,int col2);
    bool esAdyacenteEstacion3(int row,int col);
    bool esAdyacenteEstacion4(int row,int col);
    bool esAdyacenteEstacion5(int row,int col);
    void bloquear(int row,int col);
    QPushButton* botones[5][5];

private slots:
 void ejemplo();
 void contar();
 void on_start_clicked();
 void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QTimer timer;
    int row;
    int col;
    int row2;
    int col2;
    int pos=0;
    int cont=0;
    int ganaste=0;
    int cont_estaciones=0;
    int tipo_estacion;
    int tipo_estacion2;
    int tipo_estacion3;
    bool caminos[5][5] = {false};
    bool estaciones[5][5] = {false};
    Estaciones testaciones[5][5];
    bool ocupado[5][5]={false};
    bool ultimo[5][5]={false};

};
#endif // MAINWINDOW_H
