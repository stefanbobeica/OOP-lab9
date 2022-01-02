//
// Created by stefa on 12/22/2021.
//

#ifndef LAB9_MASINA_H
#define LAB9_MASINA_H
#include "Vehicul.h"
using namespace  std;

class Masina: virtual public Vehicul {
protected:
    int dimensiuni[3];
    char *marca;
public:
    Masina();
    ~Masina();
    Masina(char*,int,int*,char*);
    void afisare();
    Masina& operator=(const Masina&);

};


#endif //LAB9_MASINA_H
