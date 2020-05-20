#include "personal.h"
#ifndef PERSONALTEHNIC_H
#define PERSONALTEHNIC_H
#include <iostream>

using namespace std;



class personaltehnic:public personal
{
    public:
        personaltehnic();
        personaltehnic(string nf);
        virtual ~personaltehnic();

};

#endif // PERSONALTEHNIC_H
