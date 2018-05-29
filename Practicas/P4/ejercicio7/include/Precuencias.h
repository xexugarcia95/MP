#ifndef _PRECUENCIAS_H__
#define _PRECUENCIAS_H__

#include <iostream>
#include "Pareja.h"

using namespace std;

class Precuencias
{
private:
  Pareja* parejas; //array de objetos de la clase pareja
  int npares; //numero de objetos almacenados en el array

public:
  Precuencias();
  Precuencias(const Precuencias& p);
  ~Precuencias();

  void agregarValor(int val);

  bool operator==(const Precuencias& p);
  bool operator!=(const Precuencias& p);
  friend ostream& operator<<(ostream& os,const Precuencias& p);

};

inline ostream& operator<<(ostream& os,const Precuencias& p)
{

}

#endif
