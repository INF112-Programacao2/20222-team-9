#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "teste_login.h"
#include "screen_new_account.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked(); //"Slots named on_foo_bar are error prone" ??

    void on_btnNovaConta_clicked();

private:
    Ui::MainWindow *ui;
    Teste_Login *l;
    screen_new_account *m;
};

#endif // MAINWINDOW_H
