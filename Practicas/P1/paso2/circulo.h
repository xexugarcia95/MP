#ifndef __CIRCULO_H_
#define __CIRCULO_H_

#include "punto.h"

class Circulo {
private:
    /**
     * Centro del circulo
     */
    Punto centro;

    /**
     * Radio del circulo
     */
    double radio;
public:

    /**
     * Constructor por defecto. Asigna 0 a todos los
     * datos miembro. Por implementar
     */
    Circulo() {
        centro.setX(0);
        centro.setY(0);
        radio = 0;
    }

    /**
     * Constructor que permite asignar valor a los datos
     * miembro del objeto. A implementar
     * @param vcentro
     * @param vradio
     */
    Circulo(Punto vcentro, double vradio) {
        centro.setX(vcentro.getX());
        centro.setY(vcentro.getY());
        radio = vradio;
    }

    /**
     * Metodo para acceder al valor del dato miembro centro.
     * A implementar
     * @return
     */
    Punto getCentro() const {
        return centro;
    }

    /**
     * Metodo para acceder al valor del dato miembro radio
     * A implementar
     * @return
     */
    double getRadio() const {
        radio;
    }

    /**
     * Metodo para asignar el valor del dato miembro centro. A
     * implementar
     * @param puntoCentro
     */
    void setCentro(Punto puntoCentro){
        centro.setX(puntoCentro.getX());
        centro.setY(puntoCentro.getY());
    }

    /**
     * Metodo para asignar el valor del radio. A implementar
     * @param valorRadio
     */
    void setRadio(double valorRadio){
        radio = valorRadio;
    }

    /**
     * Metodo para mostrar por pantalla los datos de un objeto.
     * A implementar fuera del cuerpo de la clase
     */
    void mostrar() const;

    /**
     * Metodo para preguntar los valores de los datos miembro al
     * usuario. Por implementar, fuera del ambito de la clase
     */
    void leerDatos();

    /**
     * Metodo para calcular el area de un objeto. A implementar
     * fuera del cuerpo de la clase
     * @return
     */
    double calcularArea() const;

};



#endif