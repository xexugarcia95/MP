#include "Celda.h"


Celda::Celda()
{
  info = 0;
  sig = 0;
}

Celda::Celda(int inf)
{
  this->info = inf;
  sig = 0;
}

Celda::Celda(const Celda& c)
{
  this->info = c.info;
  this->sig = c.sig;
}

Celda::~Celda()
{
  delete [] sig;
  info = 0;

}

double Celda::getInfo()
{
  return info;
}

Celda* Celda::getCelda()
{
  return sig;
}

void Celda::asignarSiguiente(Celda *pCelda)
{
  sig = pCelda;
}

Celda& Celda::operator=(const Celda& c)
{
  if(this!=&c)
  {
    delete [] sig;
    info = c.info;
    sig = c.sig;
  }

  return *this;
}
