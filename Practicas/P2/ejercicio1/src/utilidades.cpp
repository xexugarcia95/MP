 #include "utilidades.h"

 int mezclar(double v1[],int tam1,double v2[],int tam2, double v3[])
 {
   int util = tam1 + tam2;
   for(int i=0;i<tam1;i++)
   {
     v3[i] = v1[i];
   }
   for(int i=tam1;i<tam1+tam2;i++)
   {
     v3[i] = v2[i-tam1];
   }

   for(int i=0;i<util;i++) //bucle for para eliminar los repetidos
   {
     for(int j=i+1;j<util;j++)
     {
       if(v3[j]==v3[i])
       {
         for(int k=j;k<util-1;k++)
         {
           v3[k] = v3[k+1];
         }
         util--;
       }
     }
   }

   ordenar(v3,util);

   return util;

 }

 void ordenar(double v[],int tam)
 {
   for(int i=0;i<tam;i++)
   {
     for(int j=0;j<tam-1;j++)
     {
       if(v[j] > v[j+1])
       {
         double aux = v[j];
         v[j] = v[j+1];
         v[j+1] = aux;
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
