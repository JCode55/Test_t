import QtQuick 2.0
import QtQuick 2.4

import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.2
import QtMultimedia 5.9
import QtQuick.Layouts 1.3
import QtQuick.Controls 1.4 as A1
import QtQuick.Controls.Material 2.2
import QtQuick.Controls.Universal 2.2

FormulaireForm
{
    Connections // connexion signaux
         {
             target:Etudiant // cible


         // Signaux
             onSigidEtudiant:
            {

                liste.text = text;//idEtudiant = idEtudiant;

             }

             onSignom:
                    {
                          element.text = text;
                    }

             onSigconvention:
             {
                texte.text = text;
             }

             onSigtgenere:
             {

                 textEdit.text = text;

             }

             onSigdb:
             {

             }



         }






             select.onClicked:
             {
                 // clic bouton select
                 Etudiant.get_id();
                 Etudiant.getnom();
                 Etudiant.convention_detail();
                 //Attestation.tgenere();
                 Etudiant.tgenere();



             }

             ins_db.onClicked:
             {
                Etudiant.db();
             }

           /*  b2.onClicked:
             {
                 //clic bouton nom+type
                 GPS.gps_in();
                 GPS.gps_ft();

                 GPS.gps_rr();
                 GPS.gps_sb();
                 GPS.gps_pt();


                 Compass.cp_in();
                 Compass.cp_1();
                 Compass.cp_2();
                 Compass.cp_3();
                 Compass.cp_4();

                 Anemometer.a_in();
                 Anemometer.a_1();
                 Anemometer.a_2();

                 Gyro.g_in();
                 Gyro.g_1();
                 Gyro.g_2();



             }*/







}
