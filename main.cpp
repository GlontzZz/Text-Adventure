#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "File.h"
using namespace std;

int main()
{
    char name[50];
    cout << "Cum te numesti, baiete?"<< endl;
    cin.getline(name, 50);
    cout << "Ok, " << name << " trebuie sa ne grabim." << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Esti abandonat intr-o padure si ai la dispozitie doar o cutie de chibrituri.\n";
    cout << "Este in jurul orei 15.\n";
    cout << "Seara se apropie rapid iar tu nu ai inca un adapost.\n";
    cout << "\nCe hotarasti sa faci?\n";
    int choice;
    cout << "1. Sa aduni lemne pentru a face un foc." << endl;
    cout << "2. Sa mergi in continuare pana se intuneca." << endl;
    cout << "3. Sa strigi dupa ajutor." << endl;
    cout << "4. Te urci in cel mai inalt copac din apropierea ta." << endl;
    cin >> choice; cout << endl;

    cout << "\n\n\n-------------------------------------------------\n";
    if (choice==1){
        cout << "In regula. Ai inceput sa aduni lemne. Se pare ca acum ai suficiente lemne pentru a aprinde un foc.\n";
        cout << "Cauti un loc uscat pentru a aprinde focul...";

        File fireObject;
    }
    else if(choice==2){
        cout << "In regula. Ai hotarat sa continui expeditia pana la venirea noptii." << endl;
        cout << "Pe masura ce inaintezi zaresti un drum care se bifurca." << endl;
        cout << "Pe ce poteca doresti sa inaintezi?(1 pentru stanga / 2 pentru dreapta)" << endl;
        int drumulet;
        cin >> drumulet;
        if (drumulet==1){
            cout << "Pe masura ce inaintezi gasesti un bilet pe care scrie:" << endl;
            cout << "Veni, vidi, vici." << endl;
            system ("PAUSE");
            system("CLS");
            cout << "Inaintezi..." << endl;
            cout << "Dupa aproximativ 243,31515 metri gasesti un cufar." << endl;
            cout << "Pentru a il deschide trebuie sa introduci un text de 4 litere." << endl;
            cout << "Indiciul este urmatorul:" << endl;
            cout << "Ce ai gasit tu mai devreme, in acel bilet nu sunt blesteme" << endl;
            cout << "Cuvantul trei de tu ti-l amintesti, o recompensa mare o sa primesti:" << endl;
            char cuvant[10];
            cin.getline(cuvant, 4);
            if (cuvant=="vici"){
                cout << "Felicitari! Ai reusit sa deschizi cufarul si inauntru gasesti o racheta de semnalizare." << endl;
                cout << "O folosesti iar un elicopter o observa." << endl;
                cout << "Te poti considera salvat." << endl;
                system ("PAUSE");
            }
            else {
                cout << "Din pacate nu ai ghicit cuvantul iar jocul se termina aici.";
            }
        }
        else if (drumulet==2){

        }
        else {cout << "Nu ai ales o optiune buna. Jocul se va inchide, muhahahaha!";system("PAUSE");};

    }
    else if(choice==3){

    }
    else if(choice==4){

    }
    else{

    }
    return 0;
}
