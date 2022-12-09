#ifndef NOVACONTA_H
#define NOVACONTA_H

#include <QDialog>

namespace Ui {
class NovaConta;
}

class NovaConta : public QDialog
{
    Q_OBJECT

public:
    explicit NovaConta(QWidget *parent = nullptr);
    ~NovaConta();

private slots:
    void on_btnCriar_clicked();

    void on_btnLogin_clicked();

private:
    Ui::NovaConta *ui;
};

#endif // NOVACONTA_H
