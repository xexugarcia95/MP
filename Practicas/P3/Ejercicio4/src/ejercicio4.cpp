
#include <iostream>
#include <cstdlib>
#include "Lista.h"

using namespace std;

/*
 *
 */
int main(){
    double array[]= {1,2,3,4,5,6,7,8,9,10};
    Lista lista;

    // La lista se crea agregando elementos al final de la lista
    for(int i=0; i<10; i++){
        lista.agregarFinal(array[i]);
    }

    // Se muestra el contenido
    cout<<"Lista inicial: "<<endl;
    lista.mostrar();
    cout << endl;

    // Se comprueba que la longitud es 10
    if(lista.obtenerLongitud() == 10){
        cout << "Lista con longitud 10" << endl;
    }
    else{
        cout << "Problema: lista deberia tener longitud igual a 10" << endl;
    }
    cout << endl;

    // Se eliminan tres elementos del final
    lista.eliminarFinal();
    lista.eliminarFinal();
    lista.eliminarFinal();

    // Se comprueba que se han eliminado de forma correcta
    cout << "Lista tras liberar tres elementos del final: " << endl;
    lista.mostrar();
    cout << endl;

    // Se comprueba que la longitud sea 7
    if(lista.obtenerLongitud() == 7){
        cout << "Lista con longitud 7" << endl;
    }
    else{
        cout << "Problema: lista deberia tener longitud igual a 7" << endl;
    }
    cout << endl;

    // Se inserta un elemento al inicio
    lista.agregarInicio(0);

    // Se muestra su contenido
    cout << "Lista tras insertar 0 al inicio: " << endl;
    lista.mostrar();
    cout << endl;

    // Se comprueba que la longitud sea 8
    if(lista.obtenerLongitud() == 8){
        cout << "Lista con longitud 8" << endl;
    }
    else{
        cout << "Problema: lista deberia tener longitud igual a 8" << endl;
    }
    cout << endl;

    // Se obtiene ahora el elemento que esta en la posicion 3, que debe ser
    // 3
    Celda *pCelda3=lista.obtener(3);

    // Se comprueba que es 3
    if(pCelda3->obtenerInfo() != 3.0){
        cout << "Problema: el tercer elemento debe ser 3" << endl;
    }
    else{
        cout << "Elemento en posicion 3 es 3.0" << endl;
    }
    cout << endl;

    // Se obtiene el primer elemento
    Celda *pCelda0=lista.obtener(0);

    // Debe ser 0
    if(pCelda0->obtenerInfo() != 0.0){
        cout << "Problema: el primer elemento (0) debe ser 0.0" << endl;
    }
    else{
        cout << "Elemento en primera posicion es 0.0" << endl;
    }
    cout << endl;

    // Se obtiene el ultimo elemento
    Celda *pCeldaUltima=lista.obtener(lista.obtenerLongitud()-1);

    // Debe ser 7

    if(pCeldaUltima->obtenerInfo() != 7.0){
        cout << "Problema: el ultimo elemento debe ser 7.0" << endl;
    }
    else{
        cout << "Elemento en ultima posicion es 7.0" << endl;
    }
    cout << endl;

    // Se eliminan todas las celda
    lista.liberarEspacio();

}
