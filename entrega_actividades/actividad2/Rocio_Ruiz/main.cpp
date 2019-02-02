
//ListaSimple

#include <iostream>
#include "ListaSimple.h"

using namespace std;
int menu(){
    int option;
    cout << "----------------------------------------------       "  << endl;
    cout << "1: Anadir numero entero al final de la lista         "  << endl;
    cout << "2: Filtrar por elementos mayores de un numero        "  << endl;
    cout << "3: Filtrar por elementos menores de un numero        "  << endl;
    cout << "4: Filtrar por elementos iguales a un numero         "  << endl;
    cout << "5: Filtrar por numeros dentro de un intervalo        "  << endl;
    cout << "6: Eliminar toda la lista (liberando memoria)        "  << endl;
    cout << "7: Imprimir lista                                    "  << endl;
    cout << "0: SALIR                                             "  << endl;
    cout << "----------------------------------------------       "  << endl;
    cin  >> option;

    return option;
}
int main() {

    int option;
    ListaSimple * head = new ListaSimple{0};

    do{
        option = menu();
        switch (option) {

            case 1: // Añadir un numero al final de la LISTA ----------------
            {
                int b{1};
                while (b){
                    int a;
                    cout << "Introduzca el numero que desee anadir. " << endl;
                    cin  >> a;
                    head->push_back(a);
                    cout << "¿Desea anadir algun otro? *Si: pulse 1.  *No: pulse 0. " << endl;
                    cin  >> b;
                }
                head->printAll();  // Imprimo la lista para comprobar
                break;
            }
            case 2: // Filtrar elementos MAYORES que un numero --------------
            {
                ListaSimple *p;
                int b{1};
                while(b){
                    int a;
                    cout << "Filtrar por numeros mayores a: " << endl;
                    cin  >> a;
                    p = head->greater_than(a);
                    p->printAll();                     // Imprimo la lista para ver resultados
                    p->deleteAll();                 // Borra toda la lista entera, incluida la HEAD
                    cout << "¿Desea filtrar a partir de algun otro? *Si: pulse 1.  *No: pulse 0. " << endl;
                    cin  >> b;
                }
                break;
            }
            case 3: // Filtrar elementos MENORES que un numero --------------
            {
                ListaSimple *p;
                int b{1};
                while(b){
                    int a;
                    cout << "Filtrar por numeros menores a: " << endl;
                    cin  >> a;
                    p = head->lesser_than(a);
                    p->printAll();                     // Imprimo la lista para ver resultados
                    p->deleteAll();                 // Borra toda la lista entera, incluida la HEAD
                    cout << "¿Desea filtrar a partir de algun otro? *Si: pulse 1.  *No: pulse 0. " << endl;
                    cin  >> b;
                }
                break;
            }
            case 4: // Filtrar elementos IGUALES a un numero ----------------
            {
                ListaSimple *p;
                int b{1};
                while(b){
                    int a;
                    cout << "Filtrar por numeros coincidentes a: " << endl;
                    cin  >> a;
                    p = head->equal_to(a);
                    p->printAll();                     // Imprimo la lista para ver resultados
                    p->deleteAll();                 // Borra toda la lista entera, incluida la HEAD
                    cout << "¿Desea filtar algun otro? *Si: pulse 1.  *No: pulse 0. " << endl;
                    cin  >> b;
                }
                break;
            }
            case 5: // Filtrar elementos en un INTERVALO --------------------
            {
                ListaSimple *p;
                int b{1};
                while(b){
                    int i,j;
                    cout << "Introduzca la primera coordenada del intervalo " << endl;
                    cin  >> i;
                    cout << "Introduzca la segunda coordenada. " << endl;
                    cin  >> j;
                    p = head->within_interval(i, j);
                    p->printAll();                     // Imprimo la lista para ver resultados
                    p->deleteAll();                 // Borra toda la lista entera, incluida la HEAD
                    cout << "¿Desea filtrar algun otro intervalo? *Si: pulse 1.  *No: pulse 0. " << endl;
                    cin  >> b;
                }
                break;
            }
            case 6: // BORRAR TODA LA LISTA  ------------------------------
            {
                head->deleteAll();                // se borra todo incluyendo la cabeza HEAD ---------------------
                head = new ListaSimple{0};        // se crea una nueva HEAD, con data=0; size=0; next=nullptr
                head->printAll();                    // no debia salir nada -----
                break;
            }
            case 7: // IMPRIMIR LA LISTA  --------------------
            {
                cout << "-------------------SU LISTA----------------" << endl;
                head->printAll();
                break;
            }
            default:
                option = 0;
                break;
        }
    }while (option);
    return 0;
}
