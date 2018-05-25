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
  double getInfo();
  Celda* getCelda();
  void asignarSiguiente(Celda *pCelda);

  Celda& operator=(const Celda& c);
  friend ostream& operator<<(ostream& os,const Celda& c);

};

inline ostream& operator<<(ostream& os,const Celda& c)
{
  os << "Info: " << c.info << endl;
  char val[2];
  if(c.sig) {val[0] = 'S'; val[1] = 'I';}
  else {val[0] = 'N'; val[1] = 'O';}
  os << "Sig. Celda: " << val << endl;

  return os;
}

#endif
