#include "client.h"
#include "mainwindow.h"
#include "screen_home.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Cart(int id, Client client, std::vector<Vinyl> vinylList, double total);
    MainWindow w;
    w.show();
    //screen_home h;
    //h.show();
    //screen_new_account *m = new screen_new_account();
    //m->show();
    return a.exec();
}
