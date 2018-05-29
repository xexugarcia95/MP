#include <iostream>
#include "Precuencias.h"
using namespace std;

int main()
{
  cout << "EJERCICIO 7. PAREJAS\n";
  Pareja *p = new Pareja(3);

  cout << *p << endl;

  Precuencias *pr = new Precuencias(*p);

  cout << *pr << endl;

  pr->agregarValor(12834444);

  cout << *pr << endl;

  pr->agregarValor(25444);

  cout << *pr << endl;

  delete pr;
  delete p;


  return 0;
}
