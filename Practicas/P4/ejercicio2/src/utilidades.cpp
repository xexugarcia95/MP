#include "utilidades.h"

BigInt* sumaBig(BigInt *b1,BigInt *b2)
{
  int v1 = b1->getUtil();
  int v2 = b2->getUtil();
  int val = (v1>v2) ? v1 : v2;
  BigInt *v = new BigInt(val*2);
  for(int i=0;i<val;i++)
  {
    int aux = b1->indice(i) + b2->indice(i);
    v->insercion(i,aux);
  }
  return v;
}
