#include <iostream>
#include "lista.h"

using namespace std;

int main() {

    // Se crea una lista
    Lista lista;
    int util;

    // Caso de prueba 1: se agregan 5 elementos, para que coincida
    // con el ejemplo inicial del grafico
    lista.agregarElemento(1);
    lista.agregarElemento(2);
    lista.agregarElemento(3);
    lista.agregarElemento(4);
    lista.agregarElemento(5);

    cout << "-------------------- Caso de prueba 1 ------------------" << endl;
    lista.imprimir();

    // Se realiza el particionado en secciones de 2 celdas
    Lista *trozos = lista.particionar(2, util);

    // Se muestran las listas resultantes
    for (int i = 0; i < util; i++) {
        cout << "\nSeccion " << i << ": ";

        // Se muestra la lista de la seccion correspondiente
        trozos[i].imprimir();
        cout << "---------------------------" << endl;
    }

    // Caso de prueba 2: se agregan 6 elementos, para que el numero
    // de celdas sea par
    Lista lista2;
    lista2.agregarElemento(1);
    lista2.agregarElemento(2);
    lista2.agregarElemento(3);
    lista2.agregarElemento(4);
    lista2.agregarElemento(5);
    lista2.agregarElemento(6);

    cout << "-------------------- Caso de prueba 2 ------------------" << endl;
    lista2.imprimir();

    // Se realiza el particionado en secciones de 2 celdas
    trozos = lista2.particionar(2, util);

    // Se muestran las listas resultantes
    for (int i = 0; i < util; i++) {
        cout << "\nSeccion " << i << ": ";

        // Se muestra la lista de la seccion correspondiente
        trozos[i].imprimir();
        cout << "---------------------------" << endl;
    }

    // Caso de prueba 3: se agregan 1 elementos unicamente
    Lista lista3;
    lista3.agregarElemento(1);

    cout << "-------------------- Caso de prueba 3 ------------------" << endl;
    lista3.imprimir();

    // Se realiza el particionado en secciones de 2 celdas
    trozos = lista3.particionar(2, util);

    // Se muestran las listas resultantes
    for (int i = 0; i < util; i++) {
        cout << "\nSeccion " << i << ": ";

        // Se muestra la lista de la seccion correspondiente
        trozos[i].imprimir();
        cout << "---------------------------" << endl;
    }
}
