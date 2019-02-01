#include <iostream>
#include <ListaSimple.h>

using namespace std;
int menu(){
    int option;
    cout << "----------------------------------------------       "  << endl;
    cout << "1: Anadir  numero entero al final de la lista           "  << endl;
    cout << "2: Filtrar por elementos mayores de un numero        "  << endl;
    cout << "3: Filtrar por elementos menores de un numero        "  << endl;
    cout << "4: Filtrar por numeros dentro de un intervalo        "  << endl;
    cout << "5: Filtrar por elementos iguales a  un numero        "  << endl;
    cout << "6: Imprimir lista                                    "  << endl;
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

            case 1:
            {
                bool b{true};
                while(b){
                    int a;
                    cout << "Introduzca el numero que desee anadir. " << endl;
                    cin  >> a;
                    head->push_back(a);
                    cout << "¿Desea anadir algun otro? *Si: pulse 1.  *No: pulse 0. " << endl;
                    cin  >> b;
                }
                break;
            }

            case 2:
            {
                bool b{true};
                while(b){
                    int a;
                    cout << "Filtrar por numeros mayores a: " << endl;
                    cin  >> a;
                    head->greater_than(a);
                    cout << "¿Desea filtrar a partir de algun otro? *Si: pulse 1.  *No: pulse 0. " << endl;
                    cin  >> b;
                }
                break;
            }

            case 3:
            {
                bool b{true};
                while(b){
                    int a;
                    cout << "Filtrar por numeros menores a: " << endl;
                    cin  >> a;
                    head->lesser_than(a);
                    cout << "¿Desea filtrar a partir de algun otro? *Si: pulse 1.  *No: pulse 0. " << endl;
                    cin  >> b;
                }
                break;
            }

            case 4:
            {
                bool b{true};
                while(b){
                    int a;
                    cout << "Filtrar por numeros coincidentes a: " << endl;
                    cin  >> a;
                    head->equal_to(a);
                    cout << "¿Desea filtar algun otro? *Si: pulse 1.  *No: pulse 0. " << endl;
                    cin  >> b;
                }
                break;
            }

            case 5:
            {
                bool b{true};
                while(b){
                    int i,j;
                    cout << "Introduzca la primera coordenada del intervalo " << endl;
                    cin  >> i;
                    cout << "Introduzca la segunda coordenada. " << endl;
                    cin  >> j;
                    head->within_interval(i, j);
                    cout << "¿Desea filtrar algun otro intervalo? *Si: pulse 1.  *No: pulse 0. " << endl;
                    cin  >> b;
                }
                break;
            }

            case 6:
            {
                cout << "-------------------SU LISTA----------------" << endl;
                head ->print();
                break;
            }

            default:
                option = 0;
                break;
        }
    }while (option);
    return 0;
}
