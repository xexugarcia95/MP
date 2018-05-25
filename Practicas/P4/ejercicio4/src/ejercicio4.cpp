#include "Lista.h"
#include <iostream>
using namespace std;

int main()
{
  cout << "EJERCICIO 4. CELDAS Y LISTAS\n\n";

  Celda *c = new Celda(5);

  cout << *c << endl;

  Celda *d = new Celda(*c);

  cout << *d << endl;

  Lista *l = new Lista(*c);

  cout << *l << endl;
  return 0;
}
