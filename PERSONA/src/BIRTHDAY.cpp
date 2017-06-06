#include "BIRTHDAY.h"

BIRTHDAY::BIRTHDAY(){
    /*dia=1;
    mes=9;
    anio=1996;*/}
BIRTHDAY::BIRTHDAY(int a,int m,int d) : dia(d),mes(m),anio(a){
}

BIRTHDAY::~BIRTHDAY()
{
    //dtor
}
void BIRTHDAY::impri(){
    cout<<dia<<" / "<<mes<<" / "<<anio<<endl;}
