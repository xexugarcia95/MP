#include "Pareja.h"

Pareja::Pareja()
{
  this->dato = 0;
  this->nveces = 0;
}

Pareja::Pareja(int d)
{
  dato = d;
  nveces = 0;
}

Pareja::Pareja(const Pareja& p)
{
  dato = p.dato;
  nveces = p.nveces;
}

Pareja::~Pareja()
{
  dato = nveces = 0;
}

int Pareja::getDato()
{
  return dato;
}

int Pareja::getNveces()
{
  return nveces;
}

void Pareja::setNveces(int n)
{
  nveces = n;
}

Pareja& Pareja::operator=(const Pareja& p)
{
    if(this!=&p)
    {
      dato = p.dato;
      nveces = p.nveces;
    }

    return *this;
}

bool Pareja::operator==(const Pareja& p)
{
  bool igual = true;
  if(dato!=p.dato || nveces!=p.nveces) igual = false;

  return igual;
}

bool Pareja::operator!=(const Pareja& p)
{
  return !(*this==p);
}
