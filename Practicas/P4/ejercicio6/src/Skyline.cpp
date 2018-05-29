#include "Skyline.h"
#include <cassert>
Skyline::Skyline()
{
  abscisas = 0;
  alturas = 0;
  n = 0;
}

Skyline::Skyline(double ab1,double ab2,double alt)
{
  abscisas = new double[2];
  alturas = new double[2];

  abscisas[0] = ab1;
  abscisas[1] = ab2;
  alturas[0] = alt;
  alturas[1] = 0;

  n = 2;
}

Skyline::Skyline(const Skyline& s)
{
  n = s.n;
  abscisas = new double[n];
  alturas = new double[n];
  for(int i=0;i<n;i++)
  {
      abscisas[i] = s.abscisas[i];
      alturas[i] = s.alturas[i];
  }
}

Skyline::~Skyline()
{
  delete [] abscisas;
  delete [] alturas;
  n = 0;
}

double& Skyline::operator[](int i)
{
  assert(i>=0); assert(i<=n);
  return abscisas[i];
}
