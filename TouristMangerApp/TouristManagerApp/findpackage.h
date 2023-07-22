#ifndef FINDPACKAGE_H
#define FINDPACKAGE_H

#include <QDialog>
#include "DatabaseHeader.h"

namespace Ui {
class FindPackage;
}

class FindPackage : public QDialog
{
    Q_OBJECT

public:
    explicit FindPackage(QWidget *parent = nullptr);
    ~FindPackage();

private slots:
    void on_btnFindPckage_clicked();

private:
    Ui::FindPackage *ui;
    QSqlQueryModel *model;
};

#endif // FINDPACKAGE_H
