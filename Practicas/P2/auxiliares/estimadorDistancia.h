
#ifndef ESTIMADORDISTANCIA_H
#define ESTIMADORDISTANCIA_H

#include<stdlib.h>
#include<math.h>
#include<time.h>

using namespace std;

/**
 * Clase para estimar la distancia media entre puntos
 * elegidos de forma aleatoria en el cuadrado unitario
 */
class EstimadorDistancia{
public:

    /**
     * Constante para definir el maximo tamaño del array
     */
    static const long int MAXNUMMUESTRAS=100000;

private:
    /**
     * Dato miembro para almacenar el numero de pares
     * de puntos a obtener
     */
    long int muestras;

    /**
     * Dato miembro para almacenar la distancia obtenida
     * de cada par de puntos generados
     */
    double distancias[MAXNUMMUESTRAS];

    /**
     * Dato miembro para almacenar la estimacion realizada
     */
    double estimacion;

    /**
     * Metodo auxiliar para calcular el valor de la estimacion
     */
    void calcularEstimacion();

public:

    /**
     * Constructor de la clase
     * @param numeroMuestras numero de muestras a considerar en
     * la estimacion
     */
    EstimadorDistancia(long int numeroMuestras);

    /**
     * Metodo para realizar la estimacion
     */
    void estimar();

    /**
     * Metodo para devolver el array con las distancias
     */
    void devolverDistancias(double distanciasObtenidas[], int &util);
};

#endif //ESTIMADORDISTANCIA_H
