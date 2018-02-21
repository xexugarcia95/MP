
#include <iostream>
#include "punto.h"

using namespace std;

/**
 * Muestra el contenido del objeto por pantalla. A implementar
 */
void Punto::mostrar() const {
    // Formato de escritura del punto: (x,y)
    cout << "(" << x << ", " << y << ")" << endl;
}

/**
  * Metodo para preguntar los valores de los datos miembro al
  * usuario. Por implementar
  */
void Punto::leerDatos(){
    // Se leen los datos del usaurio
    cout << "Introduzca coordenadas del punto (x, y): ";
    cin >> x >> y;
}