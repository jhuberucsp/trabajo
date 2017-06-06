#ifndef PERSONA_H
#define PERSONA_H
#include"BIRTHDAY.h"
#include<string>
#include<iostream>
using namespace std;
class PERSONA
{
    public:
        PERSONA(string n/*,BIRTHDAY bd*/);
        virtual ~PERSONA();
        virtual void infoprint();

    protected:
        BIRTHDAY B;
        string name;


};

#endif // PERSONA_H
