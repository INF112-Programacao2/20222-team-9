/********************************************************************************
** Form generated from reading UI file 'screen_new_account.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREEN_NEW_ACCOUNT_H
#define UI_SCREEN_NEW_ACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_screen_new_account
{
public:
    QPushButton *pb_inserir;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pb_inserir_2;
    QLabel *label_10;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLineEdit *ln_nome;
    QLineEdit *ln_cpf;
    QLineEdit *ln_confirmar_senha;
    QLabel *label_11;
    QLineEdit *ln_senha;

    void setupUi(QDialog *screen_new_account)
    {
        if (screen_new_account->objectName().isEmpty())
            screen_new_account->setObjectName("screen_new_account");
        screen_new_account->resize(1024, 768);
        screen_new_account->setAutoFillBackground(false);
        pb_inserir = new QPushButton(screen_new_account);
        pb_inserir->setObjectName("pb_inserir");
        pb_inserir->setGeometry(QRect(500, 490, 100, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        pb_inserir->setFont(font);
        pb_inserir->setCursor(QCursor(Qt::PointingHandCursor));
        pb_inserir->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(175, 131, 115);\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)"));
        label_7 = new QLabel(screen_new_account);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(340, 260, 251, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font1.setPointSize(12);
        font1.setBold(true);
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_8 = new QLabel(screen_new_account);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(340, 190, 251, 30));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_9 = new QLabel(screen_new_account);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(340, 400, 251, 30));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pb_inserir_2 = new QPushButton(screen_new_account);
        pb_inserir_2->setObjectName("pb_inserir_2");
        pb_inserir_2->setGeometry(QRect(620, 490, 100, 30));
        pb_inserir_2->setFont(font);
        pb_inserir_2->setCursor(QCursor(Qt::PointingHandCursor));
        pb_inserir_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(254, 104, 50);\n"
"border-style: outset;\n"
"color:rgb(255, 255, 255)"));
        label_10 = new QLabel(screen_new_account);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(680, 310, 151, 30));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font2.setPointSize(14);
        font2.setBold(true);
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        radioButton = new QRadioButton(screen_new_account);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(710, 350, 89, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Microsoft New Tai Lue")});
        font3.setPointSize(12);
        font3.setBold(true);
        radioButton->setFont(font3);
        radioButton_2 = new QRadioButton(screen_new_account);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(710, 380, 89, 20));
        radioButton_2->setFont(font3);
        ln_nome = new QLineEdit(screen_new_account);
        ln_nome->setObjectName("ln_nome");
        ln_nome->setGeometry(QRect(340, 220, 250, 40));
        QFont font4;
        font4.setPointSize(14);
        ln_nome->setFont(font4);
        ln_nome->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"border-color: rgb(200, 200, 200);\n"
"border-style: outset;"));
        ln_cpf = new QLineEdit(screen_new_account);
        ln_cpf->setObjectName("ln_cpf");
        ln_cpf->setGeometry(QRect(340, 290, 250, 40));
        ln_cpf->setFont(font4);
        ln_cpf->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"border-color: rgb(200, 200, 200);\n"
"border-style: outset;"));
        ln_confirmar_senha = new QLineEdit(screen_new_account);
        ln_confirmar_senha->setObjectName("ln_confirmar_senha");
        ln_confirmar_senha->setGeometry(QRect(340, 360, 250, 40));
        ln_confirmar_senha->setFont(font4);
        ln_confirmar_senha->setCursor(QCursor(Qt::IBeamCursor));
        ln_confirmar_senha->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"border-color: rgb(200, 200, 200);\n"
"border-style: outset;"));
        ln_confirmar_senha->setEchoMode(QLineEdit::Password);
        label_11 = new QLabel(screen_new_account);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(340, 330, 251, 30));
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        ln_senha = new QLineEdit(screen_new_account);
        ln_senha->setObjectName("ln_senha");
        ln_senha->setGeometry(QRect(340, 430, 250, 40));
        ln_senha->setFont(font4);
        ln_senha->setCursor(QCursor(Qt::IBeamCursor));
        ln_senha->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"border-color: rgb(200, 200, 200);\n"
"border-style: outset;"));
        ln_senha->setEchoMode(QLineEdit::Password);

        retranslateUi(screen_new_account);

        QMetaObject::connectSlotsByName(screen_new_account);
    } // setupUi

    void retranslateUi(QDialog *screen_new_account)
    {
        screen_new_account->setWindowTitle(QCoreApplication::translate("screen_new_account", "Dialog", nullptr));
        pb_inserir->setText(QCoreApplication::translate("screen_new_account", "CRIAR", nullptr));
        label_7->setText(QCoreApplication::translate("screen_new_account", "CPF", nullptr));
        label_8->setText(QCoreApplication::translate("screen_new_account", "NOME", nullptr));
        label_9->setText(QCoreApplication::translate("screen_new_account", "CONFIRMAR SENHA", nullptr));
        pb_inserir_2->setText(QCoreApplication::translate("screen_new_account", "LOGIN", nullptr));
        label_10->setText(QCoreApplication::translate("screen_new_account", "ASSINAR VIP", nullptr));
        radioButton->setText(QCoreApplication::translate("screen_new_account", "SIM", nullptr));
        radioButton_2->setText(QCoreApplication::translate("screen_new_account", "N\303\203O", nullptr));
        label_11->setText(QCoreApplication::translate("screen_new_account", "SENHA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class screen_new_account: public Ui_screen_new_account {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREEN_NEW_ACCOUNT_H
