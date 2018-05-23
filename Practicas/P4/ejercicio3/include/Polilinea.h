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
  Polilinea(const Punto &p);
  Polilinea(const Polilinea &p);
  ~Polilinea();

  void agregarPunto(Punto *p);
  //Polilinea operator+(const Polilinea& a,const Polilinea& b);

  friend ostream& operator<<(ostream& os,const Polilinea& p);

};

inline ostream& operator<<(ostream& os,const Polilinea& p)
{
  os << "Puntos: " << p.p << endl;
  os << "nº puntos: " << p.num << endl;

  return os;
};

#endif
