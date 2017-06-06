#include "GERENTE.h"

GERENTE::GERENTE(std::string n /*,BIRTHDAY bd */,std::string c): PERSONA(n/*,BIRTHDAY bd*/),cargo(c)


{              BIRTHDAY g(1990,10,11);
                B=g;
            //PERSONA s("LUCAS",p);
}

GERENTE::~GERENTE()
{
    //dtor
}
void GERENTE::infoprint(){    cout<<"NOMBRE: "<<name<<endl;
    cout<<"FECHA Nacimiento";
    B.impri();
    cout<<"Edad Actual"<<(B.anio)-2017<<endl;
    cout<<"Puesto laboral: "<<cargo<<endl;}
