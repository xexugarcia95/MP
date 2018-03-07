#include <iostream>

#include "utilidades.h"

using namespace std;

/**
 * Funcion main para probar la funcionalidad
 * @return 
 */
int main() {
    // Caso de prueba 1
    double array1[] = {1, 3, 5, 7};
    double array2[] = {2, 4, 4.3, 9};
    double array12[20];

    // Se muestra los arrays a mezclar y el resultado
    cout << "Caso de prueba 1: " << endl;
    imprimirArray(array1, 4);
    imprimirArray(array2, 4);
    cout << "---------------------------------------------\n";
    int tam12 = mezclar(array1, 4, array2, 4, array12);
    imprimirArray(array12, tam12);
    cout << "---------------------------------------------\n\n";

    // Caso de prueba 2
    double array3[] = {1, 3, 5};
    double array4[] = {2, 3.8, 4.3, 6.4, 9.3};
    double array34[20];

    // Se muestran los arrays a mezclar y el resultado
    cout << "Caso de prueba 2: " << endl;
    imprimirArray(array3, 3);
    imprimirArray(array4, 5);
    cout << "---------------------------------------------\n";
    int tam34 = mezclar(array3, 3, array4, 5, array34);
    imprimirArray(array34, tam34);
    cout << "---------------------------------------------\n\n";

    // Caso de prueba 3
    double array5[] = {5, 6.3, 7.5, 8.3, 9.2};
    double array6[] = {1.0, 3.4, 6.3};
    double array56[20];

    // Se muestran los arrays a mezclar y el resultado
    cout << "Caso de prueba 3: " << endl;
    imprimirArray(array5, 5);
    imprimirArray(array6, 3);
    cout << "---------------------------------------------\n";
    int tam56 = mezclar(array5, 5, array6, 3, array56);
    imprimirArray(array56, tam56);
    cout << "---------------------------------------------\n\n";
}
