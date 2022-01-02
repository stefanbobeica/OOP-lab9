//
// Created by stefa on 12/22/2021.
//

#include "Remorca.h"

Remorca::Remorca():Vehicul(),greutate_maxima(0) {
for(int i=0; i<3;i++)
    dimensiuni[i]=0;
}

Remorca::Remorca(char *proprietar, int pret, int* dimensiuni, int greutate_maxima) {
this->proprietar=strdup(proprietar);
this->pret=pret;
for(int i=0; i<3;i++)
    this->dimensiuni[i]=dimensiuni[i];
this->greutate_maxima=greutate_maxima;
}

void Remorca::afisare() {
    cout<<"AFISARE REMORCA{"<<endl;
    cout<<"Proprietar: "<<proprietar<<endl;
    cout<<"Pret: "<<pret <<endl;
    cout<<"Dimensiunile remorcii sunt: ";
    for(int i=0;i<3;i++)
        cout<<dimensiuni[i]<<" ";
    cout<<endl;
    cout<<"Greutatea maxima este: "<<greutate_maxima<<endl;
    cout<<"}"<<endl;
    cout<<endl;
}

Remorca::~Remorca() {
;
}

Remorca& Remorca::operator=(const Remorca& obj) {
    Vehicul::operator=(obj);
    this->greutate_maxima=obj.greutate_maxima;
    for(int i=0;i<3;i++)
        this->dimensiuni[i]=obj.dimensiuni[i];
    return *this;
}
