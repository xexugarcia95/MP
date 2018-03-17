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
    for(int i=tam-1;i>=posicion;i--)
    {
      resultado[i+tam2] = cadena1[i];
    }
    for(int i=0;i<tam2;i++)
    {
      resultado[i] = cadena2[i];
    }
  }

  return insercion;
}
