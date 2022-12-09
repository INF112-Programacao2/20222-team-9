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

class Ui_Teste_Login
{
public:
    QLineEdit *tx_cpf;
    QLineEdit *tx_senha;
    QPushButton *pushButton;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *labelMensagem;

    void setupUi(QDialog *Teste_Login)
    {
        if (Teste_Login->objectName().isEmpty())
            Teste_Login->setObjectName("Teste_Login");
        Teste_Login->resize(1024, 768);
        Teste_Login->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tx_cpf = new QLineEdit(Teste_Login);
        tx_cpf->setObjectName("tx_cpf");
        tx_cpf->setGeometry(QRect(350, 300, 250, 40));
        QFont font;
        font.setPointSize(14);
        tx_cpf->setFont(font);
        tx_cpf->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"border-color: rgb(200, 200, 200);\n"
"border-style: outset;"));
        tx_senha = new QLineEdit(Teste_Login);
        tx_senha->setObjectName("tx_senha");
        tx_senha->setGeometry(QRect(350, 365, 250, 40));
        tx_senha->setFont(font);
        tx_senha->setCursor(QCursor(Qt::IBeamCursor));
        tx_senha->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"border-color: rgb(200, 200, 200);\n"
"border-style: outset;"));
        tx_senha->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(Teste_Login);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(590, 425, 100, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font1.setPointSize(12);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(254, 104, 50);\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)"));
        label_7 = new QLabel(Teste_Login);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(350, 270, 251, 30));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_8 = new QLabel(Teste_Login);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(350, 340, 251, 30));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        labelMensagem = new QLabel(Teste_Login);
        labelMensagem->setObjectName("labelMensagem");
        labelMensagem->setGeometry(QRect(360, 430, 221, 61));

        retranslateUi(Teste_Login);

        QMetaObject::connectSlotsByName(Teste_Login);
    } // setupUi

    void retranslateUi(QDialog *Teste_Login)
    {
        Teste_Login->setWindowTitle(QCoreApplication::translate("Teste_Login", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Teste_Login", "LOGIN", nullptr));
        label_7->setText(QCoreApplication::translate("Teste_Login", "CPF", nullptr));
        label_8->setText(QCoreApplication::translate("Teste_Login", "SENHA", nullptr));
        labelMensagem->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Teste_Login: public Ui_Teste_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREEN_LOGIN_H
