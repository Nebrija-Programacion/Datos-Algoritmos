#ifndef GRADOINI2_H
#define GRADOINI2_H

//clase grado INGENIERIA INFORMATICA 2 AÑO
// es una clase hija de persona

class gradoINI2
{
public:
    gradoINI2();

    void establecerNotas();// se utiliza void cuando el usuario tiene que introducir algun dato
    float mostrar1i(); // se utiliza float cuando no se devuelven datos (ej, operaciones)
    void imprimirDatos(); // imprime una lista con los datos
private:
    //los datos que se van a pedir se inicializan en private
    int ni21, ni22, ni23; // las notas que se van a pedir
    float media;
};

#endif // GRADOINI2_H
