#include <iostream>
#include"PERSONA.h"
#include"BIRTHDAY.h"
#include"GERENTE.h"
#include"CONCERGE.h"
using namespace std;

int main()
{   PERSONA *p[2];
    p[0]=new GERENTE("JUAN","Gerente");
    p[0]-> infoprint();
    p[1]=new CONCERGE("LUCHO","CONCERGE");
    p[1]->infoprint();
    p[2]=new GERENTE("JHUBER","UNI");
    p[2]->infoprint();
}
