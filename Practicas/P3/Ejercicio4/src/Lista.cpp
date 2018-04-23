#include "Lista.h"

Lista::Lista()
{
  this->contenido = new Celda(0);
}

void Lista::mostrar()
{
  Celda *cell;
  cell = contenido;
  cell = cell->obtenerSiguiente();
  while(cell != 0)
  {
    cell->mostrar();
    cell = cell->obtenerSiguiente();
  }

}

int Lista::obtenerLongitud()
{
  Celda *cell;
  cell = contenido;
  cell = cell->obtenerSiguiente();
  int i=1;
  while(cell->obtenerSiguiente() != 0)
  {
    i++;
    cell = cell->obtenerSiguiente();
  }

  return i;
}

void Lista::agregarFinal(double dato)
{
  Celda *cell;
  cell = contenido;

  while(cell->obtenerSiguiente() != 0)
  {
    cell = cell->obtenerSiguiente();
  }

  Celda *celda = new Celda(dato);
  cell->asignarSiguiente(celda);

}

void Lista::agregarInicio(double dato)
{

}

void Lista::imprimirInvertido()
{

}

void Lista::eliminarFinal()
{

}

Celda *Lista::obtener(int posicion)
{

}

bool Lista::agregarPosicion(int indice, double dato)
{

}

void Lista::liberarEspacio()
{

}
