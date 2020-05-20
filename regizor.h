#include "personal.h"
#ifndef REGIZOR_H
#define REGIZOR_H
#include <iostream>


using namespace std;

class regizor:public personal
{
    const int salariu;

    public:
        regizor();
        regizor(string nf);

        virtual ~regizor();
};

#endif // REGIZOR_H
