#include "Polilinea.h"


Polilinea::Polilinea()
{
  this->p = 0;
  this->num = 0;
  this->TAM = 1;
}

Polilinea::Polilinea(const Punto &pu)
{
  this->num = 1;
  this->TAM = 2;
  this->p = new Punto[TAM];
  this->p[0] = pu;

  resize();
}

Polilinea::Polilinea(const Polilinea &po)
{
  this->num = po.num;
  this->TAM = po.TAM;
  this->p = new Punto[this->TAM];
  for(int i=0;i<TAM;i++)
  {
    this->p[i] = po.p[i];
  }
}

Polilinea::~Polilinea()
{
  delete [] this->p;
  this->num = 0;
}

void Polilinea::resize()
{
  int va = 2*TAM;
  Punto *pu = new Punto[va];

  if(p==0)
  {
    p = new Punto[va];
    TAM = va;
  }else
  {
      for(int i=0;i<num;i++)
      {
        pu[i] = p[i];
      }

      delete p;

      p = new Punto[TAM];
      for(int i=0;i<num;i++) p[i] = pu[i];
  }

}

void Polilinea::agregarPunto(const Punto& pu)
{
  if(num==TAM-1) resize();

  this->p[num] = pu;
  num++;
}

Polilinea& Polilinea::operator+=(const Polilinea& b)
{
  for(int i=0;i<b.num;i++) this->agregarPunto(b.p[i]);

  return *this;
}
