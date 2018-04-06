
#include<iostream>
#include<cstdlib>

#include "utilidades.h"

using namespace std;

// Declaracion de constantes para inicializar los arrays
const int DIM=10;
const int MAXTAM=50;

// Se hace todo en el metodo mainnw]]
int main(){
    int array[DIM];
    int **parray=new int*[DIM];

    // Se inicializa el generador de numeros aleatorios
    srand(time(NULL));

    // Se rellena el array con valores aleatorios, desde
    // -50 a 50. Se usa un puntero para ir rellenando el
    // array
    int *p=array;
    for (int i=0; i < DIM; i++,p++){
        *p=rand()%(2*MAXTAM+1)-MAXTAM;
    }

    // Se muestra el contenido del array al inicio
    cout << "----------------------- Caso de prueba 1 -------------------" << endl;
    imprimir(array, DIM);

    // Se ordenan los punteros
    ordenarPunteros(array, parray, DIM);

    // Se muestra el resultado: el contenido obtenido considerando el array
    // de punteros
    imprimir(parray,DIM);
    cout << "------------------------------------------------------------" << endl;

    // Para el caso de prueba 2 se usa un array completamente ordenado
    for(int i=0; i < DIM; i++){
        array[i]=i;
    }

    // Se muestra el contenido del array al inicio
    cout << "----------------------- Caso de prueba 2 -------------------" << endl;
    imprimir(array, DIM);

    // Se ordenan los punteros
    ordenarPunteros(array, parray, DIM);

    // Se muestra el resultado: el contenido obtenido considerando el array
    // de punteros
    imprimir(parray,DIM);
    cout << "------------------------------------------------------------" << endl;

    // Caso de prueba 3: vector completamente desordenado
    for(int i=0; i < DIM; i++){
        array[i]=DIM-1-i;
    }

    // Se muestra el contenido del array al inicio
    cout << "----------------------- Caso de prueba 3 -------------------" << endl;
    imprimir(array, DIM);

    // Se ordenan los punteros
    ordenarPunteros(array, parray, DIM);

    // Se muestra el resultado: el contenido obtenido considerando el array
    // de punteros
    imprimir(parray,DIM);
    cout << "------------------------------------------------------------" << endl;

    // Se prueba que ocurre si todos los valores son iguales
    for(int i=0; i < DIM; i++){
        array[i]=10;
    }

    // Se muestra el contenido del array al inicio
    cout << "----------------------- Caso de prueba 4 -------------------" << endl;
    imprimir(array, DIM);

    // Se ordenan los punteros
    ordenarPunteros(array, parray, DIM);

    // Se muestra el resultado: el contenido obtenido considerando el array
    // de punteros
    imprimir(parray,DIM);
    cout << "------------------------------------------------------------" << endl;
}
