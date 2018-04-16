#include "utilidades.h"

int combinarSuma(Valor array1[],int tam1,Valor array2[],int tam2,Valor resultado[])
{
  int util = tam1 + tam2;

  for(int i=0;i<tam1;i++)
  {
    resultado[i] = array1[i];
  }

  for(int i=tam1;i<tam1+tam2;i++)
  {
    resultado[i]=array2[i-tam1];
  }

  for(int i=0;i<util;i++)
  {
    for(int j=i+1;j<util;j++)
    {
      if((resultado[j].fila == resultado[i].fila) && (resultado[j].columna == resultado[i].columna))
      {
        double val = resultado[j].valor;
        for(int k=j;k<util-1;k++)
        {
          resultado[k].fila = resultado[k+1].fila;
          resultado[k].columna = resultado[k+1].columna;
          resultado[k].valor = resultado[k+1].valor;
        }
        resultado[i].valor += val;
        util--;
      }
    }
  }
  return util;

}

void mostrarContenido(Valor array[],int tam)
{
  for(int i=0;i<tam;i++)
  {
    cout << "{" << array[i].fila << ", " << array[i].columna << ", " << array[i].valor << "}";
    if(i<tam-1) cout << "  -- ";
  }
  cout << endl;
}
