#include <iostream>
#include "alumno.h"

using namespace std;

void Alumno::print()
{
    if(next){
        cout << next->getID() << endl;
        next->print();
    }else{
        cout << "Esto es todo" << endl;
    }
}

void menu_main()
{
    cout << endl << endl<< endl << endl << endl;
    cout << "Agregar(1), Buscar(2), Salir(3)" << endl;
    cout << endl << endl<< endl << endl << endl;
}

void menu_add()
{
    cout << endl << endl<< endl << endl << endl;
    cout << "Principio(1), Final(2), Salir(3)" << endl;
    cout << endl << endl<< endl << endl << endl;
}

void menu_search()
{
    cout << endl << endl<< endl << endl << endl;
    cout << "Valor(1), Posicion(2), Salir(3)" << endl;
    cout << endl << endl<< endl << endl << endl;
}

void menu_search_position()
{
    cout << endl << endl<< endl << endl << endl;
    cout << "Mover(1), Eliminar(2), Salir(3)" << endl;
    cout << endl << endl<< endl << endl << endl;
}

void menu_search_dato()
{
    cout << endl << endl<< endl << endl << endl;
    cout << "Eliminar(1), Salir(2)" << endl;
    cout << endl << endl<< endl << endl << endl;
}

int main()
{
    Alumno* lista = new Alumno();
    int mm = 0;

    while(mm != 3){
        int valor = 0;
        int valor2 = 0;
        int ma = 0;
        int ms = 0;


        menu_main();
        cin >> mm;
        if(mm = 1){
            while (ma != 3) {
                menu_add();
                cin >> ma;
                if(ma == 1){
                    cout << "Dime el valor: " << endl;
                    cin >> valor;
                    lista->push_front(valor);
                }
                if(ma == 2){
                    cout << "Dime el valor: " << endl;
                    cin >> valor;
                    lista->push_back(valor);
                }
            }
        }
        if(mm = 2){
            int msp = 0;
            int msd = 0;
            while (ms != 3) {
                menu_search();
                cin >> ms;
                if(ms == 1){
                    while (msd != 2) {
                        cout << "Dime el valor" << endl;
                        cin >> valor;
                        Alumno * resultado = lista->search(valor);
                        if(resultado){
                            cout << resultado->getID();
                            int elim = resultado->getID();
                            menu_search_dato();
                            cin >> msd;
                            if(msd == 1){
                                if(lista->erase(elim) == true){
                                cout << "eliminado"<< endl;
                                }else{
                                    cout << "no se puedo eliminar"<< endl;
                                }
                            }
                        }else{
                            cout << "No encontrado " << endl;
                        }
                    }
                }
                if(ms == 2){
                    while (msp != 3) {
                        cout << "Dime la posicion" << endl;
                        cin >> valor;
                        Alumno * resultado = lista->at(valor);
                        int elim = resultado->getID();
                        if(resultado){
                            cout << resultado->getID();
                            menu_search_dato();
                            cin >> msd;
                            if(msd == 1){
                                cout << "Dime por cual lo quieres cambiar?" << endl;
                                cin >> valor2;
                                lista->move(valor, valor2);
                            }
                            if(msd == 2){
                                if(lista->erase(elim) == true){
                                cout << "eliminado"<< endl;
                                }else{
                                    cout << "no se pudo eliminar "<< endl;
                                }
                        }
                        }else{
                            cout << "No encontrado " << endl;
                        }
                    }

                }
            }
        }
    }
    delete lista; //borrar espacio de memoria
}
