#include <iostream>

#include "utilidades.h"

using namespace std;


// main para probar
int main() {

    // Caso de prueba 1: caso general
    double array11[] = {1, 2, 10, 15, 20, 25, 30, 35, 40, 45}; // tam 10
    double array12[] = {0, 1, 2, 3, 4, 5, 6, 9, 10, 21}; // tam 10
    double array13[20];

    // Se muestra los arrays a mezclar y el resultado
    cout << "------------------ Caso de prueba 1 -----------------------" << endl;
    imprimirArray(array11, 10);
    imprimirArray(array12, 10);
    int tam13 = mezclarUnico(array11, 10, array12, 10, array13);
    cout << "\nTamaño resultante de mezclar array1 y array2: " << tam13 << endl;
    imprimirArray(array13, tam13);
    cout << "-----------------------------------------------------------" << endl;

    // Caso de prueba 2: uno de los arrays solo contiene un elemento
    // y ademas esta repetido
    double array21[] = {1}; // tam 1
    double array22[] = {0, 1, 2, 3, 4, 5, 6, 9, 10, 21}; // tam 10
    double array23[20];

    // Se muestran los arrays a mezclar y el resultado
    cout << "------------------ Caso de prueba 2 -----------------------" << endl;
    imprimirArray(array21, 1);
    imprimirArray(array22, 10);
    int tam23 = mezclarUnico(array21, 1, array22, 10, array23);
    cout << "\nTamaño resultante de mezclar array1 y array2: " << tam23 << endl;
    imprimirArray(array23, tam23);
    cout << "-----------------------------------------------------------" << endl;

    // Caso de prueba 3: el segundo de los arrays solo contiene un elemento
    // y ademas esta repetido
    double array31[] = {0, 1, 2, 3, 4, 5, 6, 9, 10, 21}; // tam 10
    double array32[] = {21}; // tam 1
    double array33[20];

    // Se muestran los arrays a mezclar y el resultado
    cout << "------------------ Caso de prueba 3 -----------------------" << endl;
    imprimirArray(array31, 10);
    imprimirArray(array32, 1);
    int tam33 = mezclarUnico(array31, 10, array32, 1, array33);
    cout << "\nTamaño resultante de mezclar array1 y array2: " << tam33 << endl;
    imprimirArray(array33, tam33);
    cout << "-----------------------------------------------------------" << endl;

    // Caso de prueba 4: no hay repetidos y cada array es una secuencia
    // ordenada de forma completa
    double array41[] = {0, 1, 2, 3}; // tam 4
    double array42[] = {4, 5, 6, 7}; // tam 4
    double array43[20];

    // Se muestran los arrays a mezclar y el resultado
    cout << "------------------ Caso de prueba 4 -----------------------" << endl;
    imprimirArray(array41, 4);
    imprimirArray(array42, 4);
    int tam43 = mezclarUnico(array41, 4, array42, 4, array43);
    cout << "\nTamaño resultante de mezclar array1 y array2: " << tam43 << endl;
    imprimirArray(array43, tam43);
    cout << "-----------------------------------------------------------" << endl;

    // Caso de prueba 5: los dos arrays sin repeticiones, pero en el primero
    // todos los valores son mayores que los del segundo
    double array51[] = {4, 5, 6, 7}; // tam 4
    double array52[] = {0, 1, 2, 3}; // tam 4
    double array53[20];

    // Se muestran los arrays a mezclar y el resultado
    cout << "------------------ Caso de prueba 5 -----------------------" << endl;
    imprimirArray(array51, 4);
    imprimirArray(array52, 4);
    int tam53 = mezclarUnico(array51, 4, array52, 4, array53);
    cout << "\nTamaño resultante de mezclar array1 y array2: " << tam53 << endl;
    imprimirArray(array53, tam53);
    cout << "-----------------------------------------------------------" << endl;

}