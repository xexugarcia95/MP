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
