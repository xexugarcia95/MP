#ifndef _LISTA_H__
#define _LISTA_H__
#include <iostream>
#include "Celda.h"
using namespace std;

class Lista
{
private:
  Celda * contenido;
public:

  Lista();
  Lista(const Celda& c);
  Lista(const Lista& l);
  ~Lista();

  void insertar(Celda *pCelda);

  friend ostream& operator<<(ostream& os,const Lista& l);

};

inline ostream& operator<<(ostream& os,const Lista& l)
{
  Celda *li;
  li = l.contenido;

  os << "Celda inicial:\n";
  os << *li << endl;
  li = li->getCelda();
  while(li!=0)
  {
    os << *li << " ";
    li = li->getCelda();
  }

  return os;
}

#endif
