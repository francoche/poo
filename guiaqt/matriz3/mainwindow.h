#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPushButton>
#include<QTimer>
#include <QMessageBox>
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
    QPushButton* botones[5][5];

private slots:
 void ejemplo();
 void contar();
 void on_start_clicked();
 void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QTimer timer;
    int pos=0;
    int cont=0;
    bool estaciones[5][5] = {false};

};
#endif // MAINWINDOW_H
