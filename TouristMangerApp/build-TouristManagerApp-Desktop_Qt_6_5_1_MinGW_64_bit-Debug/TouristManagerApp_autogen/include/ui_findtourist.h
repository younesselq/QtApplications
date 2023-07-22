/********************************************************************************
** Form generated from reading UI file 'findtourist.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDTOURIST_H
#define UI_FINDTOURIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_FindTourist
{
public:
    QLabel *label;
    QLineEdit *txtTouristName;
    QPushButton *btnFindTourist;
    QTableView *tableView;

    void setupUi(QDialog *FindTourist)
    {
        if (FindTourist->objectName().isEmpty())
            FindTourist->setObjectName("FindTourist");
        FindTourist->resize(400, 300);
        FindTourist->setMinimumSize(QSize(400, 300));
        FindTourist->setMaximumSize(QSize(400, 300));
        label = new QLabel(FindTourist);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 101, 16));
        txtTouristName = new QLineEdit(FindTourist);
        txtTouristName->setObjectName("txtTouristName");
        txtTouristName->setGeometry(QRect(120, 10, 171, 20));
        btnFindTourist = new QPushButton(FindTourist);
        btnFindTourist->setObjectName("btnFindTourist");
        btnFindTourist->setGeometry(QRect(300, 10, 80, 21));
        tableView = new QTableView(FindTourist);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 70, 371, 192));

        retranslateUi(FindTourist);

        QMetaObject::connectSlotsByName(FindTourist);
    } // setupUi

    void retranslateUi(QDialog *FindTourist)
    {
        FindTourist->setWindowTitle(QCoreApplication::translate("FindTourist", "Find Tourist", nullptr));
        label->setText(QCoreApplication::translate("FindTourist", "Enter Tourist Name", nullptr));
        btnFindTourist->setText(QCoreApplication::translate("FindTourist", "Find", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindTourist: public Ui_FindTourist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDTOURIST_H
