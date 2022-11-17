/********************************************************************************
** Form generated from reading UI file 'teste_login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTE_LOGIN_H
#define UI_TESTE_LOGIN_H

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
    QLabel *label;
    QLabel *label_2;
    QLineEdit *tx_cpf;
    QLineEdit *tx_senha;
    QPushButton *pushButton;

    void setupUi(QDialog *Teste_Login)
    {
        if (Teste_Login->objectName().isEmpty())
            Teste_Login->setObjectName("Teste_Login");
        Teste_Login->resize(400, 300);
        label = new QLabel(Teste_Login);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 120, 49, 16));
        label_2 = new QLabel(Teste_Login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 150, 49, 16));
        tx_cpf = new QLineEdit(Teste_Login);
        tx_cpf->setObjectName("tx_cpf");
        tx_cpf->setGeometry(QRect(170, 120, 113, 22));
        tx_senha = new QLineEdit(Teste_Login);
        tx_senha->setObjectName("tx_senha");
        tx_senha->setGeometry(QRect(170, 150, 113, 22));
        pushButton = new QPushButton(Teste_Login);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 200, 75, 24));

        retranslateUi(Teste_Login);

        QMetaObject::connectSlotsByName(Teste_Login);
    } // setupUi

    void retranslateUi(QDialog *Teste_Login)
    {
        Teste_Login->setWindowTitle(QCoreApplication::translate("Teste_Login", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Teste_Login", "CPF", nullptr));
        label_2->setText(QCoreApplication::translate("Teste_Login", "SENHA", nullptr));
        pushButton->setText(QCoreApplication::translate("Teste_Login", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Teste_Login: public Ui_Teste_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTE_LOGIN_H
