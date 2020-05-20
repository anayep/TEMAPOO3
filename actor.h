#include "personal.h"
#ifndef ACTOR_H
#define ACTOR_H
#include <iostream>


using namespace std;

class actor:virtual public personal
{
    bool principal; //1-daca este principal
    public:
        actor();
        actor(string numef);
        bool getprincipal();
        virtual ~actor();
        friend ostream& operator<<(ostream& out, actor& p);
};

#endif // ACTOR_H
