/* 
 * File:   lista.h
 * Author: mgomez
 *
 * Created on 9 de junio de 2016, 15:13
 */

#ifndef LISTA_H
#define    LISTA_H

#include<iostream>

using namespace std;

class Celda {
public:
    Celda *siguiente;
    double valor;

    /**
     * Constructor
     * @param valor
     */
    Celda(double valor) {
        this->valor = valor;
        siguiente = 0;
    }
};

class Lista {
private :
    Celda *primero;

public :
    /**
     * Constructor por defecto
     */
    Lista() {
        primero = 0;
    }

    /**
     * Metodo para devolver la longitud de la lista
     * @return
     */
    int longitud();

    /**
     * Metodo para agregar elemento a la lista, al inicio
     * @param valor
     */
    void agregarElemento(double valor);

    /**
     * Metodo para imprimir el contenido de la lista
     */
    void imprimir();

    /**
     * Metodo para particionar la lista en trozos
     * @param tam
     * @param util
     * @return
     */
    Lista *particionar(int tam, int &util);
};

#endif	/* LISTA_H */

