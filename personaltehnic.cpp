#include "personaltehnic.h"
#include <iostream>
#include "film.h"

using namespace std;
personaltehnic::personaltehnic()
{
    //ctor
}
personaltehnic::personaltehnic(string nf)
{
    string n;
    int c,pi,x;
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
personaltehnic::~personaltehnic()
{
    //dtor
}
