#include "BigInt.h"
#include <string.h>

using namespace std;

BigInt::BigInt()
{
  TAM = 1;
  util = 0;
  entero = 0;
}

BigInt::BigInt(int valor)
{
  TAM=8;
  util=0;
  entero = new int[TAM];


  string x = std::to_string(valor);
  int tam=0;
  for(int i=0;x[i]!='\0';i++)
  {
    tam++;
  }

  while(TAM<=tam)
  {
    resize();
  }

  util = tam;
  for(int i=0;i<util;i++) entero[i] = 0;

  for(int i=util-1,j=0;i>=0;i--,j++)
  {
    char s = x[j];
    int e = s - '0';
    entero[i] = e;
  }

  cout << endl;

}

BigInt::BigInt(const BigInt& b)
{
  delete this;
  TAM = b.TAM;
  util = b.util;
  entero = new int[TAM];
  for(int i=0;i<util;i++)
  {
    entero[i] = b.entero[i];
  }
}

BigInt::~BigInt()
{
  delete [] entero;
  TAM = 0;
  util = 0;
}

void BigInt::resize()
{
    int va = TAM*2;
    int *v = new int[va];

    if(entero == 0) entero = new int[TAM];
    else
    {
      for(int i=0;i<util;i++)
      {
        v[i] = entero[i];
      }
      TAM = va;
      delete [] entero;

      entero = new int[TAM];
      for(int i=0;i<util;i++) entero[i] = v[i];
    }

}

BigInt* BigInt::sumaBig(BigInt *b1,BigInt *b2)
{
  int val = (b1->util>b2->util) ? b1->util : b2->util;
  BigInt *v = new BigInt(val);
  for(int i=0;i<val;i++)
  {
    v->entero[i] = b1->entero[i] + b2->entero[i];
  }
  return v;
}

void BigInt::insertar(int valor)
{
  if(util==TAM-1) resize();

  for(int i=util;i>=0;i--)
  {
    entero[i+1] = entero[i];
  }
  entero[0] = valor;
  util++;
}

BigInt& BigInt::operator=(const BigInt& b)
{
  if(this!=&b)
  {
    delete [] entero;
    TAM = b.TAM;
    util = b.util;
    entero = new int[TAM];
    for(int i=0;i<util;i++)
    {
      entero[i] = b.entero[i];
    }
  }
  return *this;
}
