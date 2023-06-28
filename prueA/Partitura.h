#ifndef PARTITURA_H
#define PARTITURA_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
//#include "Nota.h"


using namespace std;

class Partitura{


    public:
    Partitura(int);
    void verificar();
    void getsonido();

    void mostrar();
/*
    void getcancion();
    void convertirNotas();
    void getSonido();

    void Print();
*/


    

    private:
        int tam;
        int nota;
        string figura;

        vector <string> tokens;

        vector <int> vec2;

        //vector<Nota*> vec3;
        

    int Do1=523;
    int Reb1=554;
    int Re1=587;
    int Mib1=622;
    int Mi1=659;
    int Fa1=698;
    int Solb1=739;
    int Sol1=783;
    int Lab1=830;
    int La1=880;
    int Sib1=932;
    int Si1=987;



    int Do2=1046;
    int Reb2=1108;
    int Re2=1174;
    int Mib2=1244;
    int Mi2=1318;
    int Fa2=1393;
    int Solb2=1479;
    int Sol2=1567;
    int Lab2=1661;
    int La2=1760;
    int Sib2=1854;
    int Si2=1975;

    int Do3=2093;





    int blanca=1400;
    int negra =700;
    int corchea =350;



};


#endif