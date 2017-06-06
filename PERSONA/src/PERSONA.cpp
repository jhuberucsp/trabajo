#include "PERSONA.h"

PERSONA::PERSONA(std::string n/*,BIRTHDAY bd*/) : /*B(bd),*/name(n)
{
       BIRTHDAY b(1996,9,1);
       B=b;
}

PERSONA::~PERSONA()
{

}
void PERSONA::infoprint(){
    cout<<"NOMBRE: "<<name<<endl;
    cout<<"FECHA Nacimiento";
    B.impri();
    cout<<"Edad Actual :"<<2017-(B.anio)<<endl;
        cout<<"Puesto laboral: SIN EMPLEO"<<endl;}
