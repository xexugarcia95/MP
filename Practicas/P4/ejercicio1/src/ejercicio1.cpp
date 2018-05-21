#include "Barquitos.h"
#include <iostream>
using namespace std;


int main()
{
  cout << "\tBIENVENIDO AL JUEGO DE LOS BARQUITOS\n";
  cout << "\t-----------------------------------------\n";
  Barquitos *e = new Barquitos(10,10);
  cout << "Barco para comprobar la insercion de barcos\n";
  e->mostrar();
  cout << "Colocando barco\n";
  e->colocarBarco(7,2,5,'H');
  e->colocarBarco(3,3,3,'v');
  e->colocarBarco(2,9,4,'v');
  e->colocarBarco(0,3,2,'h');
  e->colocarBarco(0,9,2,'h');
  e->colocarBarco(0,9,2,'v');
  e->colocarBarco(9,9,2,'h');
  e->colocarBarco(9,9,1,'h');
  e->colocarBarco(0,0,2,'D');
  e->mostrar();

  int x,y;
  cout << "Elige donde quieres disparar:";
  cin >> x >> y;

  if(e->indice(x,y)==9)
  {
    cout << "AGUA!!\n";
    e->insercion(x,y,-9);
  }
  e->mostrar();
  delete e;


  return 0;
}
