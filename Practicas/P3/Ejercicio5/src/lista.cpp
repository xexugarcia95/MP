#include "lista.h"

int Lista::longitud()
{
  Celda *cell;
  cell = primero;
  cell = cell->siguiente;
  int i=1;
  while(cell->siguiente != 0)
  {
    i++;
    cell = cell->siguiente;
  }

  return i;
}

void Lista::agregarElemento(double valor)
{
  if(primero == 0) primero = new Celda(0);

  Celda *cell;
  cell = primero;
  cell = cell->siguiente;
  Celda *celda = new Celda(valor);
  celda->siguiente = cell;
  primero->siguiente = celda;
}

void Lista::imprimir()
{
  Celda *cell;
  cell = primero;
  cell = cell->siguiente;
  while(cell != 0)
  {
    cout << cell->valor << " ";
    cell = cell->siguiente;
  }
    cout << "\n";
}

Lista *Lista::particionar(int tam,int &util)
{
  int valor = longitud();
  int x = (valor/tam) + (valor%tam);
  Lista *lista = new Lista[x];
  Celda *cell = primero;
  cell = cell->siguiente;
  int v = 0;
  int indice = 0;
  Celda *aux;
  lista[indice].primero = new Celda(0);
  aux = lista[indice].primero;
  while(cell != 0)
  {
    if(v==tam)
    {
      indice++;
      v = 0;
      lista[indice].primero = new Celda(0);
      aux = lista[indice].primero;
    }
      Celda *c = new Celda(cell->valor);
      aux->siguiente = c;
      aux = aux->siguiente;
      cell = cell->siguiente;
      v++;
  }

  delete primero;
  util = x;
  return lista;
}
