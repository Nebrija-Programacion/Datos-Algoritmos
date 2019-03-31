#ifndef GRADOMOD2_H
#define GRADOMOD2_H

// clase grado DISEÑO DE MODA 2 AÑO
// es una clase hija de persona


class gradoMOD2
{
public:
    gradoMOD2();
    void establecerNotas();//se utiliza void cuando el usuario tiene que introducir algun dato
    float mostrar1i();//se utiliza float cuando no se devuelven datos (ej, operaciones)
    void imprimirDatos();// imprime una lista con los datos
private:
    //los datos que se van a pedir se inicializan en private
    int nm21, nm22, nm23; // notas que se piden
    float media;
};

#endif // GRADOMOD2_H
