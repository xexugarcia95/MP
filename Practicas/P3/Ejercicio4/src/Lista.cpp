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
  Celda *cell;
  cell = contenido;
  cell = cell->obtenerSiguiente();
  Celda *celda = new Celda(dato);
  celda->asignarSiguiente(cell);
  contenido->asignarSiguiente(celda);
}

void Lista::imprimirInvertido()
{
  int valor = obtenerLongitud();
  Celda *cell;
  cell = contenido;
  cell = cell->obtenerSiguiente();
  while(valor>=1)
  {
    int j=1;
    while(j!=valor)
    {
      cell = cell->obtenerSiguiente();
      j++;
    }
    cell->mostrar();
    cell = contenido;
    cell = cell->obtenerSiguiente();
    j=1;
    valor--;
  }
}

void Lista::eliminarFinal()
{
  Celda *cell;
  cell = contenido;

  cell = cell->obtenerSiguiente();
  while(cell->obtenerSiguiente()->obtenerSiguiente() != 0 )
  {
    cell = cell->obtenerSiguiente();
  }

  cell->anularSiguiente();


}

Celda *Lista::obtener(int posicion)
{
    Celda *cell;
    cell = contenido;
    cell = cell->obtenerSiguiente();
    int i=0;
    while (i<posicion) {
      cell = cell->obtenerSiguiente();
      i++;
    }

    return cell;
}

bool Lista::agregarPosicion(int indice, double dato)
{
  int valor = obtenerLongitud();
  if(indice < valor)
  {
    Celda *cell;
    cell = contenido;
    cell = cell->obtenerSiguiente();
    int i=0;
    while(i!=indice-1)
    {
      cell = cell->obtenerSiguiente();
      i++;
    }

      Celda *aux= new Celda(dato);
      aux->asignarSiguiente(cell->obtenerSiguiente());
      cell->asignarSiguiente(aux);

      return true;
  }else
  {
    return false;
  }

}

void Lista::liberarEspacio()
{
  while(contenido!=0)
  {
    Celda *aux = contenido;
    contenido = aux->obtenerSiguiente();
    delete aux;
  }
}
