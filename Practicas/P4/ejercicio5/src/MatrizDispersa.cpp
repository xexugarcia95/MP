#include "MatrizDispersa.h"
#include <stdio.h>

MatrizDispersa::MatrizDispersa()
{
  this->nfilas = 0;
  this->ncolumnas = 0;
  this->valores = 0;
  this->numeroValores = 0;
}

MatrizDispersa::MatrizDispersa(int n,int c,Valor *v,int num)
{
  nfilas = n;
  ncolumnas = c;
  numeroValores = num;
  valores = v;
}

MatrizDispersa::MatrizDispersa(const MatrizDispersa& m)
{
  nfilas = m.nfilas;
  ncolumnas = m.ncolumnas;
  numeroValores = m.numeroValores;
  valores = m.valores;
}

MatrizDispersa::MatrizDispersa(int *f,int *col,Valor *val)
{
  //......
}

MatrizDispersa::~MatrizDispersa()
{
  delete valores;
  nfilas = 0;
  ncolumnas = 0;
  valores = 0;
}

int MatrizDispersa::getTam()
{
  Valor *val = &(valores[0]);
  int len = sizeof(val)/sizeof(Valor);

  return len;
}

MatrizDispersa* MatrizDispersa::operator+(const MatrizDispersa& m)
{
  for(int i=0;i<numeroValores;i++)
  {
    for(int j=0;j<m.numeroValores;j++)
    {
      if(valores[i].getFil() == m.valores[j].getFil() && valores[i].getCol() == m.valores[j].getCol())
      {
        cout << "El fil y col iguales. Aplicando suma...\n";
        valores[i].setVal(valores[i].getVal()+m.valores[i].getVal());
      }
    }
  }

  return this;
}
