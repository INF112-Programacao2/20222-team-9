/********************************************************************************
** Form generated from reading UI file 'screen_home.ui'
**
** Created by: Qt User Interface Compiler version 5.15.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREEN_HOME_H
#define UI_SCREEN_HOME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_screen_home
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QFrame *frame;
    QLabel *lb_image_disc;
    QLabel *lb_nome_album;
    QLabel *lb_nome_cantor;
    QLabel *lb_ano_lancamento;
    QLabel *label_5;
    QListWidget *lw_musicas;
    QPushButton *pb_ver_album;
    QPushButton *pb_profile_home;
    QPushButton *pb_cart_home;

    void setupUi(QDialog *screen_home)
    {
        if (screen_home->objectName().isEmpty())
            screen_home->setObjectName(QString::fromUtf8("screen_home"));
        screen_home->resize(1024, 768);
        screen_home->setWindowOpacity(1.000000000000000);
        screen_home->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tableWidget = new QTableWidget(screen_home);
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
        tableWidget->setGeometry(QRect(20, 140, 641, 551));
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
        pushButton = new QPushButton(screen_home);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(620, 90, 41, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Microsoft YaHei UI\";\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/icons/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));
        lineEdit = new QLineEdit(screen_home);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(250, 90, 331, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"font: 700 12pt \"Microsoft YaHei UI\";"));
        lineEdit->setText(QString::fromUtf8(""));
        frame = new QFrame(screen_home);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(710, 140, 271, 551));
        frame->setStyleSheet(QString::fromUtf8("background:rgb(175, 131, 115)"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lb_image_disc = new QLabel(frame);
        lb_image_disc->setObjectName(QString::fromUtf8("lb_image_disc"));
        lb_image_disc->setGeometry(QRect(80, 20, 121, 131));
        lb_image_disc->setPixmap(QPixmap(QString::fromUtf8(":/new/icons/icons/home.png")));
        lb_image_disc->setScaledContents(true);
        lb_nome_album = new QLabel(frame);
        lb_nome_album->setObjectName(QString::fromUtf8("lb_nome_album"));
        lb_nome_album->setGeometry(QRect(60, 170, 161, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Black"));
        font.setPointSize(16);
        font.setBold(true);
        lb_nome_album->setFont(font);
        lb_nome_album->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        lb_nome_cantor = new QLabel(frame);
        lb_nome_cantor->setObjectName(QString::fromUtf8("lb_nome_cantor"));
        lb_nome_cantor->setGeometry(QRect(30, 220, 121, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Black"));
        font1.setPointSize(12);
        font1.setBold(true);
        lb_nome_cantor->setFont(font1);
        lb_nome_cantor->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        lb_ano_lancamento = new QLabel(frame);
        lb_ano_lancamento->setObjectName(QString::fromUtf8("lb_ano_lancamento"));
        lb_ano_lancamento->setGeometry(QRect(30, 250, 41, 21));
        lb_ano_lancamento->setFont(font1);
        lb_ano_lancamento->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 290, 81, 21));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        lw_musicas = new QListWidget(frame);
        new QListWidgetItem(lw_musicas);
        new QListWidgetItem(lw_musicas);
        new QListWidgetItem(lw_musicas);
        new QListWidgetItem(lw_musicas);
        lw_musicas->setObjectName(QString::fromUtf8("lw_musicas"));
        lw_musicas->setGeometry(QRect(10, 320, 251, 131));
        lw_musicas->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        lw_musicas->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Microsoft YaHei UI\";\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255);\n"
""));
        lw_musicas->setFrameShape(QFrame::Panel);
        lw_musicas->setFrameShadow(QFrame::Raised);
        lw_musicas->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        lw_musicas->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lw_musicas->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        lw_musicas->setAutoScroll(true);
        lw_musicas->setAutoScrollMargin(16);
        lw_musicas->setProperty("showDropIndicator", QVariant(false));
        lw_musicas->setDragEnabled(false);
        lw_musicas->setIconSize(QSize(0, 0));
        lw_musicas->setTextElideMode(Qt::ElideMiddle);
        lw_musicas->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        lw_musicas->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        lw_musicas->setMovement(QListView::Snap);
        lw_musicas->setProperty("isWrapping", QVariant(false));
        lw_musicas->setResizeMode(QListView::Fixed);
        lw_musicas->setLayoutMode(QListView::SinglePass);
        lw_musicas->setSpacing(3);
        lw_musicas->setViewMode(QListView::ListMode);
        lw_musicas->setModelColumn(0);
        lw_musicas->setUniformItemSizes(false);
        lw_musicas->setBatchSize(100);
        lw_musicas->setWordWrap(false);
        lw_musicas->setSelectionRectVisible(false);
        lw_musicas->setItemAlignment(Qt::AlignCenter|Qt::AlignHCenter|Qt::AlignTop|Qt::AlignVCenter);
        pb_ver_album = new QPushButton(frame);
        pb_ver_album->setObjectName(QString::fromUtf8("pb_ver_album"));
        pb_ver_album->setGeometry(QRect(80, 490, 111, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font2.setPointSize(11);
        font2.setBold(true);
        pb_ver_album->setFont(font2);
        pb_ver_album->setCursor(QCursor(Qt::PointingHandCursor));
        pb_ver_album->setStyleSheet(QString::fromUtf8("background-color: rgb(254, 104, 50);\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)\n"
""));
        pb_profile_home = new QPushButton(screen_home);
        pb_profile_home->setObjectName(QString::fromUtf8("pb_profile_home"));
        pb_profile_home->setGeometry(QRect(20, 20, 51, 51));
        pb_profile_home->setCursor(QCursor(Qt::PointingHandCursor));
        pb_profile_home->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/icons/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_profile_home->setIcon(icon1);
        pb_profile_home->setIconSize(QSize(51, 51));
        pb_cart_home = new QPushButton(screen_home);
        pb_cart_home->setObjectName(QString::fromUtf8("pb_cart_home"));
        pb_cart_home->setGeometry(QRect(100, 20, 51, 51));
        pb_cart_home->setCursor(QCursor(Qt::PointingHandCursor));
        pb_cart_home->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icons/icons/cart.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_cart_home->setIcon(icon2);
        pb_cart_home->setIconSize(QSize(51, 51));

        retranslateUi(screen_home);

        QMetaObject::connectSlotsByName(screen_home);
    } // setupUi

    void retranslateUi(QDialog *screen_home)
    {
        screen_home->setWindowTitle(QCoreApplication::translate("screen_home", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("screen_home", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("screen_home", "CANTOR", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("screen_home", "ALBUM", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("screen_home", "LAN\303\207AMENTO", nullptr));
        pushButton->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("screen_home", "Pesquisar", nullptr));
        lb_image_disc->setText(QString());
        lb_nome_album->setText(QCoreApplication::translate("screen_home", "NOME ALBUM", nullptr));
        lb_nome_cantor->setText(QCoreApplication::translate("screen_home", "NOME CANTOR", nullptr));
        lb_ano_lancamento->setText(QCoreApplication::translate("screen_home", "1500", nullptr));
        label_5->setText(QCoreApplication::translate("screen_home", "M\303\232SICAS", nullptr));

        const bool __sortingEnabled = lw_musicas->isSortingEnabled();
        lw_musicas->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = lw_musicas->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("screen_home", "MUSIC 1", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = lw_musicas->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("screen_home", "MUSIC 2", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = lw_musicas->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("screen_home", "MUSIC 3", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = lw_musicas->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("screen_home", "MUSIC 4", nullptr));
        lw_musicas->setSortingEnabled(__sortingEnabled);

        pb_ver_album->setText(QCoreApplication::translate("screen_home", "VER ALBUM", nullptr));
        pb_profile_home->setText(QString());
        pb_cart_home->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class screen_home: public Ui_screen_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREEN_HOME_H
