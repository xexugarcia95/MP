#include <iostream>

#include "utilidades.h"

using namespace std;

/**
 * @brief funcion main para probar
 * @return
 */
int main() {
    char cadena[] = "Hola, primera cadena de ejemplo";

    // Caso de prueba 1
    char subcadena1[] = "no coincide";

    // Se localiza en cadena
    int pos = localizarSubcadena(cadena, subcadena1);
    cout << "------------------------ caso prueba 1 -----------------------\n";
    if (pos != -1) {
        cout << subcadena1 << " - es subcadena de - " << cadena << ". Posicion: " << pos << endl;
    }
    else {
        cout << subcadena1 << " - no es subcadena de - " << cadena << endl;
    }
    cout << "--------------------------------------------------------------\n" << endl;

    // Caso 2: se prueba contra cadena (coincidencia al inicio)
    char subcadena2[] = "Hol" ;

    // Se localiza en cadena
    pos = localizarSubcadena(cadena, subcadena2);
    cout << "------------------------ caso prueba 2 -----------------------\n";
    if (pos != -1) {
        cout << subcadena2 << " - es subcadena de - " << cadena << ". Posicion: " << pos << endl;
    }
    else {
        cout << subcadena2 << " - no es subcadena de - " << cadena << endl;
    }
    cout << "--------------------------------------------------------------\n" << endl;

    // Caso 3: se prueba contra cadena (coincidencia al final)
    char subcadena3[] = "plo";

    // Se localiza en cadena
    pos = localizarSubcadena(cadena, subcadena3);
    cout << "------------------------ caso prueba 3 -----------------------\n";
    if (pos != -1) {
        cout << subcadena3 << " - es subcadena de - " << cadena << ". Posicion: " << pos << endl;
    }
    else {
        cout << subcadena3 << " - no es subcadena de - " << cadena << endl;
    }
    cout << "--------------------------------------------------------------\n" << endl;

    // Caso 4: se prueba contra cadena (coincidencia parte central)
    char subcadena4[] = "cad";

    // Se localiza en cadena
    pos = localizarSubcadena(cadena, subcadena4);
    cout << "------------------------ caso prueba 4 -----------------------\n";
    if (pos != -1) {
        cout << subcadena4 << " - es subcadena de - " << cadena << ". Posicion: " << pos << endl;
    }
    else {
        cout << subcadena4 << " - no es subcadena de - " << cadena << endl;
    }
    cout << "--------------------------------------------------------------\n" << endl;

    // Caso 5: se prueba contra cadena (coincidencia parte central,
    // pero no completa)
    char subcadena5[] = "cadenita";

    // Se localiza en cadena
    pos = localizarSubcadena(cadena, subcadena5);
    cout << "------------------------ caso prueba 5 -----------------------\n";
    if (pos != -1) {
        cout << subcadena5 << " - es subcadena de - " << cadena << ". Posicion: " << pos << endl;
    }
    else {
        cout << subcadena5 << " - no es subcadena de - " << cadena << endl;
    }
    cout << "--------------------------------------------------------------\n" << endl;
}