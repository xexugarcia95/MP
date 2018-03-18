#include "utilidades.h"


void mostrarMatriz(double matriz[FIL][COL],int fil,int col)
{
  for(int i=0;i<fil;i++)
  {
    for(int j=0;j<col;j++)
    {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

bool multiplicar(double mat1[FIL][COL],int fil1,int col1,double mat2[FIL][COL],int fil2,int col2,double util[FIL][COL],int &utilF,int &utilC)
{
  bool valido = false;
  if(col1==fil2)
  {
    valido = true;

    for(int i=0;i<fil1;i++)
    {
      for(int j=0;j<col2;j++)
      {
        util[i][j] = 0;
      }
    }

    for(int i=0;i<fil1;i++)
    {
      for(int j=0;j<col2;j++)
      {
        for(int k=0;k<fil2;k++)
        {
          util[i][j] += mat1[i][k] * mat2[k][j];
        }
      }
    }
    utilC=col2;
    utilF=fil1;
  }
  return valido;
}
