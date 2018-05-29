#include "Precuencias.h"
#include <string.h>
#include <stdlib.h>

Precuencias::Precuencias()
{
  this->parejas = 0;
  this->npares = 0;
}

Precuencias::Precuencias(const Pareja& p)
{
  npares = 1;
  parejas = new Pareja[npares];
  parejas[0] = p;
}

Precuencias::Precuencias(const Precuencias& p)
{
  npares = p.npares;
  parejas = new Pareja[npares];
  for(int i=0;i<npares;i++)
  {
    parejas[i] = p.parejas[i];
  }
}

Precuencias::~Precuencias()
{
  delete [] parejas;
  npares = 0;
}

void Precuencias::agregarValor(int val)
{
  string x = std::to_string(val);
  for(int i=0;x[i]!='\0';i++)
  {
    bool igual = false;
    int a = x[i] - '0';
    for(int j=0;j<npares;j++)
    {
      if(a== parejas[j].getDato())
      {
        int va = parejas[j].getNveces();
        va++;
        parejas[j].setNveces(va);
        igual = true;
      }
    }
    if(!igual)
    {
      npares++;
      Pareja *pa = new Pareja[npares];
      for(int i=0;i<npares-1;i++)
      {
        pa[i] = parejas[i];
      }
      pa[npares-1] = a;
      delete [] parejas;
      parejas = new Pareja[npares];
      for(int i=0;i<npares;i++)
      {
        parejas[i] = pa[i];
      }

      
    }
  }
}

bool Precuencias::operator==(const Precuencias& p)
{
  bool igual = true;
  if(npares != p.npares) igual = false;
  else
  {
    for(int i=0;i<npares && igual;i++)
    {
      if(parejas[i]!=p.parejas[i]) igual = false;
    }
  }

  return igual;
}
bool Precuencias::operator!=(const Precuencias& p)
{
  return !(*this==p);
}
