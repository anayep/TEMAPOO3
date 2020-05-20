#ifndef PERSONAL_H
#define PERSONAL_H
#include <iostream>

using namespace std;

class personal
{   protected:
    int cnp;
    string nume;
    string nume_film;
    int procent_incasari;
    bool principal;
    public:
        personal();
        personal(int c,string n, string nf,int pi);
        void setnumepersonal(string n);
        void setcnp(int c);
        void setnume_film(string nf);
        void setprocent_incasari(int pi);
        virtual bool getprincipal();
        string getnumepersonal();
        int getcnp();
        string getnumefilm();
        int getprocent_incasari();
        personal(const personal& other);
        virtual ~personal();
        personal& operator = (personal const &p2);
        friend istream& operator>>(istream& in, personal& p);
        friend ostream& operator<<(ostream& out, personal& p);
};

#endif // PERSONAL_H
