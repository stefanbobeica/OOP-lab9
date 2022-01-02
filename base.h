//
// Created by stefa on 12/22/2021.
//

#ifndef LAB9_BASE_H
#define LAB9_BASE_H
#include <iostream>
#include <cstring>

class base {
public:
    virtual ~base()=0;
    virtual int getPret()=0;
    virtual void afisare()=0;

};


#endif //LAB9_BASE_H
