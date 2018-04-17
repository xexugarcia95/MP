

#ifndef CELDA_H
#define    CELDA_H

/**
 * Clase Celda para implementar una lista enlazada
 */
class Celda {
private:
    /**
     * Dato miembro para almacenar la informacion de la celda
     */
    double info;

    /**
     * Puntero a la siguiente celda que compone la lista
     */
    Celda *sig;
public:

    /**
     * Constructor de la clase
     */
    Celda(double info);

    /**
     * Recupera el valor almacenado en una celda
     * @return
     */
    double obtenerInfo();

    /**
     * Devuelve puntero a la celda siguiente
     * @return sig
     */
    Celda *obtenerSiguiente();

    /**
     * Se asigna valor cero al puntero siguiente
     */
    void anularSiguiente();

    /**
     * Se asigna el valor de siguiente
     */
    void asignarSiguiente(Celda *pCelda);

    /**
     * Metodo para imprimir el contenido de una celda
     */
    void mostrar();
};


#endif	/* CELDA_H */

