/**
 *  @file circulomedio.cpp
 *  @brief Calcula círculo con centro en el punto medio de la
 *         linea que une el centro de dos circulos y con radio
 *         la mitad de la distancia
 *  @warning Módulo no definitivo (creado para ser modificado)
 *  Un ejemplo de ejecución podria ser:
 *    Introduzca un circulo en formato radio-(x,y): 3-(0,0)
 *    Introduzca otro circulo: 4-(4,0)
 *    El círculo que pasa por los dos centros es: 2-(2,0)
 **/

#include <iostream>
#include <cmath>
using namespace std;

/**
 * Declaracion de la clase Punto
 */
class Punto {
private:
    /**
     * Coordenada x
     */
    double x;
    /**
     * Coordenada y
     */
    double y;
    
public:
    
    /**
     * Constructor por defecto: pondra a 0 el valor de las
     * coordenadas. A implementar
     */
    Punto() {
        ...................................................
    }
    
    /**
     * Constructor que permite asignar valor a los datos miembro.
     * A implementar
     * @param vx
     * @param vy
     */
    Punto(double vx, double vy) {
        ...................................................
    }
    
    /**
     * Metodo de acceso al dato miembro x. A implementar
     * @return
     */
    double getX() const {
        ...................................................
    }
    
    /**
     * Metodo de acceso al dato miembro y. A implementar
     * @return
     */
    double getY() const {
        ...................................................
    }
    
    /**
     * Metodo para asignar valor al dato miembro x. A implementar
     * @param vx
     */
    void setX(double vx) {
        ...................................................
    }
    
    /**
     * Metodo para asignar valor al dato miembro Y. A implementar
     * @param vy
     */
    void setY(double vy) {
        ...................................................
    }
    
    /**
     * Muestra el contenido del objeto por pantalla. A implementar
     * fuera del ambito de declaracion de la clase. Por eso aparece
     * aqui unicamente la declaracion
     */
    void mostrar() const;
    
    /**
     * Metodo para preguntar los valores de los datos miembro al
     * usuario. Por implementar, fuera del ambito de la clase
     */
    void leerDatos();
};

/**
 * Muestra el contenido del objeto por pantalla. A implementar
 */
void Punto::mostrar() const {
    // Formato de escritura del punto: (x,y)
    ...................................................
}

/**
 * Metodo para preguntar los valores de los datos miembro al
 * usuario. Por implementar
 */
void Punto::leerDatos(){
    // Se leen los datos del usaurio
    ...................................................
}

/**
 * @brief Calcula la distancia entre dos puntos. Se trata de
 * una funcion externa a la clase Punto. A implementar
 * @param p1 primer punto
 * @param p2 segundo punto
 * @return la distancia entre el punto @a p1 y el punto @a p2
 */
double calcularDistancia(Punto p1, Punto p2) {
    ...................................................
}

/**
 * @brief Calcula el punto que está entre dos puntos dados con distancia
 * mínima a ambos. Se trata de una funcion externa a la clase Punto. A
 * implementar
 * @param p1 primer punto
 * @param p2 segundo punto
 * @return un punto entre el punto @a p1 y el punto @a p2 con distancia
 * mínima a ambos
 */
Punto calcularPuntoMedio(Punto p1, Punto p2) {
    ...................................................
}

/**
 * Declaracion de la clase Circulo
 */
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
        ...................................................
    }
    
    /**
     * Constructor que permite asignar valor a los datos
     * miembro del objeto. A implementar
     * @param vcentro
     * @param vradio
     */
    Circulo(Punto vcentro, double vradio) {
        ...................................................
    }
    
    /**
     * Metodo para acceder al valor del dato miembro centro.
     * A implementar
     * @return
     */
    Punto getCentro() const {
        ...................................................
    }
    
    /**
     * Metodo para acceder al valor del dato miembro radio
     * A implementar
     * @return
     */
    double getRadio() const {
        ...................................................
    }
    
    /**
     * Metodo para asignar el valor del dato miembro centro. A
     * implementar
     * @param puntoCentro
     */
    void setCentro(Punto puntoCentro){
        ...................................................
    }
    
    /**
     * Metodo para asignar el valor del radio. A implementar
     * @param valorRadio
     */
    void setRadio(double valorRadio){
        ...................................................
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

/**
 * Metodo para mostrar por pantalla los datos de un objeto.
 */
void Circulo::mostrar() const {
    // Formato de escritura del círculo: radio - (x,y)
    ...................................................
}

/**
 * Metodo para preguntar los valores de los datos miembro al
 * usuario. Por implementar (se recomienda leer el radio y 
 * delegar en la clase Punto la lectura del punto que hace de
 * centro)
 */
void Circulo::leerDatos(){
    ...................................................
}

/**
 * Metodo para calcular el area de un circulo
 * @return
 */
double Circulo::calcularArea() const {
    // Se calcula el area
    double area=2*M_PI*pow(radio,2);
    
    // Se devuelve el resultado
    return area;
}

/**
 * @brief Calcula la distancia entre dos circulos. Funcion externa a
 * ambas clases
 * @param c1 primer círculo
 * @param c2 segundo círculo
 * @return la distancia entre el círculo @a c1 y el círculo @a c2
 * La distancia entre dos círculos se define como la distancia entre los
 * centros menos los dos radios.
 * Nótese que la distancia puede ser negativa si los círculos se intersecan
 */
double calcularDistancia(Circulo c1, Circulo c2) {
    // Se recuperan los centros de ambos circulos
    Punto cc1=c1.getCentro();
    Punto cc2=c2.getCentro();
    
    // Se calcula la distancia entre los dos puntos
    double distancia=calcularDistancia(cc1, cc2);
    
    // Se devuelve el valor calculado
    return distancia;
}

/**
 * @brief Comprueba si un punto es interior a un círculo. FUncion externa
 * a las clases
 * @param p punto a comprobar
 * @param c circulo
 * @retval true si el punto @a p es interior al círculo @a c
 * @retval false en caso contrario
 */
bool comprobarInterior(Punto p, Circulo c) {
    bool interior=false;
    
    // Se calcula si la distancia entre el punto y el centro
    // del circulo es menor que el radio del circulo
    Punto cc=c.getCentro();
    double radio=c.getRadio();
    
    // Se calcula la distancia
    double distancia=calcularDistancia(p, cc);
    
    // Si es interior, se cambia el valor del flag
    if(distancia <= radio){
        interior=true;
    }
    
    // Se devuelve el valor de interior
    return interior;
}

/**
 * Programa principal para probar el codigo
 * @return
 */
int main() {
    Circulo c1, c2;
    
    do {
        // Se leen los datos del circulo 1
        c1.leerDatos();
        
        // Igual con el circulo 2
        c2.leerDatos();
    } while (calcularDistancia(c1.getCentro(), c2.getCentro()) == 0);
    
    // Se calcula la el punto medio de los dos centros
    Punto puntoMedio=calcularPuntoMedio(c1.getCentro(), c2.getCentro());
    
    // Se crea objeto de la clase circulo a partir de los
    // datos
    Circulo c3(puntoMedio, calcularDistancia(c1.getCentro(), c2.getCentro()) / 2);
    
    // Se muestra el resultado por pantalla
    cout << "El círculo que pasa por los dos centros es: ";
    c3.mostrar();
    cout << endl;
}
