#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "screen_login.h"

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
    screen_login *s = new screen_login();
    s->show();
    hide();
}
void MainWindow::on_btnNovaConta_clicked()
{
    //screen_new_account l;
    //l.exec();
    hide();
    m = new screen_new_account(this);
    m->show();
}


