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

  int *f = new int[3];
  f[0] = 1;
  f[1] = 2;
  f[2] = 3;

  int *c = new int[3];
  c[0] = 1;
  c[1] = 2;
  c[2] = 3;

  double *val = new double[3];
  val[0] = 1.0;
  val[1] = 2.0;
  val[2] = 3.0;

  MatrizDispersa *mat = new MatrizDispersa(f,c,val,3);
  cout << "Constructor personalizado\n";
  cout << *mat << endl;

  delete m;

  return 0;
}
