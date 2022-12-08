#ifndef SCREEN_COMPLETED_PURCHASE_H
#define SCREEN_COMPLETED_PURCHASE_H

#include <QDialog>

namespace Ui {
class screen_completed_purchase;
}

class screen_completed_purchase : public QDialog
{
    Q_OBJECT

public:
    explicit screen_completed_purchase(QWidget *parent = nullptr);
    ~screen_completed_purchase();

private:
    Ui::screen_completed_purchase *ui;
};

#endif // SCREEN_COMPLETED_PURCHASE_H
