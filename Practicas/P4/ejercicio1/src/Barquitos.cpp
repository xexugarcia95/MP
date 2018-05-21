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
      tablero[i][j] = 9;
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
  //Declaración de variables para su posterior uso
  int izq_1,izq_2,der_1,der_2;
  bool encontrado = false;

  if(x=='H' || x=='h') //comprueba si es horizontal
  {
    cout << "Inserción horizontal\n";
    if(tam>NUM_COL) //comprueba que no supere el rango de la columna de la matriz
    {
      cout << "El tamaño del barco supera el rango de la matriz.No es posible su inserción\n";
    }else
    {
      izq_1=fil-1;
      izq_2=col-1;
      der_1=fil+1;
      der_2=col+tam;

      if(izq_1<0) izq_1++;
      if(izq_2<0) izq_2++;
      if(der_1>=NUM_FIL) der_1--;
      if(der_2>=NUM_FIL) der_2--;

      if((izq_1<0 || izq_2<0) || (der_1>=NUM_FIL || der_2>=NUM_COL))
      {
        cout << "No se puede realizar la inserción, se sale fuera del tablero\n";
      }else
      {
        for(int i=izq_1;i<der_1 && !encontrado;i++)
        {
          for(int j=izq_2;j<der_2 && !encontrado;j++)
          {
            if(tablero[i][j] >= 1 && tablero[i][j] <= 4)
            {
              encontrado = true;
            }
          }
        }
        if(encontrado)
        {
          cout << "No se puede colocar en esta posicion\n";

        }else
        {
          cout << "Es posible. Realizando colocación...\n";
          for(int i = fil,j=col;j<(col+tam);j++)
          {
            insercion(i,j,tam);
          }
          cout << "Inserción realizada\n";
        }
      }

    }

  }else if(x=='V' || x=='v')
  {
    cout << "Inserción vertical\n";
    if(tam>NUM_FIL) //comprueba que no supere el rango de la columna de la matriz
    {
      cout << "El tamaño del barco supera el rango de la matriz.No es posible su inserción\n";
    }else
      {
        izq_1=fil-1;
        izq_2=col-1;
        der_1=fil+tam;
        der_2=col+1;

        if(izq_1<0) izq_1++;
        if(izq_2<0) izq_2++;
        if(der_1>=NUM_FIL) der_1--;
        if(der_2>=NUM_COL) der_2--;

        if((izq_1<0 || izq_2<0) || (der_1>=NUM_FIL || der_2>=NUM_COL))
        {
          cerr << "No se puede realizar la inserción, se sale fuera del tablero\n";
        }
        else
        {
          for(int i=izq_1;i<=der_1 && !encontrado;i++)
          {
            for(int j=izq_2;j<=der_2 && !encontrado;j++)
            {
              if(tablero[i][j] >= 1 && tablero[i][j] <= 5)
              {
                encontrado = true;
              }
            }
          }
          if(encontrado)
          {
            cout << "No se puede colocar en esta posicion\n";

          }else
          {
            cout << "Es posible. Realizando colocación...\n";
            for(int i = fil,j=col;i<(fil+tam);i++)
            {
              insercion(i,j,tam);
            }
            cout << "Inserción realizada\n";
            cout << izq_1 << "," << izq_2 << "," << der_1<< "," << der_2 << endl;
          }
        }


    }

  }else
  {
    cerr << "Error, el tipo carácter no coincide (H,V)\n";
  }
}

void Barquitos::insercion(int i,int j,int valor)
{
  tablero[i][j] = valor;
}

int Barquitos::indice(int x,int y)
{
  return tablero[x][y];
}
