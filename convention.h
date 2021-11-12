#ifndef CONVENTION_H
#define CONVENTION_H
#include <iostream>
#include <string>
//#include <QObject>

using namespace std;


class Convention//:public QObject
{
    //Q_OBJECT
public:
    int idConvention;
    string nom;
    int nbHeur;
    Convention();



};

#endif // CONVENTION_H
