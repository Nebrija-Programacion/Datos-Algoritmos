#include <iostream>
#include "gradoini1.h"
#include "gradoini2.h"
#include "gradomod1.h"
#include "gradomod2.h"
#include "persona.h"

using namespace std;

int main()
{

    persona h;
    gradoINI1 e;
    gradoINI2 g;
    gradoMOD1 m;
    gradoMOD2 k;
    int op;

    cout << "******** ALUMNOS NEBRIJA *********" << endl;
    cout << "1) En que curso estas? " << endl;
    cout << "Introduce un 1 (primero) o un 2 (segundo): ";
    cin >> op;


    if(op == 1){



        int op1;
        cout << "Si estudias informatica (11) si estudias moda (12): "; cin >> op1;
        if(op1 == 11){

            h.Carrera();
            h.DNI();
            h.Nombre();
            e.establecerNotas();
            e.mostrar1i();

            h.imprimirDatos();
            e.imprimirDatos();
        }else{
            if (op1 == 12){
                h.Carrera();
                h.DNI();
                h.Nombre();
                m.establecerNotas();
                m.mostrar1i();

                h.imprimirDatos();
                m.imprimirDatos();
            }

        }


    }

    else{
        if(op == 2){
        }
        int op2;
        cout << "Si estudias informatica (21) si estudias moda (22): "; cin >> op2;
        if (op2 == 21){
            h.Carrera();
            h.DNI();
            h.Nombre();
            g.establecerNotas();
            g.mostrar1i();

            h.imprimirDatos();
            g.imprimirDatos();
        }else{
            if (op2 == 22){
                h.Carrera();
                h.DNI();
                h.Nombre();
                k.establecerNotas();
                k.mostrar1i();

                h.imprimirDatos();
                k.imprimirDatos();
            }
        }

    }
    return 0;
}





