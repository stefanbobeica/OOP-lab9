//
// Created by stefa on 12/22/2021.
//

#ifndef LAB9_REMORCA_H
#define LAB9_REMORCA_H
#include "Vehicul.h"


class Remorca: virtual public Vehicul {
protected:
    int dimensiuni[3];
    int greutate_maxima;
public:
    Remorca();
    Remorca(char*,int,int*,int);
    void afisare();
    ~Remorca();
     Remorca& operator=(const Remorca &);
};


#endif //LAB9_REMORCA_H
