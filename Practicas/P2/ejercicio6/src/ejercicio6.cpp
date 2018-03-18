#include <iostream>
#include "utilidades.h"

using namespace std;

int main() {
    bool valida;

    // ---------------- CASO de prueba 1 ---------------
    // matrices para el primer caso de prueba: matriz11 y matriz12
    cout << "................ caso 1 .................." << endl;
    double matriz11[FIL][COL]={
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
    };

    double matriz12[FIL][COL]={
            {12, 11, 10},
            {9, 8, 7},
            {6, 5, 4},
            {3, 2, 1}
    };

    double resultado1[FIL][COL];
    int utilFilRes1, utilColRes1;

    // Se muestran la matrices de partida
    mostrarMatriz(matriz11, 3, 4);
    cout << endl;
    mostrarMatriz(matriz12, 4, 3);
    cout << endl;

    // Se realiza la multiplicacion
    valida=multiplicar(matriz11, 3, 4, matriz12, 4, 3, resultado1, utilFilRes1, utilColRes1);

    // Se muestra el resultado
    cout << "Operacion valida: " << valida << endl;

    // Se muestra la matriz resultado
    if(valida) {
        mostrarMatriz(resultado1, utilFilRes1, utilColRes1);
    }
    cout << endl;

    // ---------------- CASO de prueba 2 ---------------
    // matrices para el primer caso de prueba: matriz21 y matriz22
    cout << "................ caso 2 .................." << endl;
    double matriz21[FIL][COL]={
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
    };

    double matriz22[FIL][COL]={
            {16, 15, 14, 13},
            {12, 11, 10, 9},
            {8, 7, 6, 5},
            {4, 3, 2, 1}
    };

    double resultado2[FIL][COL];
    int utilFilRes2, utilColRes2;

    // Se muestran la matrices de partida
    mostrarMatriz(matriz21, 3, 4);
    cout << endl;
    mostrarMatriz(matriz22, 4, 3);
    cout << endl;

    // Se realiza la multiplicacion
    valida=multiplicar(matriz21, 4, 4, matriz22, 4, 4, resultado2, utilFilRes2, utilColRes2);

    // Se muestra el resultado
    cout << "Operacion valida: " << valida << endl;

    // Se muestra la matriz resultado
    if(valida) {
        mostrarMatriz(resultado2, utilFilRes2, utilColRes2);
    }
    cout << endl;

    // ---------------- CASO de prueba 3 ---------------
    // matrices para el primer caso de prueba: matriz31 y matriz32
    cout << "................ caso 3 .................." << endl;
    double matriz31[FIL][COL]={
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
    };

    double matriz32[FIL][COL]={
            {12, 11, 10},
            {9, 8, 7},
            {6, 5, 4}
    };

    double resultado3[FIL][COL];
    int utilFilRes3, utilColRes3;

    // Se muestran la matrices de partida
    mostrarMatriz(matriz31, 3, 4);
    cout << endl;
    mostrarMatriz(matriz32, 3, 3);
    cout << endl;

    // Se realiza la multiplicacion
    valida=multiplicar(matriz31, 3, 4, matriz32, 3, 3, resultado3, utilFilRes3, utilColRes3);

    // Se muestra el resultado
    cout << "Operacion valida: " << valida << endl;

    // Se muestra la matriz resultado
    if(valida) {
        mostrarMatriz(resultado3, utilFilRes3, utilColRes3);
    }
    cout << endl;
}
