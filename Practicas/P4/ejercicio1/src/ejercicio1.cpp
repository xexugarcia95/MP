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
  delete b;
  delete d;
  delete c;

  return 0;
}
