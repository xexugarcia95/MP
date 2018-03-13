 #include "utilidades.h"

 int mezclar(double v1[],int tam1,double v2[],int tam2, double v3[])
 {
   for(int i=0;i<tam1;i++)
   {
     v3[i] = v1[i];
   }

  int m = tam2;
  for(int j=0;j<tam2;j++)
  {
    v3[m] = v2[j];
    m++;
  }

  int tam3 = tam1+tam2;
  ordenar(v3,tam3);


  return tam3;
 }

 void ordenar(double v[],int tam)
 {
  /* for(int i=0;i<tam-1;i++)
   {
     for(int j=i+1;j<tam;j++)
     {
       if(v[i]>v[j])
       {
          int aux = v[i];
          v[i] = v[j];
          v[j] = aux;
       }
     }
   }*/
 }

 void imprimirArray(double v[],int tam)
 {
   for(int i=0;i<tam;i++)
   {
     cout << v[i] << " ";
   }

   cout << "\n";
 }
