
#ifndef LISTA_H
#define    LISTA_H

#include "Celda.h"

/**
 * Clase Lista, clase para acceder a la funcionalidad
 * de una lista enlazada
 */
class Lista {
private:
    /**
     * Puntero a la primera celda de la lista, que permite
     * acceder a la funcionalidad completa de la lista
     */
    Celda *contenido;

public:
    /**
     * Constructor de la clase
     */
    Lista();

    /**
     * Metodo para imrimir el contenido de la lista
     */
    void mostrar();

    /**
     * Metodo para obtener la longitud de la lista
     * @return
     */
    int obtenerLongitud();

    /**
     * Metodo para aniadir un elemento al final de la lista
     * @param dato
     */
    void agregarFinal(double dato);

    /**
     * Metodo para insertar un nuevo elemento al inicio de la lista
     * @param dato
     */
    void agregarInicio(double dato);

    /**
     * Metodo para imrimir el contenido de la lista
     * en sentido inverso: desde final a inicio
     */
    void imprimirInvertido();

    /**
     * Metodo para eliminar el ultimo elemento de la lista
     */
    void eliminarFinal();

    /**
     * Obtiene la celda que ocupa una determinada posicion
     * de la lista
     * @param posicion
     * @return direccion de la celda o null si no la encuentra
     */
    Celda *obtener(int posicion);

    /**
     * Metodo para insertar una celda en una determinada posicion
     * @param indice posicion de insercion
     * @param dato dato a insertar
     * @return
     */
    bool agregarPosicion(int indice, double dato);

    /**
     * Metodo para eliminar todas las celdas de la lista
     */
    void liberarEspacio();
};

#endif	/* LISTA_H */

