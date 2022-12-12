#include "screen_completed_purchase.h"
#include "ui_screen_completed_purchase.h"
#include "screen_home.h"
screen_completed_purchase::screen_completed_purchase(QWidget *parent, int client_id) :
    QDialog(parent),
    ui(new Ui::screen_completed_purchase)
{
    this->client_id = client_id;
    ui->setupUi(this);
}

screen_completed_purchase::~screen_completed_purchase()
{
    delete ui;
}

void screen_completed_purchase::on_pb_voltar_clicked()
{
    screen_home *s = new screen_home(this, client_id);
    s->show();
    hide();
}

