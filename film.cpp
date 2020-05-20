#include "film.h"
#include <iostream>
#include <string>
using namespace std;
film::film()
{

}

film::film(string n,string t,int d,int i)
{
    nume=n;
    tip=t;
    durata=d;
    incasari=i;
}

void film::setname(string n)
{
    nume=n;
}

void film::settip(string t)
{
    tip=t;
}

void film::setdurata(int d)
{
    durata=d;
}

void film::setincasari(int i)
{
    incasari=i;
}

int film::getdurata()
{
    return durata;
}

string film::getname()
{
    return nume;
}

string film::gettip()
{
    return tip;
}

int film::getincasari()
{

    return incasari;
}

film& film:: operator = (film const &f2)
{
    durata=f2.durata;
nume=f2.nume;
   tip=f2.tip;
   incasari=f2.incasari;
return *this;
}

film::film (const film& other)
{
    durata=other.durata;
    nume=other.nume;
    tip=other.tip;
    incasari=other.incasari;
}

film::~film()
{

}

istream& operator>>(istream& in, film& f1)
{     string n,t,tip_pers;
    int d,nr,i;
    cout<<"Introduceti numele filmului:"<<endl;
    cin>>n;
    f1.setname(n);
    cout<<"Introduceti tipul filmului:"<<endl;
    cin>>t;
    f1.settip(t);
    cout<<"Introduceti durata filmului:"<<endl;
    cin>>d;
    f1.setdurata(d);
    cout<<"Introduceti incasarile filmului:"<<endl;
    cin>>i;
    f1.setincasari(i);

    return in;

}

ostream& operator<<(ostream& out, film& f1)
{
    cout<<"Numele filmului este: "<<f1.getname()<<endl;
    cout<<"Durata filmului este: "<<f1.getdurata()<<endl;
    cout<<"Tipul filmului este: "<<f1.gettip()<<endl;
    cout<<"Incasarile filmului sunt: "<<f1.getincasari()<<endl;
    return out;

}
