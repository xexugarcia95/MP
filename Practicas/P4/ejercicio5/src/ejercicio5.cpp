#include "MatrizDispersa.h"
#include <iostream>
using namespace std;

int main()
{
  cout << "EJERCICIO 5. MATRIZ DISPERSA\n";

  Valor v(1,2,3.0);

  cout << v << endl;

  Valor *va = new Valor(2,2,5.0);

  MatrizDispersa *m = new MatrizDispersa(3,3,va,1);

  cout << *m << endl;

  MatrizDispersa *ma = m;

  cout << *ma << endl;

  ma = *ma+*m;

  cout << *ma << endl;

  delete m;

  return 0;
}
