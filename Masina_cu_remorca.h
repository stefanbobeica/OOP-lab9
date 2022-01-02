//
// Created by stefa on 12/22/2021.
//

#ifndef LAB9_MASINA_CU_REMORCA_H
#define LAB9_MASINA_CU_REMORCA_H
#include "Remorca.h"
#include "Masina.h"


class Masina_cu_remorca: public Remorca, public Masina{
private:
    int masa_totala;
public:
    Masina_cu_remorca();
    Masina_cu_remorca(int *dimensiuni_r, int *dimensiuni_m, char *proprietar, int pret, int greutate_maxima, char *marca,int masa_totala);
    ~Masina_cu_remorca();
    void afisare();
    int getPret();
    int getMasa_totala();
    Masina_cu_remorca& operator=(const Masina_cu_remorca&);
    bool operator >(const Masina_cu_remorca);
    bool operator <(const Masina_cu_remorca);
    friend int operator+(Masina_cu_remorca&,Masina_cu_remorca&);
    friend int operator-(Masina_cu_remorca&,Masina_cu_remorca&);
};


#endif //LAB9_MASINA_CU_REMORCA_H
