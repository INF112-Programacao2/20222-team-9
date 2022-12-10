/********************************************************************************
** Form generated from reading UI file 'screen_cart.ui'
**
** Created by: Qt User Interface Compiler version 5.15.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREEN_CART_H
#define UI_SCREEN_CART_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_screen_cart
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QFrame *frame;
    QLabel *lb_imagem;
    QLabel *lb_nome_album_cart;
    QLabel *lb_nome_cantor_cart;
    QLabel *lb_ano_lancamento_cart;
    QLabel *lb_price_cart;
    QLabel *label_8;
    QPushButton *pb_finalizar;
    QPushButton *pb_home_cart;
    QPushButton *pb_profile_cart;
    QLabel *lb_txt_desconto;
    QLabel *lb_desconto;
    QLabel *label_11;
    QLabel *lb_preco_total;

    void setupUi(QDialog *screen_cart)
    {
        if (screen_cart->objectName().isEmpty())
            screen_cart->setObjectName(QString::fromUtf8("screen_cart"));
        screen_cart->resize(1024, 768);
        screen_cart->setWindowOpacity(1.000000000000000);
        screen_cart->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tableWidget = new QTableWidget(screen_cart);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 140, 641, 371));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"font: 700 12pt \"Microsoft YaHei UI\";\n"
"alternate-background-color: #AF8373;\n"
"selection-background-color: #591D07;"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setDragEnabled(false);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setShowGrid(false);
        tableWidget->setGridStyle(Qt::NoPen);
        tableWidget->setSortingEnabled(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(40);
        tableWidget->horizontalHeader()->setDefaultSectionSize(158);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setHighlightSections(true);
        pushButton = new QPushButton(screen_cart);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(620, 90, 41, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Microsoft YaHei UI\";\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../src/icons8-pesquisar-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));
        frame = new QFrame(screen_cart);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(710, 140, 271, 371));
        frame->setStyleSheet(QString::fromUtf8("background:rgb(175, 131, 115)"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lb_imagem = new QLabel(frame);
        lb_imagem->setObjectName(QString::fromUtf8("lb_imagem"));
        lb_imagem->setGeometry(QRect(70, 20, 131, 131));
        lb_imagem->setPixmap(QPixmap(QString::fromUtf8(":/new/icons/icons/cart.png")));
        lb_imagem->setScaledContents(true);
        lb_nome_album_cart = new QLabel(frame);
        lb_nome_album_cart->setObjectName(QString::fromUtf8("lb_nome_album_cart"));
        lb_nome_album_cart->setGeometry(QRect(60, 170, 161, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Black"));
        font.setPointSize(16);
        font.setBold(true);
        lb_nome_album_cart->setFont(font);
        lb_nome_album_cart->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        lb_nome_cantor_cart = new QLabel(frame);
        lb_nome_cantor_cart->setObjectName(QString::fromUtf8("lb_nome_cantor_cart"));
        lb_nome_cantor_cart->setGeometry(QRect(30, 220, 121, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Black"));
        font1.setPointSize(12);
        font1.setBold(true);
        lb_nome_cantor_cart->setFont(font1);
        lb_nome_cantor_cart->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        lb_ano_lancamento_cart = new QLabel(frame);
        lb_ano_lancamento_cart->setObjectName(QString::fromUtf8("lb_ano_lancamento_cart"));
        lb_ano_lancamento_cart->setGeometry(QRect(30, 250, 41, 21));
        lb_ano_lancamento_cart->setFont(font1);
        lb_ano_lancamento_cart->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        lb_price_cart = new QLabel(frame);
        lb_price_cart->setObjectName(QString::fromUtf8("lb_price_cart"));
        lb_price_cart->setGeometry(QRect(150, 310, 81, 21));
        lb_price_cart->setFont(font1);
        lb_price_cart->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        label_8 = new QLabel(screen_cart);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(320, 50, 251, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font2.setPointSize(12);
        font2.setBold(true);
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pb_finalizar = new QPushButton(screen_cart);
        pb_finalizar->setObjectName(QString::fromUtf8("pb_finalizar"));
        pb_finalizar->setGeometry(QRect(820, 620, 161, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font3.setPointSize(11);
        font3.setBold(true);
        pb_finalizar->setFont(font3);
        pb_finalizar->setCursor(QCursor(Qt::PointingHandCursor));
        pb_finalizar->setStyleSheet(QString::fromUtf8("background-color: rgb(254, 104, 50);\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)\n"
""));
        pb_home_cart = new QPushButton(screen_cart);
        pb_home_cart->setObjectName(QString::fromUtf8("pb_home_cart"));
        pb_home_cart->setGeometry(QRect(20, 30, 51, 51));
        pb_home_cart->setCursor(QCursor(Qt::PointingHandCursor));
        pb_home_cart->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/icons/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_home_cart->setIcon(icon1);
        pb_home_cart->setIconSize(QSize(51, 51));
        pb_profile_cart = new QPushButton(screen_cart);
        pb_profile_cart->setObjectName(QString::fromUtf8("pb_profile_cart"));
        pb_profile_cart->setGeometry(QRect(90, 30, 51, 51));
        pb_profile_cart->setCursor(QCursor(Qt::PointingHandCursor));
        pb_profile_cart->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icons/icons/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_profile_cart->setIcon(icon2);
        pb_profile_cart->setIconSize(QSize(51, 51));
        lb_txt_desconto = new QLabel(screen_cart);
        lb_txt_desconto->setObjectName(QString::fromUtf8("lb_txt_desconto"));
        lb_txt_desconto->setGeometry(QRect(390, 600, 161, 30));
        lb_txt_desconto->setFont(font2);
        lb_txt_desconto->setStyleSheet(QString::fromUtf8("color: rgb(90, 42, 24)"));
        lb_desconto = new QLabel(screen_cart);
        lb_desconto->setObjectName(QString::fromUtf8("lb_desconto"));
        lb_desconto->setGeometry(QRect(460, 630, 81, 30));
        lb_desconto->setFont(font2);
        lb_desconto->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0)"));
        label_11 = new QLabel(screen_cart);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(600, 590, 141, 61));
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(90, 42, 24)"));
        lb_preco_total = new QLabel(screen_cart);
        lb_preco_total->setObjectName(QString::fromUtf8("lb_preco_total"));
        lb_preco_total->setGeometry(QRect(600, 650, 121, 30));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font4.setPointSize(16);
        font4.setBold(true);
        lb_preco_total->setFont(font4);
        lb_preco_total->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 0)"));

        retranslateUi(screen_cart);

        QMetaObject::connectSlotsByName(screen_cart);
    } // setupUi

    void retranslateUi(QDialog *screen_cart)
    {
        screen_cart->setWindowTitle(QCoreApplication::translate("screen_cart", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("screen_cart", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("screen_cart", "CANTOR", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("screen_cart", "ALBUM", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("screen_cart", "PRE\303\207O", nullptr));
        pushButton->setText(QString());
        lb_imagem->setText(QString());
        lb_nome_album_cart->setText(QCoreApplication::translate("screen_cart", "NOME ALBUM", nullptr));
        lb_nome_cantor_cart->setText(QCoreApplication::translate("screen_cart", "NOME CANTOR", nullptr));
        lb_ano_lancamento_cart->setText(QCoreApplication::translate("screen_cart", "1500", nullptr));
        lb_price_cart->setText(QCoreApplication::translate("screen_cart", "$$$$$", nullptr));
        label_8->setText(QCoreApplication::translate("screen_cart", "ITENS CARRINHO", nullptr));
        pb_finalizar->setText(QCoreApplication::translate("screen_cart", "FINALIZAR COMPRA", nullptr));
        pb_home_cart->setText(QString());
        pb_profile_cart->setText(QString());
        lb_txt_desconto->setText(QCoreApplication::translate("screen_cart", "DESCONTO DE VIP", nullptr));
        lb_desconto->setText(QCoreApplication::translate("screen_cart", "R$ XX,XX", nullptr));
        label_11->setText(QCoreApplication::translate("screen_cart", "VALOR TOTAL\n"
" DO PEDIDO", nullptr));
        lb_preco_total->setText(QCoreApplication::translate("screen_cart", "R$ XX,XX", nullptr));
    } // retranslateUi

};

namespace Ui {
    class screen_cart: public Ui_screen_cart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREEN_CART_H
