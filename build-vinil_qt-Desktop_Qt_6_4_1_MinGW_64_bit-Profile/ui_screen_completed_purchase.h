/********************************************************************************
** Form generated from reading UI file 'screen_completed_purchase.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREEN_COMPLETED_PURCHASE_H
#define UI_SCREEN_COMPLETED_PURCHASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_screen_completed_purchase
{
public:
    QPushButton *pushButton;
    QLabel *icon_Perfil;
    QLabel *ion_Cart;
    QLabel *label_8;
    QPushButton *pb_voltar;

    void setupUi(QDialog *screen_completed_purchase)
    {
        if (screen_completed_purchase->objectName().isEmpty())
            screen_completed_purchase->setObjectName("screen_completed_purchase");
        screen_completed_purchase->resize(1024, 768);
        screen_completed_purchase->setWindowOpacity(1.000000000000000);
        screen_completed_purchase->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(screen_completed_purchase);
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
        icon_Perfil = new QLabel(screen_completed_purchase);
        icon_Perfil->setObjectName("icon_Perfil");
        icon_Perfil->setGeometry(QRect(20, 20, 51, 51));
        icon_Perfil->setCursor(QCursor(Qt::ArrowCursor));
        icon_Perfil->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        icon_Perfil->setPixmap(QPixmap(QString::fromUtf8("../database/image_Bank/perfil_Icon.png")));
        icon_Perfil->setScaledContents(true);
        ion_Cart = new QLabel(screen_completed_purchase);
        ion_Cart->setObjectName("ion_Cart");
        ion_Cart->setGeometry(QRect(100, 20, 51, 51));
        ion_Cart->setCursor(QCursor(Qt::ArrowCursor));
        ion_Cart->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        ion_Cart->setText(QString::fromUtf8(""));
        ion_Cart->setPixmap(QPixmap(QString::fromUtf8("../database/image_Bank/cart_Icon.png")));
        ion_Cart->setScaledContents(true);
        label_8 = new QLabel(screen_completed_purchase);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(210, 150, 631, 331));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font.setPointSize(36);
        font.setBold(true);
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pb_voltar = new QPushButton(screen_completed_purchase);
        pb_voltar->setObjectName("pb_voltar");
        pb_voltar->setGeometry(QRect(440, 520, 171, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font1.setPointSize(12);
        font1.setBold(true);
        pb_voltar->setFont(font1);
        pb_voltar->setCursor(QCursor(Qt::PointingHandCursor));
        pb_voltar->setStyleSheet(QString::fromUtf8("background-color: rgb(254, 104, 50);\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)"));

        retranslateUi(screen_completed_purchase);

        QMetaObject::connectSlotsByName(screen_completed_purchase);
    } // setupUi

    void retranslateUi(QDialog *screen_completed_purchase)
    {
        screen_completed_purchase->setWindowTitle(QCoreApplication::translate("screen_completed_purchase", "Dialog", nullptr));
        pushButton->setText(QString());
        icon_Perfil->setText(QString());
        label_8->setText(QCoreApplication::translate("screen_completed_purchase", "<html><head/><body><p align=\"center\">COMPRA <br/>FINALIZADA<br/> COM SUCESSO</p></body></html>", nullptr));
        pb_voltar->setText(QCoreApplication::translate("screen_completed_purchase", "VOLTAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class screen_completed_purchase: public Ui_screen_completed_purchase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREEN_COMPLETED_PURCHASE_H
