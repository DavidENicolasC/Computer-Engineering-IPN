//Directivas de preprocesador
#include <iostream>

//Declaracion using que incluye todos los elementos del espacio de nombres std
using namespace std;

//Comentario de una linea

/*  Heredado de C
Comentario de multiples lineas
*/

int main()
{
    
    /*Las instrucciones se pueden escribir 
    en multiples líneas sin que los espacios
    en blanco o los saltos de linea las afecten.
    lo que la finaliza es el ;*/
    cout <<
        "Hola mundo"
                << endl;

    //Varias instrucciones en una linea
    cout << "Hola "; cout << "Mundo" << endl;
}