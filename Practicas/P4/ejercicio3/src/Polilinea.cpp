#include "Polilinea.h"


Polilinea::Polilinea()
{
  this->p = 0;
  this->num = 0;
  this->TAM = 1;
}

Polilinea::Polilinea(const Punto &p)
{
  this->num = 1;
  this->p = new Punto[TAM];
  this->p[0] = p;
}

Polilinea::Polilinea(const Polilinea &p)
{
  this->num = p.num;
  this->TAM = p.TAM;
  this->p = new Punto[this->TAM];
  for(int i=0;i<TAM;i++)
  {
    this->p[i] = p.p[i];
  }
}

Polilinea::~Polilinea()
{
  delete [] this->p;
  this->num = 0;
}

void Polilinea::agregarPunto(Punto *p)
{

}

/*Polilinea Polilinea::operator+(const Polilinea& a,const Polilinea& b)
{

}*/
