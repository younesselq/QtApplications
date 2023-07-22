#include "findtourist.h"
#include "ui_findtourist.h"

FindTourist::FindTourist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindTourist)
{
    ui->setupUi(this);
    model=NULL;
}

FindTourist::~FindTourist()
{
    delete ui;
}

void FindTourist::on_btnFindTourist_clicked()
{
    QString packageName = ui->txtTouristName->text();

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
    query.prepare("select * from Tourist where FirstName like  '%" + packageName + "%'");
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

