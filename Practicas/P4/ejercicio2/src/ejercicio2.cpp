#include <iostream>
#include "BigInt.h"

using namespace std;

int main()
{
  cout << "EJERCICIO 2: TRATO DE VALORES BIG INT\n";
  cout << "---------------------------------------\n";

  int valor = 73759835;
  BigInt *b = new BigInt(valor);
  cout << "Big Int: " << b << endl;
  cout << "Mostrar:\n";
  b->mostrar(5);

  delete b;

  return 0;
}
