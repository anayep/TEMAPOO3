#include "actor.h"
#include <iostream>
#include "film.h"
#include <string>
using namespace std;
actor::actor()
{
principal=0;
}

actor::actor(string numef)
{

    string n;
    int c,pi,x;
    cout<<"Introduceti 1 daca actorul este principal"<<endl;
    cin>>x;
    if(x==1) principal=1;
    else principal=0;
    cout<<"Introduceti numele persoanei: "<<endl;
    cin>>n;
    setnumepersonal(n);
    cout<<"Introduceti cnp-ul:"<<endl;
    cin>>c;
    setcnp(c);
    cout<<"Introduceti procentul din incasari: "<<endl;
    cin>>pi;
    setprocent_incasari(pi);
    setnume_film(numef);

}

actor::~actor()
{
    //dtor
}
bool actor::getprincipal()
{
    return principal;
}

ostream& operator<<(ostream& out, actor& p)
{
    cout<<"Numele persoanei: "<<p.getnumepersonal()<<endl;
    cout<<"CNP-ul persoanei: "<<p.getcnp()<<endl;
    cout<<"Numele filmului: "<<p.getnumefilm()<<endl;
    cout<<"Procentul din incasari: (fara bonus)"<<p.getprocent_incasari()<<endl;
    return out;
}
