#include "Celda.h"


Celda::Celda(double info)
{
  this->info = info;
  this->sig = 0;
}

double Celda::obtenerInfo()
{
  return info;
}

Celda *Celda::obtenerSiguiente()
{
  return sig;
}

void Celda::anularSiguiente()
{
  sig = 0;
}

void Celda::asignarSiguiente(Celda *pCelda)
{
  sig = pCelda;
}

void Celda::mostrar()
{
  cout << info << " ";
}
