#include <iostream>

#include "utilidades.h"

int main() {
    const int DIM_ARRAY = 100;
    //{7,89,75,5,8,89,4}; Caso general
    //{7,6,5,4,3,2,1}; Mayor secuencia es un solo elemento
    //{1,2,3,4,5,1,2}; Mayor secuencia está al principio
    //{1,2,1,2,3,4,5}; Mayor secuencia está al final
    //{1,2,3,4,5,6,7}; Mayor secuencia es todo el vector
    // Caso 1
    int array1[DIM_ARRAY] = {7, 89, 75, 5, 8, 89, 97};
    int utilArray = 7;
    int secuenciaCreciente[DIM_ARRAY];
    int utilSecuenciaCreciente;

    cout << "\n------------------------- caso prueba 1 --------------------------" << endl;
    imprimirArray(array1, utilArray);
    obtenerMayorSecuenciaMonotonaCreciente(array1, utilArray, secuenciaCreciente,
                                           utilSecuenciaCreciente);
    imprimirArray(secuenciaCreciente, utilSecuenciaCreciente);
    cout << "--------------------------------------------------------------------\n";

    int array2[DIM_ARRAY] = {7, 6, 5, 4, 3, 2 ,1};
    cout << "\n------------------------- caso prueba 2 --------------------------" << endl;
    imprimirArray(array2, utilArray);
    obtenerMayorSecuenciaMonotonaCreciente(array2, utilArray, secuenciaCreciente,
                                           utilSecuenciaCreciente);
    imprimirArray(secuenciaCreciente, utilSecuenciaCreciente);
    cout << "--------------------------------------------------------------------\n";

    int array3[DIM_ARRAY] = {1,2,3,4,5,1,2};
    cout << "\n------------------------- caso prueba 3 --------------------------" << endl;
    imprimirArray(array3, utilArray);
    obtenerMayorSecuenciaMonotonaCreciente(array3, utilArray, secuenciaCreciente,
                                           utilSecuenciaCreciente);
    imprimirArray(secuenciaCreciente, utilSecuenciaCreciente);
    cout << "--------------------------------------------------------------------\n";

    int array4[DIM_ARRAY] = {1,2,1,2,3,4,5};
    cout << "\n------------------------- caso prueba 4 --------------------------" << endl;
    imprimirArray(array4, utilArray);
    obtenerMayorSecuenciaMonotonaCreciente(array4, utilArray, secuenciaCreciente,
                                           utilSecuenciaCreciente);
    imprimirArray(secuenciaCreciente, utilSecuenciaCreciente);
    cout << "--------------------------------------------------------------------\n";

    int array5[DIM_ARRAY] = {1,2,3,4,5,6,7};
    cout << "\n------------------------- caso prueba 5 --------------------------" << endl;
    imprimirArray(array5, utilArray);
    obtenerMayorSecuenciaMonotonaCreciente(array5, utilArray, secuenciaCreciente,
                                           utilSecuenciaCreciente);
    imprimirArray(secuenciaCreciente, utilSecuenciaCreciente);
    cout << "--------------------------------------------------------------------\n";
}
