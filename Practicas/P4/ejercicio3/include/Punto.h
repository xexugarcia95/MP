#ifndef _PUNTO_H__
#define _PUNTO_H__

#include <iostream>
using namespace std;

class Punto
{
private:
  int x;
  int y;
public:
  Punto();
  Punto(int i,int j);
  Punto(const Punto& p);

  friend ostream& operator<<(ostream &os,const Punto& p);

};

inline ostream& operator<<(ostream &os,const Punto& p)
{
  os << "Punto(" << p.x << "," << p.y << ") " << endl;
  return os;
}

#endif
