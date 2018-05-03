/* 
 * File:   main.cpp
 * Author: mgomez
 *
 * Created on 14 de abril de 2013, 18:28
 */
#include <iostream>
#include "Matriz2D.h"

using namespace std;

/*
 * 
 */
int main() {
    // Se crea un objeto de la clase Matriz2D con 5 filas y 5 columnas
    Matriz2D obj1(5, 5);

    // Se asignan los valores
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            obj1.asignarValor(i - 1, j - 1, i * j);
        }
    }

    // Se muestra el contenido
    cout << "Matriz original: " << endl;
    obj1.mostrarPantalla();

    // Se realiza la copia
    Matriz2D *obj2 = obj1.copiarMatriz();

    // Se muestra la matriz creada mediante copia
    cout << "Matriz copiada a partir de la original: ";
    obj2->mostrarPantalla();

    // Se libera obj2
    delete obj2;

    // Se usa obj2 para apuntar a la submatriz de fila2 a fila4
    // y columna 1 a columna3
    cout << "Submatriz desde elemento (2,1) hasta (4,3)" << endl;
    obj2 = obj1.extrarSubmatriz(2, 1, 4, 3);

    // Se muestra por pantalla obj2 y luego se libera
    if (obj2 != 0) {
        obj2->mostrarPantalla();
        delete obj2;
    }

    // Se elimina de obj1 la fila 0
    cout << "Matriz obtenida al eliminar la primera fila: " << endl;
    obj1.eliminarFila(0);

    // Se vuelve a imprimir obj1
    obj1.mostrarPantalla();

    // Se elimina la columna 1 de obj1
    cout << "Matriz obtenida al eliminar la columna 1 sobre la anterior: " << endl;
    obj1.eliminarColumna(1);
    obj1.mostrarPantalla();
}

