#include "screen_completed_purchase.h"
#include "ui_screen_completed_purchase.h"
#include "screen_home.h"
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

void screen_completed_purchase::on_pb_voltar_clicked()
{
    screen_home *s = new screen_home(this);
    s->show();
    hide();
}

