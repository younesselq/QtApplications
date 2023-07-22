/********************************************************************************
** Form generated from reading UI file 'registertourist.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERTOURIST_H
#define UI_REGISTERTOURIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterTourist
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtFirstName;
    QLabel *label_2;
    QLineEdit *txtLastName;
    QLabel *label_3;
    QLineEdit *txtPassport;
    QLabel *label_4;
    QLineEdit *txtContact;
    QLabel *label_5;
    QLineEdit *txtAdress;
    QLabel *label_6;
    QComboBox *cmbChoosePackage;
    QTextBrowser *txtPackageDescription;
    QPushButton *btnSave;
    QPushButton *btnReset;

    void setupUi(QDialog *RegisterTourist)
    {
        if (RegisterTourist->objectName().isEmpty())
            RegisterTourist->setObjectName("RegisterTourist");
        RegisterTourist->resize(400, 300);
        RegisterTourist->setMinimumSize(QSize(400, 300));
        RegisterTourist->setMaximumSize(QSize(400, 300));
        formLayoutWidget = new QWidget(RegisterTourist);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 10, 371, 231));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtFirstName = new QLineEdit(formLayoutWidget);
        txtFirstName->setObjectName("txtFirstName");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtFirstName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtLastName = new QLineEdit(formLayoutWidget);
        txtLastName->setObjectName("txtLastName");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtLastName);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtPassport = new QLineEdit(formLayoutWidget);
        txtPassport->setObjectName("txtPassport");

        formLayout->setWidget(2, QFormLayout::FieldRole, txtPassport);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        txtContact = new QLineEdit(formLayoutWidget);
        txtContact->setObjectName("txtContact");

        formLayout->setWidget(3, QFormLayout::FieldRole, txtContact);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        txtAdress = new QLineEdit(formLayoutWidget);
        txtAdress->setObjectName("txtAdress");

        formLayout->setWidget(4, QFormLayout::FieldRole, txtAdress);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        cmbChoosePackage = new QComboBox(formLayoutWidget);
        cmbChoosePackage->setObjectName("cmbChoosePackage");

        formLayout->setWidget(5, QFormLayout::FieldRole, cmbChoosePackage);

        txtPackageDescription = new QTextBrowser(formLayoutWidget);
        txtPackageDescription->setObjectName("txtPackageDescription");

        formLayout->setWidget(6, QFormLayout::FieldRole, txtPackageDescription);

        btnSave = new QPushButton(RegisterTourist);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(270, 260, 80, 18));
        btnReset = new QPushButton(RegisterTourist);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(150, 260, 80, 18));

        retranslateUi(RegisterTourist);

        QMetaObject::connectSlotsByName(RegisterTourist);
    } // setupUi

    void retranslateUi(QDialog *RegisterTourist)
    {
        RegisterTourist->setWindowTitle(QCoreApplication::translate("RegisterTourist", "Register Tourist", nullptr));
        label->setText(QCoreApplication::translate("RegisterTourist", "First Name", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterTourist", "Last Name", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterTourist", "Passport N\302\260", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterTourist", "Contact N\302\260", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterTourist", "Permanent Adress", nullptr));
        label_6->setText(QCoreApplication::translate("RegisterTourist", "Choose Package", nullptr));
        btnSave->setText(QCoreApplication::translate("RegisterTourist", "Save", nullptr));
        btnReset->setText(QCoreApplication::translate("RegisterTourist", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterTourist: public Ui_RegisterTourist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERTOURIST_H
