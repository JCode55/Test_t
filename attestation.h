#ifndef ATTESTATION_H
#define ATTESTATION_H

#include <QtSql>
#include "etudiant.h"
#include "convention.h"
#include <QObject>

using namespace std;


class Attestation : public Etudiant//, public QObject//public Convention
{
    Q_OBJECT
public:
    int idAttestation;
    Etudiant etudiant;
    Convention convention;
    Attestation();

signals:
     void sigtgenere(QString message);

public slots:

    void tgenere(void);


private:
    QString message;
};

#endif // ATTESTATION_H
