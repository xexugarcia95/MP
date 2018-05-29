#ifndef _MENU_H__
#define _MENU_H__

#include <iostream>
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

  friend ostream& operator<<(ostream& os,const Menu& m);

};

inline ostream& operator<<(ostream& os,const Menu& m)
{
  //---
}

#endif
