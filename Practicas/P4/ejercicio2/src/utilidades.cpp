#include "utilidades.h"

BigInt* sumaBig(BigInt *b1,BigInt *b2)
{
  int v1 = b1->getTam();
  int v2 = b2->getTam();
  int v3 = b1->getUtil();
  int v4 = b2->getUtil();
  BigInt *v;
  int t;
  int u;

  if(v1>v2)
  {
    t =v1;
    u=v3;
  }else if(v1==v2)
    {
      if(v3>v4)
      {
        t=v1;
        u=v3;
      }
      else
      {
        t=v2;
        u=v4;
      }
    }
  else
  {
      t = v2;
      u = v4;
  }

  v = new BigInt(t);
  v->setUtil(u);

  for(int i=0;i<=u;i++)
  {
    v->insercion(i,b1->indice(i));
  }
  for(int i=0;i<=v4;i++)
  {
    v->insercion(i,v->indice(i)+b2->indice(i));
  }

  return v;
}
