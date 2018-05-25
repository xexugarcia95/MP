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

}

Lista::~Lista()
{

}
