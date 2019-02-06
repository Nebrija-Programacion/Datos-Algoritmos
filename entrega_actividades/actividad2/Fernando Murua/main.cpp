#include <iostream>
#include "listaint.h"

using namespace std;
void menu(){
    cout << "Introduce la opcion que quieras hacer. " << endl;
    cout << "(0)Añadir elementos. " << endl;
    cout <<"(1)Imprimir elementos. "<< endl;
    cout <<"(2)Filtrar la lista por los numeros mayores al que tu introduzcas. " << endl;
    cout <<"(3)Filtrar la lista por los numeros iguales al que tu introduzcas. " << endl;
    cout << "(4)Filtrar la lista por los numeros menores al que tu introduzcas. " << endl;
    cout << "(5)Filtrar la lista dentro de un intervalo de numeros. " << endl;
    cout <<"(6)Salir del programa. " << endl;
}
int main()
{
int opcion;
int menus=0;
LIstaInt *Lista=new LIstaInt(0);
menu();
while (menus!=1) {
    cout << "Introduce la opcion que quieras hacer: " ;
    cin >>opcion;
    if(opcion==0){
        cout << "Has elegido Anadir un elemento a la lista" << endl;
        int elemento;
        cout <<"Introduce el elemento que quieras anadir: ";
        cin >>elemento;
        Lista->push_back(elemento);
    }
    if(opcion==1){
        cout << "Has elegido impirmir los elementos. " << endl;
        Lista->print();
    }
    if(opcion==2){
        LIstaInt *aux=new LIstaInt(0);
        cout << "Has elegido filtrar la lista por los numeros mayores " << endl;
        int _aux;
        cout << "Introduce el numero para filtrar la lista:";
        cin >> _aux;
        for(LIstaInt *it=Lista->getNext();it!=nullptr;it=it->getNext()){
            if(it->getDato()>_aux){
                aux->push_back(it->getDato());
            }
        }
        cout <<"Se ha filtrado la lista y los valores obetenidos han sido: " << endl;
        aux->print();
    }
    if(opcion==3){
                LIstaInt *aux=new LIstaInt(0);
            cout << "Has elegido filtrar la lista por los numeros iguales." << endl;
            int _aux;
        cout << "Introduce el numero para filtrar la lista:";
        cin >> _aux;
              for(LIstaInt *it=Lista->getNext();it!=nullptr;it=it->getNext()){
                   if(it->getDato()==_aux){
                            aux->push_back(it->getDato());
                    }
               }
                    cout <<"Se ha filtrado la lista y los valores obetenidos han sido: " << endl;
                    aux->print();
        }
    if(opcion==4){
        LIstaInt *aux=new LIstaInt(0);
        cout << "Has elegido filtrar la lista por los numeros menores. " << endl;
        int _aux;
        cout << "Introduce el numero para filtrar la lista:";
        cin >> _aux;
        for(LIstaInt *it=Lista->getNext();it!=nullptr;it=it->getNext()){
            if(it->getDato()<_aux){
                aux->push_back(it->getDato());
            }
        }
        cout <<"Se ha filtrado la lista y los valores obetenidos han sido: " << endl;
        aux->print();
    }

    if(opcion==5){
        LIstaInt *aux=new LIstaInt(0);
            cout << "Has elegido filtrar la lista por los numeros dentro de un intervalo. " << endl;
            int _aux;
            int _aux1;
            cout << "Introduce el numero para filtrar la lista:";
            cin >> _aux;
            cout << "Introduce el otro numero para filtrar la lista: " ;
            cin >>_aux1;
                    while(_aux1<_aux){
                cout <<"Introduce un numero mayor que el primero que has introducido: " << endl;
                cin >> _aux1;
            }
            for(LIstaInt *it=Lista->getNext();it!=nullptr;it=it->getNext()){
                if((it->getDato()>_aux)&&(it->getDato()<_aux1)){
                    aux->push_back(it->getDato());
                }
            }
            cout <<"Se ha filtrado la lista y los valores obetenidos han sido: " << endl;
            aux->print();
        }
    if(opcion==6){
        cout <<"Salediendo del programa. " << endl;
        menus=1;
    }




}
return 0;
}
