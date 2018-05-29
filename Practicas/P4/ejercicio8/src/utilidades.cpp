#include "utilidades.h"
#include <iostream>
using namespace std;

int getTam(char* c)
{
  int cont = 0;
  for(int i=0;c[i]!='\0';i++) cont++;

  return cont;
}
