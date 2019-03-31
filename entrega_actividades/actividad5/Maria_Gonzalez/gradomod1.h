#ifndef GRADOMOD1_H
#define GRADOMOD1_H

//clase grado DISEÑO DE MODA 1 AÑO
// es una clase hija de persona

class gradoMOD1
{
public:
    gradoMOD1();
    void establecerNotas();//se utiliza void cuando el usuario tiene que introducir algun dato
    float mostrar1i();//se utiliza float cuando no se devuelven datos (ej, operaciones)
    void imprimirDatos();// imprime una lista con los datos
private:
    //los datos que se van a pedir se inicializan en private
    int nm11, nm12, nm13;
    float media;
};

#endif // GRADOMOD1_H
