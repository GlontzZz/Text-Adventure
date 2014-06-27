#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "File.h"
using namespace std;

File::File()
{
    int x;
    srand(time(0));
    x=rand()%9+1;
    int i=0;
    int chance;
    cout << "Introdu un numar intre 1 si 10.\n";
    cout << "Pentru a aprinde focul ai la dispozitie 5 incercari de a ghici numarul.\n";
    cout << "Mult noroc!\n";
    do{
        cin >> chance; cout << endl;
        i++;
        if (x==chance){
            cout << "Felicitari, ai aprins focul si ai trecut cu bine peste noapte.\n";
            cout << "O echipa de salvatori te-a observat si a venit dupa tine.";
            i=i+6;
        }
    }while(i<5);
    if (x!=chance) {
            cout << "Nu ai reusit sa aprinzi focul, iar seara isi face simtita prezenta.\n";
            cout << "Ce alegi sa faci:\n";
            cout << "1. Te culci intr-o zona deschisa.\n";
            cout << "2. Iti continui drumul in speranta ca te vei culca ziua urmatoare.\n";
            int alegere;
            cin >> alegere;
            system("CLS");
            if (alegere==1) {
                int random;
                srand(time(0));
                random=rand()%2+1;
                cout << "Ai ales sa te culci intr-o zona deschisa.\n";
                if (random==1){
                    cout << "Soarele a rasarit iar tu ai trecut peste noapte cu bine.\n";
                }
                if (random==2){
                    cout << "Din pacate, animalele salbatice te-au descoperit si ai murit.\n";
                }
            }
    }

}
