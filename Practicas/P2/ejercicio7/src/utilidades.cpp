#include "utilidades.h"


void descomponer(int numero, int factores[],int &numeroFactores)
{
  int val = 2;
  if(numero>1)
  {
    if(numero%val!=0)
    {
     while(numero%val!=0 && val<(numero/2))
     {
       val++;
     }
    }

    index(factores,numeroFactores,val);
    numeroFactores++;
    descomponer(numero/val,factores,numeroFactores);

  }
}

void mostrar(int factores[], int numeroFactores)
{
  for(int i=0;i<numeroFactores;i++)
  {
    cout << factores[i] << " ";
  }
  cout << endl;
}

void index(int array[],int pos,int val)
{
  array[pos] = val;
}
