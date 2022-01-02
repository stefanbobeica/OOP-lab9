//
// Created by stefa on 12/22/2021.
//

#include "Vehicul.h"

Vehicul::Vehicul():proprietar(nullptr),pret(0) {}

int Vehicul::getPret() {
    return this->pret;
}

Vehicul::Vehicul( char *proprietar, int pret):pret(pret){
    this->proprietar=strdup(proprietar);
}
Vehicul::~Vehicul(){
    delete proprietar;
}

void Vehicul::afisare() {
cout<<"AFISARE VEHICUL{"<<endl;
    cout<<"Proprietar: "<<proprietar<<endl;
    cout<<"Pret: "<<pret <<endl;
    cout<<"}"<<endl;
    cout<<endl;

}

Vehicul& Vehicul::operator=(const Vehicul &obj) {
    this->pret=obj.pret;
    if(proprietar!= nullptr)
        delete proprietar;
    this->proprietar=strdup(obj.proprietar);
    return *this;
}
