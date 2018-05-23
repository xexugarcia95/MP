#include <iostream>
#include "BigInt.h"
#include "utilidades.h"

int main()
{
  cout << "EJERCICIO 2: TRATO DE VALORES BIG INT\n";
  cout << "---------------------------------------\n";

  int valor = 73759835;
  BigInt *b = new BigInt(valor);
  cout << "Big Int 1: " << *b << endl;


  BigInt *c = new BigInt;
  c->insertar(9);
  c->insertar(5);
  c->insertar(3);
  c->insertar(0);
  c->insertar(2);
  c->insertar(7);
  c->insertar(3);
  c->insertar(7);
  c->insertar(5);
  c->insertar(9);
  c->insertar(8);
  c->insertar(3);
  c->insertar(5);
  cout << "(9530273759835)\n";
  cout << "Big Int 2: " << *c << endl;

  cout << "SUMA\n";
  BigInt *d=new BigInt;

  d = sumaBig(b,c);

  cout << "Big Int 3 (b+c): " << *d << endl;

  BigInt *e = new BigInt(*d);

  cout << "Big Int 4: " << *e << endl;

  delete e;
  delete d;
  delete b;
  delete c;


}
