#ifndef _BIGINT_H__
#define _BIGINT_H__
#include <iostream>

using namespace std;


class BigInt
{
private:
  int TAM;
  int util;
  int *entero;


public:

BigInt();
BigInt(int valor);
BigInt(const BigInt& b);
~BigInt();

void resize();
BigInt* sumaBig(BigInt *b1,BigInt *b2);
void insertar(int valor);
BigInt& operator=(const BigInt& b);

friend ostream& operator<<(ostream& os,const BigInt& b);

};

inline ostream& operator<<(ostream& os,const BigInt& b)
{
  for(int i=0;i<b.util;i++)
  {
    os << b.entero[i] << " ";
  }
  os << endl;
  return os;
}

#endif
