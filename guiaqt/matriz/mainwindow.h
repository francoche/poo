#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QPushButton>
#include <QTimer>
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
    QPushButton*botones[25];



private slots:
  void ejemplo();
  void empesar();
  void contar();

  void on_start_clicked();

  void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    //QPushButton *pushButton;
    QTimer timer;
    int cont=0;




};
#endif // MAINWINDOW_H
