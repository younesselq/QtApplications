#include "registertourist.h"
#include "ui_registertourist.h"

RegisterTourist::RegisterTourist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterTourist)
{
    ui->setupUi(this);
}

RegisterTourist::~RegisterTourist()
{
    delete ui;
}

void RegisterTourist::on_btnSave_clicked()
{
    QString firstName = ui->txtFirstName->text();
    QString lastName = ui->txtLastName->text();
    QString passportNO=ui->txtPassport->text();
    QString contactNO=ui->txtContact->text();
    QString packageName=ui->cmbChoosePackage->currentText();
    QString permanentText=ui->txtAdress->text();

    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    // Définir le chemin de la base de données avant d'ajouter la base de données
    database.setDatabaseName("C:/Users/AY026817/Desktop/Training/Qt/Database/MyTouristManager.db");

    // Vérifier si le fichier de base de données existe
    if (QFile::exists("C:/Users/AY026817/Desktop/Training/Qt/Database/MyTouristManager.db"))
    {
        qDebug() << "File exists";
    }
    else {
        qDebug() << "File doesn't exist";
    }

    // Vérifier si la base de données est connectée
    if (!database.open()) {
        qDebug() << "Error database is not connected";
    }
    else {
        qDebug() << "Database is connected successfully!";
    }

    QSqlQuery query(database);
    query.prepare("INSERT INTO Tourist (FirstName, LastName, PassportNO,ContactNO,PermanentAdress,PackageName) VALUES ('" + firstName + "','" + lastName + "','" + passportNO + "','" + contactNO + "','" + permanentText + "','" + packageName + "')");
    query.exec();
    qDebug() << "Last erreur: " << query.lastError();

    database.close();
}

