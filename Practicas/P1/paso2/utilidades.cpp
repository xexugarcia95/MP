#include <cmath>
#include "utilidades.h"

double Utilidades::calcularDistancia(Punto p1, Punto p2) {
    double x = p2.getX() - p1.getX();
    double y = p2.getY() - p1.getY();
    double distancia = sqrt((x*x) + (y*y));

    return distancia;
}


Punto Utilidades::calcularPuntoMedio(Punto p1, Punto p2) {
    Punto p;
    p.setX((p1.getX() + p2.getX())/2);
    p.setY((p1.getY() + p2.getY())/2);

    return p;
}


double Utilidades::calcularDistancia(Circulo c1, Circulo c2) {
    // Se recuperan los centros de ambos circulos
    Punto cc1=c1.getCentro();
    Punto cc2=c2.getCentro();

    // Se calcula la distancia entre los dos puntos
    double distancia=calcularDistancia(cc1, cc2);

    // Se devuelve el valor calculado
    return distancia;
}

/**
 * @brief Comprueba si un punto es interior a un círculo. FUncion externa
 * a las clases
 * @param p punto a comprobar
 * @param c circulo
 * @retval true si el punto @a p es interior al círculo @a c
 * @retval false en caso contrario
 */
bool Utilidades::comprobarInterior(Punto p, Circulo c) {
    bool interior=false;

    // Se calcula si la distancia entre el punto y el centro
    // del circulo es menor que el radio del circulo
    Punto cc=c.getCentro();
    double radio=c.getRadio();

    // Se calcula la distancia
    double distancia=calcularDistancia(p, cc);

    // Si es interior, se cambia el valor del flag
    if(distancia <= radio){
        interior=true;
    }

    // Se devuelve el valor de interior
    return interior;
}