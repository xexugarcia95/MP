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

  friend ostream& operator<<(ostream& os,const Lista& l);

};

inline ostream& operator<<(ostream& os,const Lista& l)
{
  //--------ESCRIBIR CODIGO---------
}

#endif
