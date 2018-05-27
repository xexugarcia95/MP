#include "Lista.h"


Lista::Lista()
{
  this->contenido = new Celda(0);
}

Lista::Lista(const Celda& c)
{
  this->contenido = new Celda(0);
  Celda *ce = new Celda(c);
  Celda *cel;
  cel =  this->contenido;
  cel->asignarSiguiente(ce);

}

Lista::Lista(const Lista& l)
{
  this->contenido = new Celda(*l.contenido);

}

Lista::~Lista()
{
  while(contenido!=0)
  {
    Celda *aux = contenido;
    contenido = aux->getCelda();
    delete aux;
  }
}

void Lista::insertar(Celda *pCelda)
{
  Celda *ce = this->contenido;
  while(ce->getCelda()!=0) ce = ce->getCelda();

  ce->asignarSiguiente(pCelda);
}
