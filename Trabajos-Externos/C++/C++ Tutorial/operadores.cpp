#include <iostream>

using namespace std;

int main()
{
    /*
    Las instrucciones de asignacion
    tienen un valor en si mismas.
    Para tipos fundamentales, estas
    devuelven el valor que fue asignado.
    */
    int z;
    int y = 6 + (z = 8);
    /*
    Lo anterior es equivalente a:
    int z = 8;
    int y = 6 + z;
    */

    //Se imprimen ambos valores para verificar
    cout << y << ' ' << z << endl;

    /*
    Retomando la explicacion de las instrucciones de asignacion,
    podemos realizar algo como lo siguiente:
    */
    int b;
    int s = ((b=2) == 3);
    /*
    En la expresion anterior, primero se le asigna el valor 2 a b
    y luego se compara con el valor 3 para asignar false (0) a s
    */

   //Imprimamos la variable para asegurarnos
   cout << s << endl;

   /*
   <------Evaluacion en cortocircuito------>
   Cuando tenemos expresiones logicas combinadas, AND y OR,
   si C++ encuentra que la primera expresion en AND es falsa,
   ya no evalúa la segunda expresion, dado que la expresion
   combinada resultará en false; si C++ encuentra que la
   primera expresion en OR es verdadera, ya no evalua la segunda
   expresion, dado que la expresion combinada resultará en true.
   */
    bool j = (5 < 9) || (8 / 0 < 5);  //Solo evalua la primera expresion
    bool o = (3 > 6) && (4 / 0 > 0);  //Solo evalua la primera expresion

    /*
    <------Operador ternario condicional------>
    Evalua la expresion antes del signo de interrogacion
    y devuelve el primer valor despues del signo de interrogacion
    si la expresion resulta verdadera, y el segundo valor si la expresion
    resulta fals
    */
    int x = (y > z) ? b : s;

    /*
    <------Operador coma------>
    Se usa para separar varias expresiones donde
    normalmente se esperaria una
    */
    s = (b=2, b+3);
    /*
    La expresión anterior primero asigna a b el valor 2,
    luego le suma 3 a b, y la expresión retornada, en este
    caso el valor de b se asigna a s
    */

   /*
   <------Casteo explícito de los operandos------>
   */
    double sl = (double) s;     //Casteo heredado de C
    double df = double (s);     //Casteo incorporado por C++. Notación funcional
    
    /*
    <------Operador sizeof()------>
    Devuelve el tamaño en bytes del argumento
    se ejecuta en tiempo de compilacion,
    por lo que se incluye como una constante
    en el tiempo de ejecución
    */
}   