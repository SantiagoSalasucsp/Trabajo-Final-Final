#include <iostream>
#include <string>
#include "EscalaMayor.h"
#include "Do1.h"
#include "Sonido.h"
#include <windows.h>


EscalaMayor::EscalaMayor(string* notas, int tam, int pos): Estructuras(notas,tam){
    this->pos=pos;
    u=pos;
      vec1.push_back(u);
      u+=2;
      vec1.push_back(u);
      u+=2;
      vec1.push_back(u);
      u+=1;
      vec1.push_back(u);
      u+=2;
      vec1.push_back(u);
      u+=2;
      vec1.push_back(u);
      u+=2;
      vec1.push_back(u);
      u+=1;
      vec1.push_back(u);
}

void EscalaMayor::print(){
  
  int k=pos;
  cout<<"___Escala Mayor___"<<endl;
  cout<<notas[k]<<endl;


  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;

  derecha(k);
  semitono(k);
  cout<<notas[k]<<endl;
  
  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  

  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;

  derecha(k);
  tono(k);
  cout<<notas[k]<<endl;
  

  derecha(k);
  semitono(k);
  cout<<notas[pos]<<endl;
  
  cout<<"__________________"<<endl;

};


void EscalaMayor::printvec(){
  for(int x=0;x<vec1.size();x++){
    cout<<vec1[x]<<endl;
  }
}


void EscalaMayor::printSonido(vector<Sonido*> f){

  for(int x=0;x<vec1.size();x++){
    int j=vec1[x];
    f[j]->getSonido();
  }

  
}







