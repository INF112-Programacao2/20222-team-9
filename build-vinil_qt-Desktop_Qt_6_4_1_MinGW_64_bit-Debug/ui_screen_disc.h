/********************************************************************************
** Form generated from reading UI file 'screen_disc.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREEN_DISC_H
#define UI_SCREEN_DISC_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_screen_disc
{
public:
    QTableWidget *tw_musics_disc;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QFrame *frame;
    QLabel *lb_imagem;
    QLabel *lb_nome_musica_disc;
    QPushButton *pushButton_2;
    QPushButton *pb_perfil_disc;
    QPushButton *pb_home_home;
    QPushButton *pb_cart_home;
    QLabel *lb_nome_album_disc;
    QLabel *lb_cantor_disc;
    QLabel *lb_data_disc;
    QLabel *lb_compositores_disc;
    QLabel *lb_preco_disc;

    void setupUi(QDialog *screen_disc)
    {
        if (screen_disc->objectName().isEmpty())
            screen_disc->setObjectName("screen_disc");
        screen_disc->resize(1024, 768);
        screen_disc->setWindowOpacity(1.000000000000000);
        screen_disc->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tw_musics_disc = new QTableWidget(screen_disc);
        if (tw_musics_disc->columnCount() < 3)
            tw_musics_disc->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tw_musics_disc->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tw_musics_disc->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tw_musics_disc->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tw_musics_disc->setObjectName("tw_musics_disc");
        tw_musics_disc->setGeometry(QRect(30, 140, 661, 551));
        tw_musics_disc->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"font: 700 12pt \"Microsoft YaHei UI\";\n"
"alternate-background-color: #AF8373;\n"
"selection-background-color: #591D07;"));
        tw_musics_disc->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tw_musics_disc->setDragEnabled(false);
        tw_musics_disc->setAlternatingRowColors(true);
        tw_musics_disc->setSelectionMode(QAbstractItemView::SingleSelection);
        tw_musics_disc->setSelectionBehavior(QAbstractItemView::SelectRows);
        tw_musics_disc->setShowGrid(false);
        tw_musics_disc->setGridStyle(Qt::NoPen);
        tw_musics_disc->setSortingEnabled(true);
        tw_musics_disc->horizontalHeader()->setCascadingSectionResizes(false);
        tw_musics_disc->horizontalHeader()->setMinimumSectionSize(40);
        tw_musics_disc->horizontalHeader()->setDefaultSectionSize(158);
        tw_musics_disc->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tw_musics_disc->horizontalHeader()->setStretchLastSection(true);
        tw_musics_disc->verticalHeader()->setVisible(false);
        tw_musics_disc->verticalHeader()->setCascadingSectionResizes(false);
        tw_musics_disc->verticalHeader()->setHighlightSections(true);
        pushButton = new QPushButton(screen_disc);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(640, 90, 41, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Microsoft YaHei UI\";\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/icons/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));
        lineEdit = new QLineEdit(screen_disc);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(290, 90, 331, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"font: 700 12pt \"Microsoft YaHei UI\";"));
        lineEdit->setText(QString::fromUtf8(""));
        frame = new QFrame(screen_disc);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(710, 140, 271, 361));
        frame->setStyleSheet(QString::fromUtf8("background:rgb(175, 131, 115)"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lb_imagem = new QLabel(frame);
        lb_imagem->setObjectName("lb_imagem");
        lb_imagem->setGeometry(QRect(60, 40, 161, 161));
        lb_imagem->setPixmap(QPixmap(QString::fromUtf8(":/new/icons/icons/search.png")));
        lb_imagem->setScaledContents(true);
        lb_nome_musica_disc = new QLabel(frame);
        lb_nome_musica_disc->setObjectName("lb_nome_musica_disc");
        lb_nome_musica_disc->setGeometry(QRect(60, 240, 161, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(16);
        font.setBold(true);
        lb_nome_musica_disc->setFont(font);
        lb_nome_musica_disc->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        pushButton_2 = new QPushButton(screen_disc);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(850, 640, 131, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font1.setPointSize(11);
        font1.setBold(true);
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(254, 104, 50);\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)\n"
""));
        pb_perfil_disc = new QPushButton(screen_disc);
        pb_perfil_disc->setObjectName("pb_perfil_disc");
        pb_perfil_disc->setGeometry(QRect(20, 20, 51, 51));
        pb_perfil_disc->setCursor(QCursor(Qt::PointingHandCursor));
        pb_perfil_disc->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/icons/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_perfil_disc->setIcon(icon1);
        pb_perfil_disc->setIconSize(QSize(51, 51));
        pb_home_home = new QPushButton(screen_disc);
        pb_home_home->setObjectName("pb_home_home");
        pb_home_home->setGeometry(QRect(100, 20, 51, 51));
        pb_home_home->setCursor(QCursor(Qt::PointingHandCursor));
        pb_home_home->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icons/icons/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_home_home->setIcon(icon2);
        pb_home_home->setIconSize(QSize(51, 51));
        pb_cart_home = new QPushButton(screen_disc);
        pb_cart_home->setObjectName("pb_cart_home");
        pb_cart_home->setGeometry(QRect(180, 20, 51, 51));
        pb_cart_home->setCursor(QCursor(Qt::PointingHandCursor));
        pb_cart_home->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/icons/icons/cart.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_cart_home->setIcon(icon3);
        pb_cart_home->setIconSize(QSize(51, 51));
        lb_nome_album_disc = new QLabel(screen_disc);
        lb_nome_album_disc->setObjectName("lb_nome_album_disc");
        lb_nome_album_disc->setGeometry(QRect(390, 20, 161, 41));
        lb_nome_album_disc->setFont(font);
        lb_nome_album_disc->setStyleSheet(QString::fromUtf8("color:rgb(90, 42, 24)"));
        lb_cantor_disc = new QLabel(screen_disc);
        lb_cantor_disc->setObjectName("lb_cantor_disc");
        lb_cantor_disc->setGeometry(QRect(710, 100, 161, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font2.setPointSize(12);
        font2.setBold(true);
        lb_cantor_disc->setFont(font2);
        lb_cantor_disc->setStyleSheet(QString::fromUtf8("color:rgb(90, 42, 24)"));
        lb_data_disc = new QLabel(screen_disc);
        lb_data_disc->setObjectName("lb_data_disc");
        lb_data_disc->setGeometry(QRect(930, 100, 51, 31));
        lb_data_disc->setFont(font2);
        lb_data_disc->setStyleSheet(QString::fromUtf8("color:rgb(90, 42, 24)"));
        lb_compositores_disc = new QLabel(screen_disc);
        lb_compositores_disc->setObjectName("lb_compositores_disc");
        lb_compositores_disc->setGeometry(QRect(710, 0, 131, 101));
        lb_compositores_disc->setFont(font2);
        lb_compositores_disc->setStyleSheet(QString::fromUtf8("color:rgb(90, 42, 24)"));
        lb_preco_disc = new QLabel(screen_disc);
        lb_preco_disc->setObjectName("lb_preco_disc");
        lb_preco_disc->setGeometry(QRect(730, 530, 141, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font3.setPointSize(18);
        font3.setBold(true);
        lb_preco_disc->setFont(font3);
        lb_preco_disc->setStyleSheet(QString::fromUtf8("color:rgb(254, 104, 50);"));

        retranslateUi(screen_disc);

        QMetaObject::connectSlotsByName(screen_disc);
    } // setupUi

    void retranslateUi(QDialog *screen_disc)
    {
        screen_disc->setWindowTitle(QCoreApplication::translate("screen_disc", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tw_musics_disc->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("screen_disc", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tw_musics_disc->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("screen_disc", "DURA\303\207\303\203O", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tw_musics_disc->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("screen_disc", "M\303\232SICA", nullptr));
        pushButton->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("screen_disc", "Pesquisar", nullptr));
        lb_imagem->setText(QString());
        lb_nome_musica_disc->setText(QCoreApplication::translate("screen_disc", "NOME M\303\232SICA", nullptr));
        pushButton_2->setText(QCoreApplication::translate("screen_disc", "ADICIONAR AO\n"
"CARRINHO", nullptr));
        pb_perfil_disc->setText(QString());
        pb_home_home->setText(QString());
        pb_cart_home->setText(QString());
        lb_nome_album_disc->setText(QCoreApplication::translate("screen_disc", "NOME ALBUM", nullptr));
        lb_cantor_disc->setText(QCoreApplication::translate("screen_disc", "CANTOR", nullptr));
        lb_data_disc->setText(QCoreApplication::translate("screen_disc", "1500", nullptr));
        lb_compositores_disc->setText(QCoreApplication::translate("screen_disc", "VARIOS \n"
"COMPOSITORES", nullptr));
        lb_preco_disc->setText(QCoreApplication::translate("screen_disc", "R$XX,XX", nullptr));
    } // retranslateUi

};

namespace Ui {
    class screen_disc: public Ui_screen_disc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREEN_DISC_H
