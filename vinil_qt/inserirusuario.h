#ifndef INSERIRUSUARIO_H
#define INSERIRUSUARIO_H

#include <QDialog>

namespace Ui { class InserirUsuario; }

class InserirUsuario : public QDialog
{
    Q_OBJECT

public:
    explicit InserirUsuario(QWidget *parent = nullptr);
    ~InserirUsuario();

private slots:
    void on_pb_inserir_clicked();

private:
    Ui::InserirUsuario *ui;
};

#endif // INSERIRUSUARIO_H
