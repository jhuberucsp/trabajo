#ifndef BIRTHDAY_H
#define BIRTHDAY_H
#include<iostream>
using namespace std;

class BIRTHDAY
{
    public:
        BIRTHDAY(int a,int m,int d);
        BIRTHDAY();
        virtual ~BIRTHDAY();
        void virtual impri();

    //protected:
        int dia;
        int mes;
        int anio;
};

#endif // BIRTHDAY_H
