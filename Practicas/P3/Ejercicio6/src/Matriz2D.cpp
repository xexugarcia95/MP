#include "Matriz2D.h"
#include <iostream>
using namespace std;

Matriz2D::Matriz2D(int numeroFilas, int numeroColumnas)
{
  this->numeroFilas = numeroFilas;
  this->numeroColumnas = numeroColumnas;

  matriz = new int*[numeroFilas];
  for(int i=0;i<numeroFilas;i++)
  {
    matriz[i] = new int[numeroColumnas];
  }
}


Matriz2D::Matriz2D(const Matriz2D & objeto)
{
  cout << "Constructor de copia\n";
  this->numeroFilas = objeto.numeroFilas;
  this->numeroColumnas = objeto.numeroColumnas;

  matriz = new int*[numeroFilas];
  for(int i=0;i<numeroFilas;i++)
  {
    matriz[i] = new int[numeroColumnas];
  }

  for(int i=0;i<numeroFilas;i++)
  {
    for(int j=0;j<numeroColumnas;j++)
    {
      matriz[i][j] = objeto.matriz[i][j];
    }
  }
}


Matriz2D::~Matriz2D()
{
  for(int i=0;i<numeroFilas;i++)
  {
    delete [] matriz[i];
  }

  delete [] matriz;
}


bool Matriz2D::asignarValor(int fila, int columna, int valor)
{
  bool x = false;
  if(fila <numeroFilas && columna < numeroColumnas)
    matriz[fila][columna] = valor;
    x = true;

  return x;
}


void Matriz2D::mostrarPantalla()
{
  cout << "\n";
  for(int i=0;i<numeroFilas;i++)
  {
    for(int j=0;j<numeroColumnas;j++)
    {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }
}


Matriz2D * Matriz2D::copiarMatriz()
{
  Matriz2D *mat = new Matriz2D(numeroFilas,numeroColumnas);
  for(int i=0;i<numeroFilas;i++)
  {
    for(int j=0;j<numeroColumnas;j++)
    {
      mat->matriz[i][j] = matriz[i][j];
    }
  }
  return mat;
}


Matriz2D * Matriz2D::extrarSubmatriz(int filaIni, int colIni, int filaFin, int colFin)
{
  int fil = filaFin-filaIni+1;
  int col = colFin-colIni+1;
  Matriz2D *mat = new Matriz2D(fil,col);

  for(int i=0,j=filaIni;j<=filaFin;i++,j++)
  {
    for(int k=0,l=colIni;l<=colFin;k++,l++)
    {
      mat->matriz[i][k] = matriz[j][l];
    }
  }

  return mat;
}


void Matriz2D::eliminarFila(int fila)
{
  for(int i=fila;i<numeroFilas-1;i++)
  {
    for(int j=0;j<numeroColumnas;j++)
    {
      matriz[i][j] = matriz[i+1][j];
    }
  }

  numeroFilas--;
}


void Matriz2D::eliminarColumna(int columna)
{
  for(int i=0;i<numeroFilas;i++)
  {
    for(int j=columna;j<numeroColumnas-1;j++)
    {
      matriz[i][j] = matriz[i][j+1];
    }
  }

  numeroColumnas--;
}
