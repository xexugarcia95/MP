#include "Punto.h"

Punto::Punto()
{
  x = y = 0;
}

Punto::Punto(int i,int j)
{
  this->x = i;
  this->y = j;
}

Punto::Punto(const Punto& p)
{
  this->x = p.x;
  this->y = p.y;
}
