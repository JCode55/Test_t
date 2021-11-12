#include "etudiant.h"

Etudiant::Etudiant(QObject *parent) : QObject(parent)
{

}


void Etudiant::get_id(void)
{
   /* cout << "Entrer id:" << idEtudiant << endl;
    cout << "Entrer nom:" << Etudiant::nom << endl;
    cout << "Entrer prénom:" << prenom << endl;
    cout << "Entrer mail:" << mail << endl;
    cout << "Entrer convention:" << Convention::nom << endl;*/

    idEtudiant = 0001;
    text =  QString::number(idEtudiant,'f',0) + ":id";
    emit sigidEtudiant(text);



    //Etudiant::nom = "Dupont";
    /*nom = "Dupont";
    prenom = "Georges";
    mail = "georges.dupont@hotmail.fr";
   // Convention::nom = "Thales";
    emit sigidEtudiant(idEtudiant);
   // emit signom(Etudiant::nom);
    emit signom(nom);

    emit sigprenom(prenom);
    emit sigmail(mail);*/
    //emit sigconvention(Convention::nom);
}


void Etudiant::getnom()
{
    text = "Dupont";
    emit signom(text);

}

void Etudiant::getprenom()
{
    text = "Georges";
    emit sigprenom(text);

}

void  Etudiant::convention_detail(void)
{
    text = "Thalès";
    emit sigconvention(text);
}



void Etudiant::put_detail(void)

{
   cout << "Id:" << idEtudiant << "Nom:" << nom << "prénom:" << prenom << " mail:" << mail << endl;
  // = idEtudiant

}

 void Etudiant::get_nomc(void)
 {
     cout << "Convention" << endl;
 }


void Etudiant::gethr(void)
 {
     //Convention::nbHeur = 10;
     //emit sighr(Convention::nbHeur);
    nbHeur = 10;
    text =  QString::number(nbHeur,'f',0) + "h";
    emit sigidEtudiant(text);

  //  emit sighr(nbHeur);
 }


void Etudiant::tgenere(void)
{
    nbHeur = 10;
    message =  QString::number(nbHeur,'f',0) + "h";
  text = "Bonjour Dupont Georges, \n\n Vous avez suivi  10h de formation chez FormationPlus.\n\n Pouvez-vous nous retourner ce mail avec la pièce  jointe signée.\n\n\nCordialement\n\nFormationPlus."; //,  Etudiant::nom.c_str(), Etudiant::prenom.c_str(),Etudiant::message.toStdString().c_str();;//Convention::nbHeur);
  //text = "Bonjour Etudiant::nom.c_str() Etudiant::prenom.c_str(), \n\n\n Vous avez suivi  Etudiant::message.toStdString().c_str() de formation chez FormationPlus.\n\n Pouvez-vous nous retourner ce mail avec la pièce  jointe signée.\n\n\nCordialement\n\nFormationPlus."; //,  Etudiant::nom.c_str(), Etudiant::prenom.c_str(),Etudiant::message.toStdString().c_str();;//Convention::nbHeur);


    emit sigtgenere(text);
}

void Etudiant::db(void)
{

   QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");

    QSqlQuery query;
    query.prepare("INSERT INTO Etudiant (id, prenom, nom) "
                      "VALUES (?, ?, ?)");
        query.bindValue(0, idEtudiant);
        query.bindValue(1, "Georges");
        query.bindValue(2, "Dupont");
        query.exec();
        emit sigdb(query);
}
