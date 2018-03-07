/**
 *  @file circulomedio.cpp
 *  @brief Calcula círculo con centro en el punto medio de la
 *         linea que une el centro de dos circulos y con radio
 *         la mitad de la distancia
 *  @warning Módulo no definitivo (creado para ser modificado)
 *  Un ejemplo de ejecución podria ser:
 *    Introduzca un circulo en formato radio-(x,y): 3-(0,0)
 *    Introduzca otro circulo: 4-(4,0)
 *    El círculo que pasa por los dos centros es: 2-(2,0)
 **/

#include <iostream>
#include <cmath>
#include "circulo.h"
using namespace std;


/**
 * Metodo para mostrar por pantalla los datos de un objeto.
 */
void Circulo::mostrar() const {
    // Formato de escritura del círculo: radio - (x,y)
    cout << radio << " - (" << centro.getX() << "," << centro.getY() << ")\n";
}

/**
 * Metodo para preguntar los valores de los datos miembro al
 * usuario. Por implementar (se recomienda leer el radio y
 * delegar en la clase Punto la lectura del punto que hace de
 * centro)
 */
void Circulo::leerDatos(){
    cout << "Introduzca el valor del radio:";
    cin >> radio;
    centro.leerDatos();
}

/**
 * Metodo para calcular el area de un circulo
 * @return
 */
double Circulo::calcularArea() const {
    // Se calcula el area
    double area=2*M_PI*pow(radio,2);

    // Se devuelve el resultado
    return area;
}