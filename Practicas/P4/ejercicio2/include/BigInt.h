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
void insertar(int valor);
int getUtil();
void insercion(int i,int valor);
int indice(int i);
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
