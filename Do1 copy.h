#ifndef DO1__H
#define DO1__H
#include "Sonido.h"
#include <windows.h>
#include <iostream>

class Do1: public Sonido {
  public:

    Do1();
     
    void getSonido(){
       Beep(523,1400); 
      }
};

class Reb1: public Sonido {
  public:
    Reb1();
    void getSonido(){
      Beep(554,700);
    }
};

class Re1: public Sonido {
  public:
    Re1();
    void getSonido(){
      Beep(587,1400);
    }
};

class Mib1: public Sonido {
  public:
    Mib1();
    void getSonido(){
      Beep(622,700);
    }
};

class Mi1: public Sonido {
  public:
    Mi1();
    void getSonido(){
      Beep(659,1400);
    }
};

class Fa1: public Sonido {
  public:
    Fa1();
    void getSonido(){
      Beep(698,1400);
    }
};

class Solb1: public Sonido {
  public:
    Solb1();
    void getSonido(){
      Beep(739,700);
    }
};

class Sol1: public Sonido {
  public:
    Sol1();
    void getSonido(){
      Beep(783,1400);
    }
};

class Lab1: public Sonido {
  public:
    Lab1();
    void getSonido(){
      Beep(830,700);
    }
};

class La1: public Sonido {
  public:
    La1();
    void getSonido(){
      Beep(880,1400);
    }
};

class Sib1: public Sonido {
  public:
    Sib1();
    void getSonido(){
      Beep(932,700);
    }
};

class Si1: public Sonido {
  public:
    Si1();
    void getSonido(){
      Beep(987,1400);
    }
};









class Do2: public Sonido {
  public:
     Do2();
    void getSonido(){
       Beep(1046,1400); 
      }
};

class Reb2: public Sonido {
  public:
    Reb2();
    void getSonido(){
      Beep(1108,700);
    }
};

class Re2: public Sonido {
  public:
    Re2();
    void getSonido(){
      Beep(1174,700);
    }
};

class Mib2: public Sonido {
  public:
    Mib2();
    void getSonido(){
      Beep(!244,700);
    }
};

class Mi2: public Sonido { // se queda
  public:
    Mi2();
    void getSonido(){
      Beep(1318,700);
    }
};

class Fa2: public Sonido {
  public:
    Fa2();
    void getSonido(){
      Beep(1396,700);
    }
};

class Solb2: public Sonido {
  public:
    Solb2();
    void getSonido(){
      Beep(1479,700);
    }
};

class Sol2: public Sonido {
  public:
    Sol2();
    void getSonido(){
      Beep(1567,700);
    }
};

class Lab2: public Sonido {
  public:
    Lab2();
    void getSonido(){
      Beep(1661,700);
    }
};

class La2: public Sonido {
  public:
    La2();
    void getSonido(){
      Beep(1760,700);
    }
};

class Sib2: public Sonido {
  public:
    Sib2();
    void getSonido(){
      Beep(1854,700);
    }
};

class Si2: public Sonido {
  public:
    Si2();
    void getSonido(){
      Beep(1975,700);
    }
};

class Do3: public Sonido {
  public:
    Do3();
    void getSonido(){
      Beep(2093,700);
    }
};



#endif
