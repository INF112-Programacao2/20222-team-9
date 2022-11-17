/********************************************************************************
** Form generated from reading UI file 'inserirusuario.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERIRUSUARIO_H
#define UI_INSERIRUSUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InserirUsuario
{
public:
    QLineEdit *ln_nome;
    QLineEdit *ln_cpf;
    QLineEdit *ln_senha;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pb_inserir;

    void setupUi(QDialog *InserirUsuario)
    {
        if (InserirUsuario->objectName().isEmpty())
            InserirUsuario->setObjectName("InserirUsuario");
        InserirUsuario->resize(400, 300);
        InserirUsuario->setAutoFillBackground(false);
        ln_nome = new QLineEdit(InserirUsuario);
        ln_nome->setObjectName("ln_nome");
        ln_nome->setGeometry(QRect(120, 70, 113, 22));
        ln_cpf = new QLineEdit(InserirUsuario);
        ln_cpf->setObjectName("ln_cpf");
        ln_cpf->setGeometry(QRect(120, 110, 113, 22));
        ln_senha = new QLineEdit(InserirUsuario);
        ln_senha->setObjectName("ln_senha");
        ln_senha->setGeometry(QRect(120, 150, 113, 22));
        label = new QLabel(InserirUsuario);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 70, 49, 16));
        label_2 = new QLabel(InserirUsuario);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 110, 49, 16));
        label_3 = new QLabel(InserirUsuario);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 150, 49, 16));
        pb_inserir = new QPushButton(InserirUsuario);
        pb_inserir->setObjectName("pb_inserir");
        pb_inserir->setGeometry(QRect(230, 190, 75, 24));

        retranslateUi(InserirUsuario);

        QMetaObject::connectSlotsByName(InserirUsuario);
    } // setupUi

    void retranslateUi(QDialog *InserirUsuario)
    {
        InserirUsuario->setWindowTitle(QCoreApplication::translate("InserirUsuario", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("InserirUsuario", "Nome", nullptr));
        label_2->setText(QCoreApplication::translate("InserirUsuario", "CPF", nullptr));
        label_3->setText(QCoreApplication::translate("InserirUsuario", "Senha", nullptr));
        pb_inserir->setText(QCoreApplication::translate("InserirUsuario", "Inserir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InserirUsuario: public Ui_InserirUsuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERIRUSUARIO_H
