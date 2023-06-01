#ifndef __ESCALAMAYOR_H__
#define __ESCALAMAYOR_H__


#include <iostream>
#include "Estructura.h"
#include "Sonido.h"
#include "Do1.h"
#include <vector>
#include <windows.h>


class EscalaMayor : public Estructuras {

    public:
        EscalaMayor(string*, int=12, int=0);

        virtual void print() override;
        virtual void printSonido(vector<Sonido*>) override;

        int retornarElVec();

        void printvec();

       
    

    private:
        int u;
        int pos;
        vector<int> vec1;
        vector<Sonido*> vec2=vecP;




};

#endif


