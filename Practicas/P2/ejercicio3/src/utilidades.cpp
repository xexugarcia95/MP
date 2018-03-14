#include "utilidades.h"

void imprimirArray(int array[],int tam)
{
  for(int i=0;i<tam;i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;
}

void obtenerMayorSecuenciaMonotonaCreciente(int array1[],int tam1,int array2[],int tam2)
{
  int ini;
  int fin;
  int tam = 0;
  int aux;
  bool menor;
  for(int i=0;i<tam1;i++)
  {
    menor = false;
    aux = 1;
    ini = i;
    fin = i;
    for(int j=i+1;j<tam1 && !menor;j++)
    {
      if(array1[j]<array1[j-1])
      {
        menor = true;
      }else{
        fin++;
        aux++;
      }
    }
    if(aux>tam)
    {
      for(int k=ini,z=0;k<fin;k++,z++)
      {
        array2[z] = array1[k];
      }
      tam = aux;
    }
  }
  tam2 = tam;
}
