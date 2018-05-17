#include "Barquitos.h"
#include <iostream>
using namespace std;


Barquitos::Barquitos(int num_fil,int num_col)
{
  this->NUM_FIL = num_fil;
  this->NUM_COL = num_col;

  tablero = new int*[NUM_FIL];

  for(int i=0;i<NUM_FIL;i++)
  {
    tablero[i] = new int[NUM_COL];
  }

  for(int i=0;i<NUM_FIL;i++)
  {
    for(int j=0;j<NUM_COL;j++)
    {
      tablero[i][j] = 0;
    }
  }
}

Barquitos::Barquitos(const Barquitos& b)
{
  NUM_FIL = b.NUM_FIL;
  NUM_COL = b.NUM_COL;
  tablero = new int*[NUM_FIL];
  for(int i=0;i<NUM_FIL;i++)
  {
    tablero[i] = new int[NUM_COL];
  }

  for(int i=0;i<NUM_FIL;i++)
  {
    for(int j=0;j<NUM_COL;j++)
    {
      tablero[i][j] = b.tablero[i][j];
    }
  }
}

Barquitos::~Barquitos()
{
  for(int i=0;i<NUM_FIL;i++)
  {
    delete [] tablero[i];
  }

  delete [] tablero;
}

Barquitos& Barquitos::operator=(const Barquitos& b)
{
  if(this!=&b)
  {
    if(NUM_FIL!=b.NUM_FIL || NUM_COL!=b.NUM_COL)
    {
      delete this;
      NUM_FIL = b.NUM_FIL;
      NUM_COL = b.NUM_COL;
      tablero = new int*[NUM_FIL];
      for(int i=0;i<NUM_FIL;i++)
      {
        tablero[i] = new int[NUM_COL];
      }

    }
      for(int i=0;i<NUM_FIL;i++)
      {
        for(int j=0;j<NUM_COL;j++)
        {
          tablero[i][j] = b.tablero[i][j];
        }
      }
  }
  return *this;
}

void Barquitos::mostrar()
{
  for(char i='A',j='A'+NUM_FIL;i!=j;i++)
  {
    if(i=='A') cout << "\t";
    cout << i << " ";
  }

  cout <<endl;
  cout <<endl;
  for(int i=0;i<NUM_FIL;i++)
  {
    cout << "  "  << i << "\t";
    for(int j=0;j<NUM_COL;j++)
    {
      cout << tablero[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

void Barquitos::colocarBarco(int fil,int col,int tam,char x)
{
  int izq_1,izq_2,der_1,der_2;

  if(x=='H' || x=='h')
  {
    izq_1=fil-1;
    izq_2=col-1;
    der_1=fil+tam-1;
    der_2=col+tam;

    if(izq_1<0) izq_1++;
    if(izq_2<0) izq_2++;
    if(der_1>=tam) der_1++;
    if(der_2>=tam) der_2++;

    int val1 = der_1-izq_1+1;
    int val2 = der_2-izq_2+1;

    bool encontrado = false;
    for(int i=0;i<val1 && !encontrado;i++)
    {
      for(int j=0;j<val2 && !encontrado;j++)
      {
        if(tablero[i][j] <= 4 && tablero[i][j] >= 1) encontrado = true;
      }
    }
    cout << "Comprobando si se ha encontrado\n";
    if(encontrado)
    {
      cout << "No se puede colocar en esta posicion\n";

    }else
    {
    /*  for(int i = fil,j=col;j<col+4;j++)
      {
        insercion(i,j,tam);
      }*/
      cout << "Inserción realizada\n";
    }


  }

}

void Barquitos::insercion(int i,int j,int valor)
{
  cout << "Insertando " << valor << " en tablero\n";
  tablero[i][j] = valor;
}
