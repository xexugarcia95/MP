#ifndef __SKYLINE_H__
#define __SKYLINE_H__

#include <iostream>

using namespace std;

class Skyline
{
private:
 double *abscisas;
 double *alturas;
 int n;

public:
  Skyline();
  Skyline(double ab1,double ab2,double alt);
  Skyline(const Skyline& s);
  ~Skyline();

  double& operator[](int i);
  double& operator[](int i)const;
  friend ostream& operator<<(ostream& os,const Skyline& s);

};

inline ostream& operator<<(ostream& os,const Skyline& s)
{
 os << "ABSCISAS: ";
 for(int i=0;i<s.n;i++) os << s.abscisas[i] << " ";
 os <<endl;
 os <<"ALTURAS: ";
 for(int i=0;i<s.n;i++) os << s.alturas[i] << " ";
 os << "TAMANIO: " << s.n << endl;

 return os;
}

#endif
