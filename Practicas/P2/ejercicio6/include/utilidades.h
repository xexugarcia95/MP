#ifndef _UTILIDADES_H__
#define _UTILIDADES_H__

#include <iostream>

using namespace std;

const int COL = 4;
const int FIL = 4;


void mostrarMatriz(double matriz[FIL][COL],int fil,int col);
bool multiplicar(double mat1[FIL][COL],int fil1,int col1,double mat2[FIL][COL],int fil2,int col2,double util[FIL][COL],int &utilF,int &utilC);

#endif
