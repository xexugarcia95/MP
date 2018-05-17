#include "Barquitos.h"
#include <iostream>
using namespace std;


int main()
{
  cout << "\tBIENVENIDO AL JUEGO DE LOS BARQUITOS\n";
  Barquitos *b = new Barquitos(11,11);
  cout << "Primer barco\n";
  b->mostrar();
  Barquitos *c = new Barquitos(*b);
  cout << "Segundo barco\n";
  c->mostrar();
  Barquitos *d = new Barquitos(5,5);
  cout << "Tercer\n";
  d->mostrar();
  d=c;
  cout << "Cuarto\n";
  d->mostrar();
  Barquitos *e = new Barquitos(5,5);
  cout << "Barco para comprobar la insercion de barcos\n";
  e->mostrar();
  cout << "Colocando barco\n";
  e->colocarBarco(2,3,4,'H');
  e->mostrar();
  delete b;
  delete d;
  delete c;
  delete e;



  return 0;
}
