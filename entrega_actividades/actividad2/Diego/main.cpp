#include "alumno.h"


int main()
{
    int mm = 0;
    Alumno* lista = new Alumno();
    while(mm != 7){
        cout << "Agregar(1), Ver(2), Mayores(3),Iguales(4), Menores(5), Entre(6), Salir(7): " << endl;
        cin >> mm;

        if (mm == 1){
            int ID = 0;
            string Nombre = " ";
            cout << "Dime el ID y el Nombre: " << endl;
            cin >> ID;
            cin >> Nombre;
            lista->push_back(ID, Nombre);
        }
        if(mm == 2){
            lista->print();
        }
        if(mm == 3){
            int ID = 0;
            cout << "Dime el valor: " << endl;
            cin >> ID;
            lista->greater_than(ID);
        }
        if(mm == 4 ){
            int ID = 0;
            cout << "Dime el valor: " << endl;
            cin >> ID;
            lista->equal_to(ID);
        }
        if(mm == 5){
            int ID = 0;
            cout << "Dime el valor: " << endl;
            cin >> ID;
            lista->lesser_than(ID);
        }
        if(mm == 6){
            int ID = 0;
            int IDs = 0;
            cout << "Dime los valores(-+): " << endl;
            cin >> ID;
            cin >> IDs;
            lista->within_interval(ID,IDs);
        }
    }
}
