#include <iostream>
#include "Estructura.h"
#include <string> 
#include "Sonido.h"
#include "Do1.h"
#include <windows.h>

using namespace std;






Estructuras::Estructuras(string* notas,int tam){
    this->notas=notas;
    this->tam=tam;

    Do=0;
    Reb=1;
    Re=2;
    Mib=3;
    Mi=4;
    Fa=5;
    Solb=6;
    Sol=7;
    Lab=8;
    La=9;
    Sib=10;
    Si=11;





    Do1 Do1;
    Reb1 Reb1;
    Re1 Re1;
    Mib1 Mib1;
    Mi1 Mi1;
    Fa1 Fa1;
    Solb1 Solb1;
    Sol1 Sol1;
    Lab1 Lab1;
    La1 La1;
    Sib1 Sib1;
    Si1 Si1;






    Do2 Do2;
    Reb2 Reb2;
    Re2 Re2;
    Mib2 Mib2;
    Mi2 Mi2;
    Fa2 Fa2;
    Solb2 Solb2;
    Sol2 Sol2;
    Lab2 Lab2;
    La2 La2;
    Sib2 Sib2;
    Si2 Si2;




    Sonido*pun1=&Do1;
    Sonido*pun2=&Reb1; 
    Sonido*pun3=&Re1;
    Sonido*pun4=&Mib1; 
    Sonido*pun5=&Mi1;
    Sonido*pun6=&Fa1; 
    Sonido*pun7=&Solb1; 
    Sonido*pun8=&Sol1; 
    Sonido*pun9=&Lab1; 
    Sonido*pun10=&La1;
    Sonido*pun11=&Sib1; 
    Sonido*pun12=&Si1;



    

    Sonido*pun13=&Do2;
    Sonido*pun14=&Reb2; 
    Sonido*pun15=&Re2; 
    Sonido*pun16=&Mib2; 
    Sonido*pun17=&Mi2;
    Sonido*pun18=&Fa2; 
    Sonido*pun19=&Solb2; 
    Sonido*pun20=&Sol2; 
    Sonido*pun21=&Lab2; 
    Sonido*pun22=&La2;
    Sonido*pun23=&Sib2; 
    Sonido*pun24=&Si2;





    

    vecP.push_back(pun1);
    vecP.push_back(pun2);
    vecP.push_back(pun3);
    vecP.push_back(pun4);
    vecP.push_back(pun5);
    vecP.push_back(pun7);
    vecP.push_back(pun8);
    vecP.push_back(pun9);
    vecP.push_back(pun10);
    vecP.push_back(pun11);
    vecP.push_back(pun12);
    vecP.push_back(pun13);
    vecP.push_back(pun14);
    vecP.push_back(pun15);
    vecP.push_back(pun16);
    vecP.push_back(pun17);
    vecP.push_back(pun18);
    vecP.push_back(pun19);
    vecP.push_back(pun20);
    vecP.push_back(pun21);
    vecP.push_back(pun22);
    vecP.push_back(pun23);
    vecP.push_back(pun24);














    
}


/*void Estructuras::print(){
  cout<<"Hola"<<endl;
}
*/

void Estructuras::tono(int &x){
   x+=2;
  
}
void Estructuras::semitono(int &y){
   y+=1;
}

void Estructuras::derecha(int &x){
      if((x+1)==12)
        x=-1;
      if((x+2)==12)
        x=-2;
      if((x+2)==13)
        x=-2;
}


