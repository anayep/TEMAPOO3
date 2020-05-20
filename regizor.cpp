#include "regizor.h"
#include <iostream>

using namespace std;
regizor::regizor():salariu(200)
{
    //ctor
}

regizor::regizor(string nf):salariu(200)
{
    string n;
    int c,pi;
    cout<<"Introduceti numele persoanei: "<<endl;
    cin>>n;
    setnumepersonal(n);
    cout<<"Introduceti cnp-ul:"<<endl;
    cin>>c;
    setcnp(c);
    cout<<"Introduceti procentul din incasari: "<<endl;
    cin>>pi;
    setprocent_incasari(pi);
    setnume_film(nf);
}

regizor::~regizor()
{
    //dtor
}
