#ifndef FILM_H
#define FILM_H
#include <iostream>
#include <vector>
#include "personal.h"
#include "actor.h"
#include "regizor.h"
#include "personaltehnic.h"
using namespace std;

class personal;

class film
{   int durata;
    string nume;
    string tip;
    int incasari;
    public:
        film();
        film(string n,string t, int d,int i);
        void setname(string n);
        void settip(string t);
        void setdurata(int d);
        void setincasari(int i);
        string getname();
        string gettip();
        int getdurata();
        int getincasari();
        ~film();
        film (const film& other);
        film& operator = (film const &f2);
        friend istream& operator>>(istream& in, film& f1);
        friend ostream& operator<<(ostream& out, film& f1);

};

#endif // FILM_H
