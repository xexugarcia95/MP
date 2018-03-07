
#include<iostream>
#include "estimadorDistancia.h"

using namespace std;

/**
 * Funcion main para hacer pruebas
 */
int main(int argc, char *argv[]){

    // Se comprueba que se ha pasado como argumento el numero
    // de muestras a estimar
    if (argc != 2){
        cout << "Uso del programa: estimacion <numero muestras: max " <<
             EstimadorDistancia::MAXNUMMUESTRAS << ">" << endl;
        exit(-1);
    }

    // Si todo ha ido bien, se construye el objeto de la clase
    // EstimadorDistancia
    long int numeroMuestras=atoll(argv[1]);
    EstimadorDistancia objeto(atol(argv[1]));

    // Se realiza la estimacion
    objeto.estimar();

    // Se obtienen las distancias
    int util;
    double distanciasCalculadas[EstimadorDistancia::MAXNUMMUESTRAS];
    objeto.devolverDistancias(distanciasCalculadas,util);

    // Ahora podemos calcular la media de las distancias
    double media=0;
    for(int i=0; i < util; i++){
        media=media+distanciasCalculadas[i];
    }
    media=media/util;

    // Se muestra el resultado
    cout << "Longitud media estimada: " << media << endl;
}