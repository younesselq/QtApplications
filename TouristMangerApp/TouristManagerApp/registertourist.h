#ifndef REGISTERTOURIST_H
#define REGISTERTOURIST_H

#include <QDialog>
#include "DatabaseHeader.h"

namespace Ui {
class RegisterTourist;
}

class RegisterTourist : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterTourist(QWidget *parent = nullptr);
    ~RegisterTourist();

private slots:
    void on_btnSave_clicked();

private:
    Ui::RegisterTourist *ui;
};

#endif // REGISTERTOURIST_H
