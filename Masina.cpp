//
// Created by stefa on 12/22/2021.
//

#include "Masina.h"

Masina::Masina():Vehicul(),marca(nullptr) {
 for(int i=0; i<3;i++)
     dimensiuni[i]=0;

}

Masina::~Masina() {
delete marca;
}

void Masina::afisare() {
    cout<<"AFISARE MASINA{"<<endl;
    cout<<"Proprietar: "<<proprietar<<endl;
    cout<<"Pret: "<<pret <<endl;
    cout<<"Dimensiunile masinii: ";
    for(int i=0;i<3;i++)
        cout<<dimensiuni[i]<<" ";
    cout<<endl;
    cout<<"Marca masinii este: "<<marca<<endl;
    cout<<"}"<<endl;
    cout<<endl;
}
Masina::Masina(char *proprietar, int pret, int* dimensiuni, char* marca) {
    this->proprietar=strdup(proprietar);
    this->pret=pret;
    for(int i=0; i<3;i++)
        this->dimensiuni[i]=dimensiuni[i];
    this->marca=strdup(marca);
}

Masina& Masina::operator=(const Masina& obj) {
    Vehicul::operator=(obj);
    if(marca!= nullptr)
        delete marca;

    marca=strdup(obj.marca);

    for(int i=0; i<3;i++)
        this->dimensiuni[i]=obj.dimensiuni[i];

    return *this;
}
