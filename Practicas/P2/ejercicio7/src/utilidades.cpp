#include "utilidades.h"


void descomponer(int numero, int factores[],int &numeroFactores)
{
  int val;
  if(numeroFactores!=0)
  {
     val = factores[numeroFactores-1];
  }else{
    val = 2;
  }

  if(numero>1)
  {
    if(numero%val!=0)
    {
     while(numero%val!=0 )
     {
       val++;
     }
    }

    index(factores,numeroFactores,val);
    numeroFactores++;
    descomponer(numero/val,factores,numeroFactores);

  }
  index(factores,numeroFactores,numero);
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
