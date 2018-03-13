 #include "utilidades.h"

 int mezclar(double v1[],int tam1,double v2[],int tam2, double v3[])
 {
   for(int i=0;i<tam1;i++)
   {
     v3[i] = v1[i];
   }

  int m = tam2;
  for(int j=0;i<tam2;j++)
  {
    v3[m++] = v2[j];
  }

  int tam3 = tam1+tam2;
  ordenar(v3,tam3);


 }

 void ordenar(double v[],int tam)
 {
   for(int i=0;i<tam;i++)
   {
     for(int j=i+1;j<tam;j++)
     {
       if(v[j]<v[i])
       {
         int aux = v[j];
         for(int k=j;k>i;k--)
         {
           v[k]=v[k-1];
         }
         v[i]=aux;
       }
     }

   }
   //Buscar repetidos
   for(int i=0;i< tam-1;i++)
   {
     if(v[i]==v[i+1])
     {
       for(int j=i+1;j<tam-1;j++)
       {
         v[j]=v[j+1];
       }
     }
   }
 }

 void imprimirArray(double v[],int tam)
 {
   for(int i=0;i<tam;i++)
   {
     cout << v[i] << " ";
   }

   cout << "\n";
 }
