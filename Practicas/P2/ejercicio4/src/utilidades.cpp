#include "utilidades.h"

int localizarSubcadena(char cadena[],char subcadena[])
{
  int valor = -1;
  bool encontrado = false;
  for(int i=0;cadena[i]!='\0' && !encontrado;i++)
  {
    if(cadena[i] == subcadena[0])
    {
      bool distinto = false;
      for(int j=i,k=0;!distinto && subcadena[k]!='\0';j++,k++)
      {
        if(cadena[j]!=subcadena[k])
        {
          distinto = true;
        }
      }
      if(!distinto)
      {
        encontrado = true;
        valor = i;
      }
    }

  }
  return valor;
}
