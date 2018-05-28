#ifndef _MATRIZDISPERSA_H__
#define _MATRIZDISPERSA_H__

#include "Valor.h"
#include <iostream>
using namespace std;

class MatrizDispersa
{
private:
  int nfilas;
  int ncolumnas;
  Valor *valores;
  int numeroValores;
public:
  MatrizDispersa();
  MatrizDispersa(int n,int c,Valor *v,int num);
  MatrizDispersa(const MatrizDispersa& m);
  MatrizDispersa(int* f,int* col,double* val,int num);
  ~MatrizDispersa();

  void insertar(const Valor& v);

  MatrizDispersa* operator+(const MatrizDispersa& m);
  friend ostream& operator<<(ostream& os,const MatrizDispersa& m);

};

inline ostream& operator<<(ostream& os,const MatrizDispersa& m)
{
  os << "Filas: " << m.nfilas << ", Columnas: " << m.ncolumnas << endl;
  os << "Valores:\n";
  for(int i=0;i<m.numeroValores;i++){
    os << m.valores[i] << endl;
  }
  os << "Numero de Valores: " << m.numeroValores << endl;

  return os;
}

#endif
