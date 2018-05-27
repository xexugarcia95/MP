#ifndef _VALOR_H__
#define _VALOR_H__

#include <iostream>
using namespace std;

class Valor
{
private:
  int fil;
  int col;
  double val;

public:
  Valor();
  Valor(int f,int c,double v);
  Valor(const Valor& v);
  ~Valor();

  int getFil();
  int getCol();
  double getVal();

  void setFil(int f);
  void setCol(int c);
  void setVal(double v);

  friend ostream& operator<<(ostream& os,const Valor& v);
};

inline ostream& operator<<(ostream& os,const Valor& v)
{
  os << "Fila: " << v.fil << ", Columna: " << v.col << ", Valor: " << v.val << endl;

  return os;
}

#endif
