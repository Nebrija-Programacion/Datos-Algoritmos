# PRÁCTICA II

Se desea crear un Arbol binario donde se almacenen los siguientes Datos:
- Nombre
- DNI sin letra (almacenado como int)

### Paso 1 (2 punto)

  * Crear una clase para albergar la información.
  * Crear una función print() que imprima el nombre y el DNI.
  * Crear una clase Nodo que albergue el dato y tenga tres punteros:
     * parent
     * greaterChild
     * lesserChild
  Al inicializar un Nodo se le debe pasar al constructor el dato que se desea guardar, los tres punteros deben apuntar a nullptr
  * Crear un función print() en el nodo que imprima el dato.

## Paso 2 (2 puntos)
  * Crear una función en la lase nodo push(data);
    * Si el dato tiene un DNI menor y lesserChild apunta a nullptr, se creará un nuevo nodo será apuntado por lesserChild.
    * Si el dato es mayor y greaterChild apunta a nullptr, se creará un nuevo nodo será apuntado por greaterChild.
    * Si lesserChild o greaterChild no son nullptr se llamará a push del nodo siguiente correspondiente.

## Paso 3 (2 puntos)
  * Crear una clase BinaryTree que tenga un puntero al primer nodo (el padre de todos) y que contenga una función push(data) para añadir un dato al árbol.

## Paso 4 (2 punto)
  * Crear una función search(DNI) en la clase BinaryTree que busque el nodo con el DNI coincidente. Si no lo encuentra deberá devolver nullptr.
  
## Paso 5 (2 puntos)
  * Crear un programa que pida al usuario que desea hacer:
    * Meter nombre-dni. 
    * Buscar por DNI. Y mostrar el resultado de la búsqueda.
