#include "arbol.h"

int main()
{
    Arbol ar;
    Node* Diego = new Node(new Humano("Diego", "Rodriguez", "Lozano"));
    Node* Diego_hermana = new Node(new Humano("Lucia", "Rodriguez", "Lozano"));
    Node* Diego_madre = new Node(new Humano("Sonsoles", "Lozano", "Saenz"));
    Node* Diego_padre = new Node(new Humano("Jose", "Rodriguez", "Francisco"));
    Node* Diego_madre_madre = new Node(new Humano("Sonsoles", "Saenz", "Carrero"));
    Node* Diego_madre_padre = new Node(new Humano("Guillermo", "Lozano", "Fuente"));
    Node* Diego_padre_hermano1 = new Node(new Humano("Estefania", "Rodriguez", "Francisco"));
    Node* Diego_padre_hermano2 = new Node(new Humano("Montse", "Rodriguez", "Francisco"));
    Node* Diego_padre_padre = new Node(new Humano("Victor", "Rodriguez", "Gutierrez"));
    Node* Diego_padre_madre = new Node(new Humano("Maria", "Francisco", "Rodrigo"));

    vector<Node*>diego_v ={
        Diego,
        Diego_hermana
    };
    vector<Node*> diego_padre_v = {
        Diego_padre,
        Diego_padre_hermano1,
        Diego_padre_hermano2
    };
    vector<Node*> diego_madre_v = {
        Diego_madre
    };

    array<Node*, 2>diego_a = {
        Diego_madre,
        Diego_padre
    };
    array<Node*, 2>diego_madre_a = {
        Diego_madre_madre,
        Diego_madre_padre
    };
    array<Node*, 2>diego_padre_a = {
        Diego_padre_madre,
        Diego_padre_padre
    };

    ar.setYo(Diego);
    Diego->setPadres(diego_a);
    Diego_madre->setHijos(diego_v);
    Diego_padre->setHijos(diego_v);
    Diego_hermana->setPadres(diego_a);

    Diego_madre->setPadres(diego_madre_a);
    Diego_madre_madre->setHijos(diego_madre_v);
    Diego_madre_padre->setHijos(diego_madre_v);

    Diego_padre->setPadres(diego_padre_a);
    Diego_padre_madre->setHijos(diego_padre_v);
    Diego_padre_padre->setHijos(diego_padre_v);
    Diego_padre_hermano1->setPadres(diego_padre_a);
    Diego_padre_hermano2->setPadres(diego_padre_a);

    ar.print();

    cout << endl << endl;

    string nombre = "Jose";
    string apellido1 = "Rodriguez";
    string apellido2 = "Francisco";

    cout << "Para personalizar la busqueda pulse 1: " << endl;
    int mm = 0;
    cin >> mm;
    if(mm == 1){
        cout << "nombre, apellido, apellido dos" << endl;
        cin >> nombre;
        cin >> apellido1;
        cin >> apellido2;
    }

    cout << endl << endl;

    ar.search(nombre, apellido1, apellido2);

    cout << endl << "FIN" << endl;

    return 0;
}
