#ifndef _POLILINEA_H__
#define _POLILINEA_H__

#include <iostream>
#include "Punto.h"
using namespace std;

class Polilinea
{
private:
  Punto *p; //array de Punto
  int num; //numero de puntos
  int TAM; //tamaño total del array de puntos
public:

  Polilinea();
  Polilinea(const Punto &pu);
  Polilinea(const Polilinea &po);
  ~Polilinea();

  void resize();
  void agregarPunto(const Punto& pu);
  Polilinea& operator+(const Polilinea& b);

  friend ostream& operator<<(ostream& os,const Polilinea& p);

};

inline ostream& operator<<(ostream& os,const Polilinea& p)
{
  os << "Puntos:\n";
  for(int i=0;i<p.num;i++)
  {
    cout << p.p[i] << endl;
  }

  os << "nº puntos: " << p.num << endl;

  return os;
};

#endif
