#include "utilidades.h"

void imprimirArray(int array[],int tam)
{
  for(int i=0;i<tam;i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;
}

void obtenerMayorSecuenciaMonotonaCreciente(int array1[],int tam1,int array2[],int &tam2)
{
  int aux = 0;
  int primero = 0;
  int tam = 0;
  for(int i=0;i<tam1;i++)
  {
    aux++;
    if(array1[i+1]<array1[i])
    {
     if(aux> tam){
      for(int j=primero,k=0;j<i+1;j++,k++)
      {
        array2[k] = array1[j];
      }
      tam = aux;
     }
      aux = 0;
      primero = i+1;
    }
  }

  tam2 = tam;
}
