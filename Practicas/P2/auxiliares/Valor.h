
#ifndef VALOR_H
#define VALOR_H

#include <iostream>

using namespace std;

class Valor{
  public:
    int fila;
    int columna;
    double valor;

    /**
     * Constructor por defecto
     */
    Valor(){
    }

    /**
     * Constructor de la clase
     * @param fila
     * @param columna
     * @param valor
     */
    Valor(int fila, int columna, double valor){
        this->fila=fila;
        this->columna=columna;
        this->valor=valor;
    }

    /**
     * Metodo paa mostrar el contenido de un objeto
     */
    void mostrar(){
        cout << "{" << fila << ", " << columna << ", " << valor << "} ";
    }
};
#endif //VALOR_H
