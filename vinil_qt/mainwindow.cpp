#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "teste_login.h"
#include "inserirusuario.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Teste_Login l;
    l.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    InserirUsuario i;
    i.exec();
}
