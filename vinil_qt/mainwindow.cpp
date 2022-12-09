#include "mainwindow.h"
#include "./ui_mainwindow.h"

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
    //Teste_Login l;
    //l.setModal(true);
    //l.exec();
    hide();
    l = new screen_login(this);
    l->show();
}
void MainWindow::on_btnNovaConta_clicked()
{
    //screen_new_account l;
    //l.exec();
    hide();
    m = new screen_new_account(this);
    m->show();
}


