//
// Created by stefa on 12/22/2021.
//

#ifndef LAB9_VEHICUL_H
#define LAB9_VEHICUL_H
#include <iostream>
#include <cstring>
#include "base.h"
using namespace  std;

class Vehicul:public base {
protected:
    char* proprietar;
    int pret;
public:
    Vehicul();
    Vehicul( char*,int);
    int getPret();
    ~Vehicul();
    void afisare();
     Vehicul& operator=(const Vehicul&);
};


#endif //LAB9_VEHICUL_H
