#ifndef _BIGINT_H__
#define _BIGINT_H__
#include <string>
#include <iostream>
using namespace std;


class BigInt
{
private:

  int *entero;
  int elementoMaximo;

public:

BigInt();
BigInt(int valor);
BigInt(const BigInt& b);
~BigInt();

int* sumaBig(int *b1,int *b2);

friend ostream& operator<<(ostream& os,const BigInt& b);

};

ostream& operator<<(ostream& os,const BigInt& b)
{
  for(int i=b.elementoMaximo-1;i>=0;i--) os << b.entero[i];
  os << endl;
  return os;
}

#endif
