#include <iostream>
#include <Polilinea.h>
using namespace std;

int main()
{
  cout << "EJERCICIO 3: POLILINEA\n";
  Punto *p = new Punto(3,4);
  Punto *p2 = new Punto(5,5);
  Polilinea *po = new Polilinea(*p);
  cout << "Polilinea 1\n";
  cout << *po << endl;
  po->agregarPunto(*p2);
  cout << *po << endl;

  Punto *p3 = new Punto(8,8);
  Polilinea *po2 = new Polilinea(*p3);
  Polilinea *po3;
  *po3 = *po + *po2;
  cout << "Polilinea 2\n";
  cout << *po3 << endl;

  delete po3;
  delete po;
  delete po2;
  delete p;
  delete p2;
  delete p3;
  return 0;
}
