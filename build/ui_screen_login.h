/********************************************************************************
** Form generated from reading UI file 'screen_login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREEN_LOGIN_H
#define UI_SCREEN_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_screen_login
{
public:
    QLineEdit *tx_cpf;
    QLineEdit *tx_senha;
    QPushButton *pb_login;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *labelMensagem;

    void setupUi(QDialog *screen_login)
    {
        if (screen_login->objectName().isEmpty())
            screen_login->setObjectName("screen_login");
        screen_login->resize(1024, 768);
        screen_login->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tx_cpf = new QLineEdit(screen_login);
        tx_cpf->setObjectName("tx_cpf");
        tx_cpf->setGeometry(QRect(350, 300, 250, 40));
        QFont font;
        font.setPointSize(14);
        tx_cpf->setFont(font);
        tx_cpf->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"border-color: rgb(200, 200, 200);\n"
"border-style: outset;"));
        tx_senha = new QLineEdit(screen_login);
        tx_senha->setObjectName("tx_senha");
        tx_senha->setGeometry(QRect(350, 365, 250, 40));
        tx_senha->setFont(font);
        tx_senha->setCursor(QCursor(Qt::IBeamCursor));
        tx_senha->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"border-color: rgb(200, 200, 200);\n"
"border-style: outset;"));
        tx_senha->setEchoMode(QLineEdit::Password);
        pb_login = new QPushButton(screen_login);
        pb_login->setObjectName("pb_login");
        pb_login->setGeometry(QRect(590, 425, 100, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font1.setPointSize(12);
        font1.setBold(true);
        pb_login->setFont(font1);
        pb_login->setCursor(QCursor(Qt::PointingHandCursor));
        pb_login->setStyleSheet(QString::fromUtf8("background-color: rgb(254, 104, 50);\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)"));
        label_7 = new QLabel(screen_login);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(350, 270, 251, 30));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_8 = new QLabel(screen_login);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(350, 340, 251, 30));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        labelMensagem = new QLabel(screen_login);
        labelMensagem->setObjectName("labelMensagem");
        labelMensagem->setGeometry(QRect(360, 430, 221, 61));

        retranslateUi(screen_login);

        QMetaObject::connectSlotsByName(screen_login);
    } // setupUi

    void retranslateUi(QDialog *screen_login)
    {
        screen_login->setWindowTitle(QCoreApplication::translate("screen_login", "Dialog", nullptr));
        pb_login->setText(QCoreApplication::translate("screen_login", "LOGIN", nullptr));
        label_7->setText(QCoreApplication::translate("screen_login", "CPF", nullptr));
        label_8->setText(QCoreApplication::translate("screen_login", "SENHA", nullptr));
        labelMensagem->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class screen_login: public Ui_screen_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREEN_LOGIN_H
