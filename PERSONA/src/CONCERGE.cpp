#include "CONCERGE.h"

CONCERGE::CONCERGE(string n,string c): PERSONA(n),cargo(c)
{
    BIRTHDAY co(1995,11,12);
    B=co;
}

CONCERGE::~CONCERGE()
{
    //dtor
}
void CONCERGE::infoprint(){
    cout<<"NOMBRE: "<<name<<endl;
    cout<<"FECHA Nacimiento";
    B.impri();
    cout<<"Edad Actual"<<(B.anio)-2017<<endl;
    cout<<"Puesto laboral: "<<cargo<<endl;
    }
