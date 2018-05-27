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

  Celda *m = new Celda(8);
  l->insertar(m);

  cout << *l << endl;

  Lista *l2 = new Lista(*l);

  cout << *l2 << endl;


  return 0;
}
