#ifndef _PAREJA_H__
#define _PAREJA_H__

#include <iostream>
using namespace std;

class Pareja
{
private:
  int dato; //valor
  int nveces; //numero de repeticiones

public:

  Pareja();
  Pareja(const Pareja& p);
  ~Pareja();

  friend ostream& operator<<(ostream& os,const Pareja& p);
};

inline ostream& operator<<(ostream& os,const Pareja& p)
{
  os << "Valor: " << p.dato << ", N. de rep: " << p.nveces << endl;
  return os;
}


#endif
