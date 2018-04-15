#include "utilidades.h"
#include <iostream>

using namespace std;

void imprimir(int *secuencia, int util)
{
  for(int i=0;i<util;i++)
  {
    cout << secuencia[i] << " ";
  }

  cout << endl;
}

void imprimir(int **secuencia, int util)
{
    for(int i=0;i<util;i++)
    {
      cout << *secuencia[i] << " ";
    }
    cout << endl;
}

void ordenar(int *vector,int util)
{
  for(int i=0;i<util-1;i++)
  {
    int minimo = i;
    for(int j=i+1;j<util;j++)
    {
      if(vector[j]<vector[minimo]) minimo = j;
    }
    if(i!=minimo)
    {
      int aux = vector[i];
      vector[i] = vector[minimo];
      vector[minimo] = aux;
    }
  }
}

void ordenarPunteros(int *array, int **parray, int util)
{
  int arr[util];
  for(int i=0;i<util;i++)
  {
    arr[i] = array[i];
  }
  ordenar(arr,util);
  for(int i=0;i<util;i++)
  {
    for(int j=0;j<util  ;j++)
    {
      if(arr[i]==array[j])
      {
        parray[i] = &array[j];

      }
    }
  }


}
