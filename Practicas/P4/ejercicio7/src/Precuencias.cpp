#include "Precuencias.h"

Precuencias::Precuencias()
{
  this->parejas = 0;
  this->npares = 0;
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

}

bool Precuencias::operator==(const Precuencias& p1,const Precuencias& p2)
{

}
bool Precuencias::operator!=(const Precuencias& p1,const Precuencias& p2)
{
  return !(p1==p2);
}
