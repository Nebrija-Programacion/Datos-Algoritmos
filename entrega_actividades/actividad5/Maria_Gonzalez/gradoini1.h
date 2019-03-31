#ifndef GRADOINI1_H
#define GRADOINI1_H

//clase grado INGENIERIA INFORMATICA 1 AÑO
// es una clase hija de persona

class gradoINI1
{
public: 
    gradoINI1();

    void establecerNotas();// se utiliza void cuando el usuario tiene que introducir algun dato
    float mostrar1i(); // se utiliza float cuando no se devuelven datos (ej, operaciones)
    void imprimirDatos(); // imprime una lista con los datos
private:
    //los datos que se van a pedir se inicializan en private
    int ni11, ni12, ni13, ni14; //las notas que se van a pedir
    float media;


};

#endif // GRADOINI1_H
