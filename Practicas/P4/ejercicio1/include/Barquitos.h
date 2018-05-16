#ifndef __BARQUITOS_H
#define __BARQUITOS_H

class Barquitos
{

private:

int NUM_FIL;
int NUM_COL;
int **tablero;

public:

Barquitos(int num_fil,int num_col);

Barquitos(const Barquitos& b);

~Barquitos();

Barquitos& operator=(const Barquitos& b);

void mostrar();

void colocarBarco(int fil,int col,int tam,char x);

void insercion(int i,int j,int valor);

};


#endif
