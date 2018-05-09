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
  cout << NUM_FIL << " " << NUM_COL<< "\n";
}

bool Barquitos::colocarBarco(int fil,int col,int tam,char x)
{
  bool colocar = true;



  return colocar;
}
