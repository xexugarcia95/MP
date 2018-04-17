#include "utilidades.h"

void imprimirArray(double const * array,int util)
{
  for(int i=0;i<util;i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;
}

int mezclarUnico(const double * array1,int util1,const double * array2,int util2,double * array3)
{
  int util = util1+util2;
  for(int i=0,j=0,k=0;k<util;k++)
  {

    if(array1[i] < array2[j])
    {
      if(i<util1)
      {
        array3[k] = array1[i];
        i++;
      }else if(i==util1)
      {
        array3[k] = array2[j];
        j++;
      }

    }else if(array2[j] < array1[i])
    {
      if(j<util2)
      {
        array3[k] = array2[j];
        j++;
      }else if(j==util2)
      {
        array3[k] = array1[i];
        i++;
      }

    }else
    {
      if(array1[i] == array2[j])
      {
        array3[k] = array2[j];
        util--;
        i++;
        j++;
      }

    }

  }

  return util;
}

/*Otra manera de implementarlo seria añadir secuencialmente los dos vectores en el tercero,
y posteriormente ordenarlos*/
