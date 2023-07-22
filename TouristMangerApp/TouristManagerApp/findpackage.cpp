#include "findpackage.h"
#include "ui_findpackage.h"

FindPackage::FindPackage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindPackage)
{
    ui->setupUi(this);
    model=NULL;
}

FindPackage::~FindPackage()
{
    delete ui;
}

void FindPackage::on_btnFindPckage_clicked()
{

    try {
        QString packageName = ui->txtPackageName->text();

        qDebug() << "packageName is: "<<packageName;
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
        query.prepare("select * from Package where PackageName like  '%" + packageName + "%'");
        query.exec();
        qDebug() << "Last query: " << query.lastQuery();
        qDebug() << "Last erreur: " << query.lastError().text();
        if(model==NULL){
            model=new QSqlQueryModel();
        }
        model->setQuery(std::move(query));
        ui->tableView->setModel(model);
        ui->tableView->setColumnWidth(0,200);
        ui->tableView->setColumnWidth(1,200);

        ui->tableView->setColumnWidth(2,200);

        database.close();
    }
    catch (const std::exception& e) {
        qDebug() << "Exception occurred: " << e.what();
    }

}

