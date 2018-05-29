#ifndef _MENU_H__
#define _MENU_H__

#include <iostream>
#include "utilidades.h"
using namespace std;

class Menu
{
private:
  char *titulo;
  char **opc;
  int nopc;

public:
  Menu();
  Menu(char *t,char **op,int n);
  Menu(const Menu& m);
  ~Menu();

  void setTitulo(char *t);
  int getNumeroOpciones();
  void agregarOpcion(char *p);

  Menu& operator=(const Menu& m);
  friend ostream& operator<<(ostream& os,const Menu& m);

};

inline ostream& operator<<(ostream& os,const Menu& m)
{
  for(int i=0;m.titulo[i]!='\0';i++) os << m.titulo[i];
  os << endl;
  for(int i=0;i<m.nopc;i++)
  {
    for(int j=0;m.opc[i][j]!='\0';j++)
    {
      os << m.opc[i][j];
    }
    os << endl;
  }
  os << endl;
  return os;
}

#endif
