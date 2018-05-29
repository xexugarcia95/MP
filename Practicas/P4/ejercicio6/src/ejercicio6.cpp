#include "Skyline.h"
#include <iostream>
using namespace std;

int main()
{
  cout << "EJERCICIO 7. SKYLINE\n";
  Skyline *s = new Skyline(1.5,3.0,2.0);

  cout << *s << endl;

  Skyline *m = new Skyline(*s);

  cout << *m << endl;

  delete m;
  delete s;
  
  return 0;
}
