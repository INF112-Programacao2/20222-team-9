#ifndef SCREEN_DISC_H
#define SCREEN_DISC_H

#include "music.h"
#include "vinyl.h"
#include <QDialog>
#include "qnetworkreply.h"
namespace Ui {
class screen_disc;
}

class screen_disc : public QDialog
{
    Q_OBJECT

public:
    screen_disc(QWidget *parent = nullptr, int idVinyl =0, int idClient = 0);
    ~screen_disc();
    std::vector<Music> musics;
    int idVinyl;
    int idClient;

private slots:
    void on_pb_perfil_disc_clicked();

    void on_pb_cart_disc_clicked();

    void on_tw_musics_disc_itemSelectionChanged();
    Music getMusic(int id, std::vector<Music> musics);
    void on_pb_cart_home_clicked();

    void on_pb_home_home_clicked();
    void downloadFinished(QNetworkReply *reply);

    void on_pb_adicionarCarrinho_clicked();

private:
    Ui::screen_disc *ui;
};

#endif // SCREEN_DISC_H
