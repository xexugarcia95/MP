#include "Menu.h"


Menu::Menu()
{
  titulo = 0;
  opc = 0;
  nopc = 0;
}
Menu::Menu(char *t,char **op,int n)
{
  titulo = t;
  opc = op;
  nopc = n;
}

Menu::Menu(const Menu& m)
{
  titulo = m.titulo;
  opc = m.opc;
  nopc = m.nopc;
}

Menu::~Menu()
{
  delete [] titulo;
  for(int i=0;i<nopc;i++) delete [] opc[i];
  delete [] opc;
  nopc = 0;
}


void Menu::setTitulo(char *t)
{
  titulo = t;
}

int Menu::getNumeroOpciones()
{
  return nopc;
}

void Menu::agregarOpcion(char *p)
{

  char **v = new char*[nopc+1];
  for(int i=0;i<nopc;i++)
  {

    v[i] = new char[getTam(opc[i])];
    v[i] = opc[i];
  }

  v[nopc] = new char[getTam(p)];
  v[nopc] = p;

  opc = v;
  nopc++;
}

Menu& Menu::operator=(const Menu& m)
{
  if(this!=&m)
  {
    delete [] titulo;
    for(int i=0;i<nopc;i++) delete [] opc[i];
    delete [] opc;
    nopc = 0;

    titulo = m.titulo;
    opc = m.opc;
    nopc = m.nopc;
  }

  return *this;
}
