#include "Barquitos.h"
#include <iostream>
using namespace std;

void mostrar_menu()
{
  cout << "ELIGE LA OPCION QUE QUIERAS TOMAR:\n";
  cout << "\t-----------------------------------------\n";
  cout << "\t1.Ver tablero\n";
  cout << "\t2.Disparar\n";
  cout << "\t3.Salir\n\n";
}


int main()
{
  cout << "\tBIENVENIDO AL JUEGO DE LOS BARQUITOS\n";
  cout << "\t-----------------------------------------\n";
  Barquitos *e = new Barquitos(10,10);
  cout << "\tFASE DE INSERCION DE BARCOS\n";
  cout << "\t-----------------------------------------\n";
  e->mostrar();
  cout << "Colocando barcos\n";
  e->colocarBarco(7,2,5,'H');
  e->colocarBarco(3,3,3,'v');
  e->colocarBarco(2,9,4,'v');
  e->colocarBarco(0,3,2,'h');
  e->colocarBarco(0,9,2,'h');
  e->colocarBarco(0,9,2,'v');
  e->colocarBarco(9,9,2,'h');
  e->colocarBarco(9,9,1,'h');
  e->colocarBarco(0,0,2,'D');
  e->mostrar();
  cout << "\tFASE DE ELECCION\n";
  cout << "\t-----------------------------------------\n";
  int x,y;
  int opc;
  mostrar_menu();
  do {
    cin >> opc;
    switch (opc) {
      case 1:
        e->mostrar();
        mostrar_menu();
      break;
      case 2:
        cout << "Elige la posicion del tablero:";
        cin >> x >> y;
        if(e->indice(x,y)==9) cout << "AGUA!!\n";
        else cout << "TOCADO!!\n";

        e->insercion(x,y,-(e->indice(x,y)));
        mostrar_menu();
      break;
      case 3:
        cout << "SALIENDO...\n";
      break;
      default:
        cout << "OPCION NO EXISTENTE!\n";
        mostrar_menu();
      break;
    }
  } while(opc!=3);

  delete e;


  return 0;
}
