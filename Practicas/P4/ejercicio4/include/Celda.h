#ifndef _CELDA_H__
#define _CELDA_H__

#include <iostream>
using namespace std;

class Celda
{
private:
  double info;
  Celda *sig;
public:

  Celda();
  Celda(int inf);
  Celda(const Celda &c);
  ~Celda();

  friend ostream& operator<<(ostream& os,const Celda& c);

};

inline ostream& operator<<(ostream& os,const Celda& c)
{
  os << "Info: " << c.info << endl;
  os << "Sig. Celda: " << c.sig << endl;

  return os;
}

#endif
