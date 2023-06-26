#include "Estructura.h"
#include "EscalaMayor.h"
#include <iostream>
#include <windows.h>
#include "Sonido.h"
#include "Do1.h"
#include <vector>
#include "Partitura.h"


using namespace std;









int main(){




  int Do=0;
  int Reb=1;
  int Re=2;
  int Mib=3;
  int Mi=4;
  int Fa=5;
  int Solb=6;
  int Sol=7;
  int Lab=8;
  int La=9;
  int Sib=10;
  int Si=11;


    string nota[12]={"Do","Do#/Reb","Re","Re#/Mib","Mi","Fa","Fa#/Solb","Sol","Sol#/Lab","La","La#/Sib","Si"};


    
    

    //Sonido*pun12=&g;
    //Sonido*pun11=&f;

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
    Do3 Do3;




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
    Sonido*pun25=&Do3;





    vector<Sonido*> vec;

    vec.push_back(pun1);
    vec.push_back(pun2);
    vec.push_back(pun3);
    vec.push_back(pun4);
    vec.push_back(pun5);
    vec.push_back(pun6);
    vec.push_back(pun7);
    vec.push_back(pun8);
    vec.push_back(pun9);
    vec.push_back(pun10);
    vec.push_back(pun11);
    vec.push_back(pun12);
    vec.push_back(pun13);
    vec.push_back(pun14);
    vec.push_back(pun15);
    vec.push_back(pun16);
    vec.push_back(pun17);
    vec.push_back(pun18);
    vec.push_back(pun19);
    vec.push_back(pun20);
    vec.push_back(pun21);
    vec.push_back(pun22);
    vec.push_back(pun23);
    vec.push_back(pun24);
    vec.push_back(pun25);

    


    EscalaMayor Do_(nota,12,Do);


    Do_.print();
    Do_.printvec();
    Do_.printSonido(vec);




    Partitura x(28);
    x.verificar();

    //x.mostrar();


    x.getsonido();


  

 










}