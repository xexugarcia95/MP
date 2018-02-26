#ifndef __UTILIDADES_H_
#define __UTILIDADES_H_

#include "punto.h"
#include "circulo.h"

class Utilidades{
	
public:
/**
 * @brief Calcula la distancia entre dos puntos. Se trata de
 * una funcion externa a la clase Punto. A implementar
 * @param p1 primer punto
 * @param p2 segundo punto
 * @return la distancia entre el punto @a p1 y el punto @a p2
 */
double calcularDistancia(Punto p1, Punto p2);

/**
 * @brief Calcula el punto que está entre dos puntos dados con distancia
 * mínima a ambos. Se trata de una funcion externa a la clase Punto. A
 * implementar
 * @param p1 primer punto
 * @param p2 segundo punto
 * @return un punto entre el punto @a p1 y el punto @a p2 con distancia
 * mínima a ambos
 */
Punto calcularPuntoMedio(Punto p1, Punto p2);

/**
 * @brief Calcula la distancia entre dos circulos. Funcion externa a
 * ambas clases
 * @param c1 primer círculo
 * @param c2 segundo círculo
 * @return la distancia entre el círculo @a c1 y el círculo @a c2
 * La distancia entre dos círculos se define como la distancia entre los
 * centros menos los dos radios.
 * Nótese que la distancia puede ser negativa si los círculos se intersecan
 */
double calcularDistancia(Circulo c1, Circulo c2);

/**
 * @brief Comprueba si un punto es interior a un círculo. FUncion externa
 * a las clases
 * @param p punto a comprobar
 * @param c circulo
 * @retval true si el punto @a p es interior al círculo @a c
 * @retval false en caso contrario
 */
bool comprobarInterior(Punto p, Circulo c) ;

};

#endif