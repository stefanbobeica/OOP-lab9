//
// Created by stefa on 12/22/2021.
//

#include "Masina_cu_remorca.h"

Masina_cu_remorca::Masina_cu_remorca():Remorca(),Masina(),masa_totala(0) {}

Masina_cu_remorca::~Masina_cu_remorca() {
;
}

void Masina_cu_remorca::afisare() {
    cout<<"AFISARE MASINA_CU_REMORCA{"<<endl;
    cout<<"Proprietar: "<<Masina::proprietar<<endl;
    cout<<"Pret: "<<Masina::pret<<endl;
    cout<<"Dimensiunile masinii: ";
    for(int i=0; i<3;i++)
        cout<<Masina::dimensiuni[i]<<" ";
    cout<<endl;
    cout<<"Marca masinii este: ";
    cout<<Masina::marca<<endl;
    cout<<"Dimensiunile remorcii sunt: ";
    for(int i=0; i<3;i++)
        cout<<Remorca::dimensiuni[i]<<" ";
    cout<<endl;
    cout<<"Greutatea maxima este: "<<Remorca::greutate_maxima<<endl;
    cout<<"Masa totala a masinii cu remorca este:"<<masa_totala<<endl;
    cout<<"}"<<endl;
     cout<<endl;
}

Masina_cu_remorca::Masina_cu_remorca
(int *dimensiuni_r, int *dimensiuni_m, char *proprietar, int pret, int greutate_maxima, char *marca,int masa_totala):
Remorca(proprietar,pret,dimensiuni_r,greutate_maxima),
Masina(proprietar,pret,dimensiuni_m,marca),
masa_totala(masa_totala) {}

int Masina_cu_remorca::getPret() {
    return Masina::pret;
}

Masina_cu_remorca &Masina_cu_remorca::operator=(const Masina_cu_remorca &obj) {
    Remorca::operator=(obj);
    Masina::operator=(obj);
    masa_totala=obj.masa_totala;
    return *this;
}

bool Masina_cu_remorca::operator>(const Masina_cu_remorca obj) {
    return (this->masa_totala > obj.masa_totala);
}

bool Masina_cu_remorca::operator<(const Masina_cu_remorca obj) {
   return (this->masa_totala < obj.masa_totala);
}

int operator+(Masina_cu_remorca &a, Masina_cu_remorca &b) {

    return (a.masa_totala+b.masa_totala);
}

int operator-(Masina_cu_remorca &a, Masina_cu_remorca &b) {
    return (a.masa_totala-b.masa_totala);
}

int Masina_cu_remorca::getMasa_totala() {
    return masa_totala;
}
