#include "firmadistributie.h"
#include <iostream>
#include "film.h"
#include "personal.h"

using namespace std;

firmadistributie::firmadistributie()
{
    nrpersonal=0;
    nractori=0;
}
void firmadistributie::adaugafilm(){
int nrFilme,nrPersoane;
int tip_pers;
cin>>nrFilme;
int index=0;
for(int i=0;i<nrFilme;i++)
{
    film f;
    cin>>f;

    cout<<"Cate persoane participa?"<<endl;
    cin>>nrPersoane;
    for(int j=0;j<nrPersoane;j++)
    {

            l[index].f1=f;
            cout<<"Ce tip de angajate este ? \n1 = ACTOR \n2 = REGIZOR \n3 = PERSONAL TEHNIC\n";
            cin>>tip_pers;
            if(tip_pers==1)
                {l[index].p1= new actor(f.getname());
                if(l[index].p1->getprincipal()==1)
                l[index].bonus=((l[index].p1->getprocent_incasari()+10)*l[index].f1.getincasari())/100;
                else
                l[index].bonus=l[index].p1->getprocent_incasari()*l[index].f1.getincasari()/100;
                nractori++;}
            else if(tip_pers==2)
                {l[index].p1= new regizor(f.getname());
                l[index].bonus=200+(l[index].p1->getprocent_incasari()*l[index].f1.getincasari()/100);
                }

            else if(tip_pers==3)
            {
                l[index].p1 = new personaltehnic(f.getname());
                l[index].bonus=l[index].p1->getprocent_incasari()*l[index].f1.getincasari()/100;
            }

                int ok=1;
            for(int k=0;k<index;k++)
            {
               if (l[k].p1->getcnp()==l[index].p1->getcnp())
                ok=0;

            }
            if(ok==1) nrpersonal++;

            cout<<"NR PERSONAL ESTE "<<nrpersonal<<endl;
            cout<<"NR ACTORI ESTE "<<nractori<<endl;
            cout<<*l[index].p1<<endl;
            cout<<l[index].f1<<endl;
            cout<<l[index].bonus<<endl;
            index++;

    }
}

}
firmadistributie::~firmadistributie()
{

}
