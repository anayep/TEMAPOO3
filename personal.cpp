#include "personal.h"
#include <iostream>

using namespace std;

personal::personal()
{
    //ctor
}

personal::personal(int c,string n,string nf,int pi):cnp(c),nume(n),nume_film(nf),procent_incasari(pi){}



void personal::setnumepersonal(string n)
{
    nume=n;
}

void personal::setcnp(int c)
{
    cnp=c;
}

bool personal::getprincipal()
{
    return principal;
}

void personal::setnume_film(string nf)
{
    nume_film=nf;
}

void personal::setprocent_incasari(int pi)
{
    procent_incasari=pi;
}

personal::personal(const personal& other)
{
    cnp=other.cnp;
    nume=other.nume;
    nume_film=other.nume_film;
    procent_incasari=other.procent_incasari;
}

string personal::getnumepersonal()
{
    return nume;
}

string personal::getnumefilm()
{
    return nume_film;
}

int personal::getcnp()
{
    return cnp;
}

int personal::getprocent_incasari()
{
    return procent_incasari;
}

personal& personal::operator = (personal const &p2)
{
    cnp=p2.cnp;
    nume=p2.nume;
    nume_film=p2.nume_film;
    procent_incasari=p2.procent_incasari;
}
personal::~personal()
{
    //dtor
}

istream& operator>>(istream& in, personal& p)
{
    string n;
    int c,pi;
    cout<<"Introduceti numele persoanei: "<<endl;
    cin>>n;
    p.setnumepersonal(n);
    cout<<"Introduceti cnp-ul:"<<endl;
    cin>>c;
    p.setcnp(c);
    cout<<"Introduceti procent din incasari:"<<endl;
    cin>>pi;
    p.setprocent_incasari(pi);

    return in;

}
ostream& operator<<(ostream& out, personal& p)
{
    cout<<"Numele persoanei: "<<p.getnumepersonal()<<endl;
    cout<<"CNP-ul persoanei: "<<p.getcnp()<<endl;
    cout<<"Numele filmului: "<<p.getnumefilm()<<endl;
    cout<<"Procentul din incasari: "<<p.getprocent_incasari()<<endl;
    return out;
}

