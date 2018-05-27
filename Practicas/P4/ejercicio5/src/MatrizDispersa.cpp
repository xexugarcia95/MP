#include "MatrizDispersa.h"

MatrizDispersa::Matriz()
{
  this->nfilas = 0;
  this->ncolumnas = 0;
  this->valores = 0;
  this->numeroValores = 0;
}

MatrizDispersa::MatrizDispersa(int n,int c,Valor *v,int num)
{
  this->nfilas = n;
  this->ncolumnas = c;
  this->numeroValores = num;
  this->valores = v;
}

MatrizDispersa::MatrizDispersa(const MatrizDispersa& m)
{

}

MatrizDispersa::~MatrizDispersa()
{

}

MastMatrizDispersa::* operator+(const MatrizDispersa& m)
{

}
