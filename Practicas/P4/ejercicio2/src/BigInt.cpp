#include "BigInt.h"
#include <cstdlib>

BigInt::BigInt()
{
  entero = 0;
  elementoMaximo = 0;
}

BigInt::BigInt(int valor)
{
  int aux = valor;
  int cont =1;
  for(int i=valor;i!=0;i/=10) cont++;

  char cadena[cont];
  itoa(aux,cadena,10);
  elementoMaximo = cont;
  entero = new int[elementoMaximo];

  for(int i=0;i<elementoMaximo;i++)
  {
    entero[i] = cadena[i];
  }
}

BigInt::BigInt(const BigInt& b)
{
  elementoMaximo = b.elementoMaximo;
  entero = new int[elementoMaximo];
  for(int i=0;i<elementoMaximo;i++)
  {
    entero[i] = b.entero[i];
  }
}
BigInt::~BigInt()
{

}

int* BigInt::sumaBig(int *b1,int *b2)
{


}
