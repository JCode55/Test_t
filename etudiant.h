#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <iostream>
#include <string>
#include "convention.h"
#include <QObject>
#include <QtSql>


using namespace std;

class Etudiant : public QObject , public Convention
{
    Q_OBJECT
public:
    int idEtudiant;
    string nom;
    string prenom;
    string mail;
    //string cnom;
      QSqlQuery *query;

   // int nbHeur;
   explicit Etudiant(QObject *parent = 0);

//Etudiant();
    Convention convention;

signals:
     void sigidEtudiant(QString text);
     void signom(QString text);
     void sigprenom (QString text);
     void sigmail(QString text);
     //void signomc(string nom);
     //void signomc(string cnom);

    //void sighr(int nbHeur);
     void sigconvention(QString text);


     //void sigtgenere(QString message);
     void sigtgenere(QString text);

     void sigdb(QSqlQuery query);


public slots:

    void get_id();
    void getnom();
    void getprenom();
    void put_detail(void);
    void convention_detail(void);
    void get_nomc(void);
    void gethr(void);

    void tgenere(void);
    void db(void);


private:
    QString indiquer;
    int chiffre;
    QString text;
    QString message;


};

#endif // ETUDIANT_H
