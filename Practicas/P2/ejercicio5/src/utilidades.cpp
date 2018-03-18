#include "utilidades.h"

int Longitud(char cadena[])
{
  int cont=0;
  for(int i=0;cadena[i]!='\0';i++) cont++;

  return cont;
}

bool insertarCadena(char cadena1[],char cadena2[],int posicion,char resultado[])
{
  int tam = Longitud(cadena1);
  bool insercion = false;
  if(posicion<=tam)
  {
    insercion = true;
    int tam2 = Longitud(cadena2);
    for(int i=0;i<posicion;i++)
    {
      resultado[i] = cadena1[i];
    }
    for(int j=posicion,m=0;m<tam2;j++,m++)
    {
      resultado[j] = cadena2[m];
    }
    for(int k=posicion+tam2,l=posicion;k<tam+tam2;k++,l++)
    {
      resultado[k] = cadena1[l];
    }

    resultado[tam+tam2] = '\0';
  }

  return insercion;
}
