#ifndef FIRMADISTRIBUTIE_H
#define FIRMADISTRIBUTIE_H
#include <iostream>
#include "film.h"
#include "personal.h"
using namespace std;

class firmadistributie
{   int nrpersonal;
    int nractori;
    struct lista{
        film f1;
        personal* p1;
        int bonus;
    }l[50];
    public:
        firmadistributie();
        void adaugafilm();
        ~firmadistributie();

};

#endif // FIRMADISTRIBUTIE_H
