/********************************************************************************
** Form generated from reading UI file 'screen_profile.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREEN_PROFILE_H
#define UI_SCREEN_PROFILE_H

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

class Ui_screen_profile
{
public:
    QPushButton *pushButton;
    QFrame *frame;
    QLabel *lb_nome;
    QLabel *lb_email;
    QLabel *lb_ano_lancamento;
    QLabel *lb_cpf;
    QLabel *lb_rank;
    QLabel *lb_txt_rank;
    QPushButton *pb_home_profile;
    QPushButton *pb_cart_profile;
    QTableWidget *tableWidget;
    QPushButton *btn_Logout;

    void setupUi(QDialog *screen_profile)
    {
        if (screen_profile->objectName().isEmpty())
            screen_profile->setObjectName("screen_profile");
        screen_profile->resize(1024, 768);
        screen_profile->setWindowOpacity(1.000000000000000);
        screen_profile->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(screen_profile);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(620, 90, 41, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Microsoft YaHei UI\";\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../src/icons8-pesquisar-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));
        frame = new QFrame(screen_profile);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(680, 140, 271, 321));
        frame->setStyleSheet(QString::fromUtf8("background:rgb(175, 131, 115)"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lb_nome = new QLabel(frame);
        lb_nome->setObjectName("lb_nome");
        lb_nome->setGeometry(QRect(90, 30, 131, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(16);
        font.setBold(true);
        lb_nome->setFont(font);
        lb_nome->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        lb_email = new QLabel(frame);
        lb_email->setObjectName("lb_email");
        lb_email->setGeometry(QRect(20, 100, 211, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(12);
        font1.setBold(true);
        lb_email->setFont(font1);
        lb_email->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        lb_ano_lancamento = new QLabel(frame);
        lb_ano_lancamento->setObjectName("lb_ano_lancamento");
        lb_ano_lancamento->setGeometry(QRect(20, 130, 41, 31));
        lb_ano_lancamento->setFont(font1);
        lb_ano_lancamento->setCursor(QCursor(Qt::IBeamCursor));
        lb_ano_lancamento->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        lb_cpf = new QLabel(frame);
        lb_cpf->setObjectName("lb_cpf");
        lb_cpf->setGeometry(QRect(70, 130, 161, 31));
        lb_cpf->setFont(font1);
        lb_cpf->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        lb_rank = new QLabel(frame);
        lb_rank->setObjectName("lb_rank");
        lb_rank->setGeometry(QRect(80, 170, 121, 31));
        lb_rank->setFont(font1);
        lb_rank->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        lb_txt_rank = new QLabel(frame);
        lb_txt_rank->setObjectName("lb_txt_rank");
        lb_txt_rank->setGeometry(QRect(20, 170, 51, 31));
        lb_txt_rank->setFont(font1);
        lb_txt_rank->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        pb_home_profile = new QPushButton(screen_profile);
        pb_home_profile->setObjectName("pb_home_profile");
        pb_home_profile->setGeometry(QRect(60, 20, 51, 51));
        pb_home_profile->setCursor(QCursor(Qt::PointingHandCursor));
        pb_home_profile->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/icons/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_home_profile->setIcon(icon1);
        pb_home_profile->setIconSize(QSize(51, 51));
        pb_cart_profile = new QPushButton(screen_profile);
        pb_cart_profile->setObjectName("pb_cart_profile");
        pb_cart_profile->setGeometry(QRect(140, 20, 51, 51));
        pb_cart_profile->setCursor(QCursor(Qt::PointingHandCursor));
        pb_cart_profile->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icons/icons/cart.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_cart_profile->setIcon(icon2);
        pb_cart_profile->setIconSize(QSize(51, 51));
        tableWidget = new QTableWidget(screen_profile);
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
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 90, 641, 551));
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
        btn_Logout = new QPushButton(screen_profile);
        btn_Logout->setObjectName("btn_Logout");
        btn_Logout->setGeometry(QRect(850, 680, 111, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font2.setPointSize(11);
        font2.setBold(true);
        btn_Logout->setFont(font2);
        btn_Logout->setCursor(QCursor(Qt::PointingHandCursor));
        btn_Logout->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)\n"
""));

        retranslateUi(screen_profile);

        QMetaObject::connectSlotsByName(screen_profile);
    } // setupUi

    void retranslateUi(QDialog *screen_profile)
    {
        screen_profile->setWindowTitle(QCoreApplication::translate("screen_profile", "Dialog", nullptr));
        pushButton->setText(QString());
        lb_nome->setText(QCoreApplication::translate("screen_profile", "NOME", nullptr));
        lb_email->setText(QCoreApplication::translate("screen_profile", "email@email.com", nullptr));
        lb_ano_lancamento->setText(QCoreApplication::translate("screen_profile", "CPF:", nullptr));
        lb_cpf->setText(QCoreApplication::translate("screen_profile", "000000000-00", nullptr));
        lb_rank->setText(QCoreApplication::translate("screen_profile", "RANK!", nullptr));
        lb_txt_rank->setText(QCoreApplication::translate("screen_profile", "Rank:", nullptr));
        pb_home_profile->setText(QString());
        pb_cart_profile->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("screen_profile", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("screen_profile", "CANTOR", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("screen_profile", "ALBUM", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("screen_profile", "LAN\303\207AMENTO", nullptr));
        btn_Logout->setText(QCoreApplication::translate("screen_profile", "LOGOUT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class screen_profile: public Ui_screen_profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREEN_PROFILE_H
