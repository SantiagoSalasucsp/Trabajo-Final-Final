#ifndef __ESTRUCTURAS_H__
#define __ESTRUCTURAS_H__
#include <vector>
#include <iostream>
#include <string>
#include "Do1.h"
#include "Sonido.h"
#include <vector>
#include <windows.h>
using namespace std;

class Estructuras{
public:


  Estructuras(string* ,int=12);
  //virtual ~Estructuras()=default;

  void derecha(int&);
  void tono (int&);
  void semitono(int&);

  virtual void print()=0;  //virtual pura 
  virtual void printSonido(vector<Sonido*>)=0;
  
protected:

    vector<Sonido*>vecP;

    string*notas;
  

  int tam=11;

  int Do;
  int Reb;
  int Re;
  int Mib;
  int Mi;
  int Fa;
  int Solb;
  int Sol;
  int Lab;
  int La;
  int Sib;
  int Si;




};
#endif