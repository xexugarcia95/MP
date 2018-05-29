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
  Pareja(int d);
  Pareja(const Pareja& p);
  ~Pareja();

  int getDato();
  int getNveces();
  void setNveces(int n);

  Pareja& operator=(const Pareja& p);
  bool operator==(const Pareja& p);
  bool operator!=(const Pareja& p);

  friend ostream& operator<<(ostream& os,const Pareja& p);
};

inline ostream& operator<<(ostream& os,const Pareja& p)
{
  os << "Valor: " << p.dato << ", N. de rep: " << p.nveces << endl;
  return os;
}


#endif
