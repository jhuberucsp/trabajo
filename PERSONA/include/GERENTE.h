#ifndef GERENTE_H
#define GERENTE_H
#include"PERSONA.h"
#include<iostream>
using namespace std;
class GERENTE : public PERSONA
{
    protected:
        string cargo;
    public:

        GERENTE(std::string /*,BIRTHDAY */,std::string );
        virtual ~GERENTE();
        void infoprint();

};

#endif // GERENTE_H
