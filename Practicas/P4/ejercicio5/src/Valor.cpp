#include "Valor.h"

Valor::Valor()
{
  fil = col = 0;
  val = 0.0;
}

Valor::Valor(int f,int c,double v)
{
  this->fil = f;
  this->col = c;
  this->val = v;
}

Valor::Valor(const Valor& v)
{
  this->fil = v.fil;
  this->col = v.col;
  this->val = v.val;
}

Valor::~Valor()
{
  fil = 0;
  col = 0;
  val = 0.0;
}

int Valor::getFil()
{
  return fil;
}

int Valor::getCol()
{
  return col;
}

double Valor::getVal()
{
  return val;
}

void Valor::setFil(int f)
{
  this->fil = f;
}

void Valor::setCol(int c)
{
  this->col = c;
}

void Valor::setVal(double v)
{
  this->val = v;
}

Valor& Valor::operator=(const Valor& v)
{
  if(this!=&v)
  {
    this->fil = v.fil;
    this->col = v.col;
    this->val = v.val;
  }

  return *this;
}
