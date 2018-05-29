#include "Pareja.h"

Pareja::Pareja()
{
  this->dato = 0;
  this->nveces = 0;
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
