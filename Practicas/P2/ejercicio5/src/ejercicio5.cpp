#include <iostream>

#include "utilidades.h"

using namespace std;

int main() {
    // Se declara la cadena base
    char base[] = "cadena base para prueba de insercion";

    // Se declara la cadena que se inserta
    char aInsertar[] = "-agregado-";

    // Se declaran las cadenas de resultado, con espacio suficiente
    char resultado1[100];
    char resultado2[100];
    char resultado3[100];
    char resultado4[100];

    // Se declara la variable que indica la posicion de insercion
    int posicion;

    // Se declara la variable a usar para recoger el resultado de la
    // operacion
    bool flag;

    // Caso de prueba 1
    cout << "-------------------------- caso de prueba 1 -------------------------\n";
    posicion=0;
    cout << "Insercion en posicion: " << posicion << endl;
    flag=insertarCadena(base, aInsertar, posicion, resultado1);
    cout << "Insercion posible: " << flag << endl;
    if (flag == true){
        cout << resultado1 << endl;
    }
    cout << "---------------------------------------------------------------------\n";

    // Caso de prueba 2
    cout << "-------------------------- caso de prueba 2 -------------------------\n";
    posicion=36;
    cout << "Insercion en posicion: " << posicion << endl;
    flag=insertarCadena(base, aInsertar, posicion, resultado2);
    cout << "Insercion posible: " << flag << endl;
    if (flag == true){
        cout << resultado2 << endl;
    }
    cout << "---------------------------------------------------------------------\n";

    // Caso de prueba 3
    cout << "-------------------------- caso de prueba 3 -------------------------\n";
    posicion=12;
    cout << "Insercion en posicion: " << posicion << endl;
    flag=insertarCadena(base, aInsertar, posicion, resultado3);
    cout << "Insercion posible: " << flag << endl;
    if (flag == true){
        cout << resultado3 << endl;
    }
    cout << "---------------------------------------------------------------------\n";

    // Caso de prueba 4
    cout << "-------------------------- caso de prueba 4 -------------------------\n";
    posicion=50;
    cout << "Insercion en posicion invalida: " << posicion << endl;
    flag=insertarCadena(base, aInsertar, posicion, resultado4);
    cout << "Insercion posible: " << flag << endl;
    if (flag == true){
        cout << resultado4 << endl;
    }
    cout << "---------------------------------------------------------------------\n";
}
