#include <iostream>
#include <fstream>
#include "Partitura.h"
#include "Nota.h"
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

Partitura::Partitura(int g){
    tam=g;
    int y=0;

    ifstream leer ("cancion.txt");

    while(y<=tam){


    

        //ifstream leer ("cancion.txt");

        string x;
        getline(leer,x);

        string intermediate;
        stringstream check1(x);
            
        while(getline(check1, intermediate, ' '))
        {
            tokens.push_back(intermediate);
        }
    y++;

        
    }
    leer.close ();


    //verificar(tokens);



}


void Partitura::verificar(){

    int j=tokens.size();


    for(int f=0;f<j;f++){


        if(tokens[f]=="sil"){
            vec2.push_back(0);
            continue;
        }

        if(tokens[f]=="Do1"){
            vec2.push_back(523);
            continue;
        }
        if(tokens[f]=="Reb1"){
            vec2.push_back(554);
            continue;
        }
        if(tokens[f]=="Re1"){
            vec2.push_back(587);
            continue;
        }
        if(tokens[f]=="Mib1"){
            vec2.push_back(622);
            continue;
        }
        if(tokens[f]=="Mi1"){
            vec2.push_back(659);
            continue;
        }
        if(tokens[f]=="Fa1"){
            vec2.push_back(698);
            continue;
        }
        if(tokens[f]=="Solb1"){
            vec2.push_back(739);
            continue;
        }
        if(tokens[f]=="Sol1"){
            vec2.push_back(783);
            continue;
        }
        if(tokens[f]=="Lab1"){
            vec2.push_back(830);
            continue;
        }
        if(tokens[f]=="La1"){
            vec2.push_back(880);
            continue;
        }
        if(tokens[f]=="Sib1"){
            vec2.push_back(932);
            continue;
        }
        if(tokens[f]=="Si1"){
            vec2.push_back(987);
            continue;
        }






        if(tokens[f]=="Do2"){
            vec2.push_back(1046);
            continue;
        }
        if(tokens[f]=="Reb2"){
            vec2.push_back(1108);
            continue;
        }
        if(tokens[f]=="Re2"){
            vec2.push_back(1174);
            continue;
        }
        if(tokens[f]=="Mib2"){
            vec2.push_back(1244);
            continue;
        }
        if(tokens[f]=="Mi2"){
            vec2.push_back(1318);
            continue;
        }
        if(tokens[f]=="Fa2"){
            vec2.push_back(1396);
            continue;
        }
        if(tokens[f]=="Solb2"){
            vec2.push_back(1479);
            continue;
        }
        if(tokens[f]=="Sol2"){
            vec2.push_back(1567);
            continue;
        }
        if(tokens[f]=="Lab2"){
            vec2.push_back(1661);
            continue;
        }
        if(tokens[f]=="La2"){
            vec2.push_back(1760);
            continue;
        }
        if(tokens[f]=="Sib2"){
            vec2.push_back(1854);
            continue;
        }
        if(tokens[f]=="S21"){
            vec2.push_back(1975);
            continue;
        }




        if(tokens[f]=="Do3"){
            vec2.push_back(2093);
            continue;
        }
       



        if(tokens[f]=="blanca"){
            vec2.push_back(1400);
            continue;
        }
        if(tokens[f]=="-blanca"){
            vec2.push_back(1400);
            continue;
        }


        if(tokens[f]=="negra"){
            vec2.push_back(700);
            continue;
        }
        if(tokens[f]=="-negra"){
            vec2.push_back(700);
            continue;
        }


        if(tokens[f]=="corchea"){
            vec2.push_back(350);
            continue;
        }
        if(tokens[f]=="-corchea"){
            vec2.push_back(350);
            continue;
        }


        if(tokens[f]=="semicorchea"){
            vec2.push_back(175);
            continue;
        }
        if(tokens[f]=="-semicorchea"){
            vec2.push_back(175);
            continue;
        }


        if((f+1)>j){
            break;
        }

    }


    





}




void Partitura::getsonido(){

    for(int o=0;o<vec2.size();o+=2){
        Beep(vec2[o],vec2[o+1]);
    }


}














void Partitura::mostrar(){

    for(int u=0; u<tokens.size();u++){
        cout<<tokens[u]<<endl;
    }


}

/*
void Partitura::getcancion(){


    for(int o=0;0<tokens.size()/2;o++){
        convertirNotas();
        Nota x(vec2[o],vec2[o+1]);
        //x.getsonido();
        Nota y= x;
        Nota* ptr=&y;
        vec3.push_back(ptr);

    }



}


void Partitura::Print(){
    convertirNotas();
    for(int u=0; u<=vec3.size();u++){
        cout<<vec3[u]<<endl;
    }
}


void Partitura::convertirNotas(){


    for(int f=0; f<=tokens.size();f++){

        if(tokens[f]=="Do1"){
            vec2.push_back(Do1);
        }
        if(tokens[f]=="Reb1"){
            vec2.push_back(Reb1);
        }
        if(tokens[f]=="Re1"){
            vec2.push_back(Re1);
        }
        if(tokens[f]=="Mib1"){
            vec2.push_back(Mib1);
        }
        if(tokens[f]=="Mi1"){
            vec2.push_back(Mi1);
        }
        if(tokens[f]=="Fa1"){
            vec2.push_back(Fa1);
        }
        if(tokens[f]=="Solb1"){
            vec2.push_back(Solb1);
        }
        if(tokens[f]=="Sol1"){
            vec2.push_back(Sol1);
        }
        if(tokens[f]=="Lab1"){
            vec2.push_back(Lab1);
        }
        if(tokens[f]=="La1"){
            vec2.push_back(La1);
        }
        if(tokens[f]=="Sib1"){
            vec2.push_back(Sib1);
        }
        if(tokens[f]=="Si1"){
            vec2.push_back(Si1);
        }






        if(tokens[f]=="Do2"){
            vec2.push_back(Do2);
        }
        if(tokens[f]=="Reb2"){
            vec2.push_back(Reb2);
        }
        if(tokens[f]=="Re2"){
            vec2.push_back(Re2);
        }
        if(tokens[f]=="Mib2"){
            vec2.push_back(Mib2);
        }
        if(tokens[f]=="Mi2"){
            vec2.push_back(Mi2);
        }
        if(tokens[f]=="Fa2"){
            vec2.push_back(Fa2);
        }
        if(tokens[f]=="Solb2"){
            vec2.push_back(Solb2);
        }
        if(tokens[f]=="Sol2"){
            vec2.push_back(Sol2);
        }
        if(tokens[f]=="Lab2"){
            vec2.push_back(Lab2);
        }
        if(tokens[f]=="La2"){
            vec2.push_back(La2);
        }
        if(tokens[f]=="Sib2"){
            vec2.push_back(Sib2);
        }
        if(tokens[f]=="S21"){
            vec2.push_back(Si2);
        }




        if(tokens[f]=="Do3"){
            vec2.push_back(Do3);
        }
        



        if(tokens[f]=="negra"){
            vec2.push_back(700);
        }
        if(tokens[f]=="blanca"){
            vec2.push_back(1400);
        }
        if(tokens[f]=="corchea"){
            vec2.push_back(350);
        }




    }


}

  



void Partitura::getSonido(){

    for( int p=0;p<=vec3.size();p++){  
        vec3[p]->getsonido();
    }
}    


*/

