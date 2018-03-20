
#include "estimadorDistancia.h"

/**
 * Constructor de la clase.
 * @param numeroMuestras
 */
EstimadorDistancia::EstimadorDistancia(long int numeroMuestras){
    // Asigna el dato miembro muestras
    muestras=numeroMuestras;

    // Inicializa a 0 la estimacion
    estimacion=0;
}

/**
 * Metodo para realizar la simulacion
 */
void EstimadorDistancia::estimar(){
    // Se inicializa el generador de numeros aleatorios
    srand(time(NULL));

    double x1, y1, x2, y2;
    double estimacionMuestra;

    // Se generan tantos pares de puntos como indique el
    // dato miembro muestras
    for(int i=0; i < muestras; i++){
        x1=rand()/(double)RAND_MAX;
        y1=rand()/(double)RAND_MAX;
        x2=rand()/(double)RAND_MAX;
        y2=rand()/(double)RAND_MAX;

        estimacionMuestra = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        distancias[i] = estimacionMuestra;
    }
}

/**
 * Metodo para devolver el resultado de la estimacion
 * @param distanciasObtenidas array en que devolver las distancias calculadas
 * @param util paraa devolver el numero de distancias que se calcularon
 */
void EstimadorDistancia::devolverDistancias(double distanciasObtenidas[],
                                            int &util){
   util = muestras;
   for(int i=0;i<util;i++)
   {
      distanciasObtenidas[i] = distancias[i];

   }
}
