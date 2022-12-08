#include "screen_completed_purchase.h"
#include "ui_screen_completed_purchase.h"

screen_completed_purchase::screen_completed_purchase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::screen_completed_purchase)
{
    ui->setupUi(this);
}

screen_completed_purchase::~screen_completed_purchase()
{
    delete ui;
}
