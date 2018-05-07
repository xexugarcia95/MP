#ifndef __BARQUITOS_H
#define __BARQUITOS_H

class Barquitos
{

private:

int NUM_FIL;
int NUM_COL;
int **tablero;

public:

Barquitos();

Barquitos(int num_fil,int num_col);

Barquitos(const Barquitos& b);

~Barquitos();

};


#endif
