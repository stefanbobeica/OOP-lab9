#include <iostream>
#include "Vehicul.h"
#include "Remorca.h"
#include "base.h"
#include "Masina.h"
#include "Masina_cu_remorca.h"
int main() {
    int dimensiune1[3]={60,90,30};
    int dimensiune2[3]={100,200,300};
    int dimensiune3[3]={20,30,40};
    int dimensiune4[3]={50,100,20};

    base** vector;
    Vehicul aux;
    vector=new base*[8];
    vector[0]=new Vehicul("Andrei",5000);
    vector[1]=new Remorca("Vasile",7500,dimensiune3,3500);
    vector[2]=new Masina("Ionut",10000,dimensiune1,"Opel Astra");
    vector[3]=new Masina_cu_remorca(dimensiune4,dimensiune3,"Marcel",6900,3500,"Vauxhall",2000);
    vector[4]=new Vehicul("Mihai",6000);
    vector[5]=new Remorca("Gigel",8500,dimensiune2,3500);
    vector[6]=new Masina("Daniel",10000,dimensiune4,"BMW Passat");
    vector[7]=new Masina_cu_remorca(dimensiune4,dimensiune3,"Vladut",5800,3500,"Honda",2000);
   cout<<"EXERCITIUL 2{"<<endl<<endl;
   for(int i=0; i<8;i++)
       vector[i]->afisare();
  cout<<"}"<<endl;
     base *aux;
     for(int i=0;i<7;i++)
         for(int j=i+1;j<8;j++)
             if(vector[i]->getPret()>vector[j]->getPret())
             {
                 aux=vector[i];
                 vector[i]=vector[j];
                 vector[j]=aux;
             }
    cout<<"EXERCITIUL 3{"<<endl<<endl;
    for(int i=0; i<8;i++)
        vector[i]->afisare();
    cout<<"}"<<endl;
    for(int i=0;i<7;i++)
        delete vector[i];
    delete[]vector;
    Masina_cu_remorca  *Masina1=new Masina_cu_remorca(dimensiune4,dimensiune3,"Ionut",2700,1500,"Dacia",2000);
    Masina_cu_remorca *Masina2=new Masina_cu_remorca(dimensiune2,dimensiune1,"Gigi",4800,3000,"Alfa Romeo",1800);
    cout<<"EXERCITIUL 4{"<<endl<<endl;
    int adunare;
    int scadere;
    adunare=*Masina1+*Masina2;
    cout<<"Expected output operator + : "<<Masina1->getMasa_totala()+Masina2->getMasa_totala()<<endl;
    cout<<"Output: "<<adunare<<endl;
    scadere=*Masina1-*Masina2;
    cout<<"Expected output operator - : "<<Masina1->getMasa_totala()-Masina2->getMasa_totala()<<endl;
    cout<<"Output: "<<scadere<<endl;
    cout<<"Expected output operator > : Masina1"<<endl;
    if(Masina1>Masina2)
        cout<<"Output: Masina1"<<endl;
    else cout<<"Output: Masina2"<<endl;

   cout<<"Expected output operator < : Masina1"<<endl;
    if(Masina1<Masina2)
        cout<<"Output: Masina2"<<endl;
    else cout<<"Output: Masina1"<<endl;
    cout<<"}";
  delete Masina1;
  delete Masina2;
    return 0;
}
