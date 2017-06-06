#ifndef CONCERGE_H
#define CONCERGE_H
#include"PERSONA.h"

class CONCERGE :public PERSONA
{
    protected:
    string cargo;
    public:
        CONCERGE(std::string,std::string);
        virtual ~CONCERGE();
        void infoprint();
};

#endif // CONCERGE_H
