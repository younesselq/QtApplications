#include "addpackage.h"
#include "ui_addpackage.h"

AddPackage::AddPackage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPackage)
{
    ui->setupUi(this);
}

AddPackage::~AddPackage()
{
    delete ui;
}

void AddPackage::on_btnSave_clicked()
{
    QString packageName = ui->txtPckageName->text();
    QString packageDescription = ui->txtDescription->toPlainText();
    QString amount = ui->txtAmount->text();

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
    query.prepare("INSERT INTO package (PackageName, PackageDescription, Amount) VALUES ('" + packageName + "','" + packageDescription + "','" + amount + "')");
    query.exec();
    qDebug() << "Last erreur: " << query.lastError();

    database.close();


}

