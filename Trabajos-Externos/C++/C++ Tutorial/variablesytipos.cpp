#include <iostream>
#include <limits>   //Para revisar los limites del sistema y compilador actual
#include <cstdlib>  //Para ajustar los tipos a tamaños especificos
#include <string>   //Se debe incluir para poder utilizar las cadenas, un tipo compuesto

using namespace std;

//Las variables son porciones de memoria que almacenan datos

//La plantilla numeric_limits informa los limites del tipo que se le asigna
numeric_limits <int> enteros;
numeric_limits <char> caracteres;
numeric_limits <float> puntoflotante;

int main()
{
    //---Tipos de Variables---
    //Los tamaños de las variables dependen del sistema y la implementacion del compilador, pero tienen un minimo

    //Aquí está un ejemplo del uso de limits. En este caso, imprime el valor maximo a las variables de tipo entero
    cout << INT_MAX << endl;
    
    //Variables de tipo caracter
    char a;         //Un byte en tamaño. Al menos 8 bits
    char16_t b;     //No es más pequeño que char, al menos 16 bits
    char32_t c;     //No es más pequeño que char16_t, al menos 32 bits
    wchar_t d;      //Puede representar todo el conjunto soportado de caracteres

    //Variables de tipo entero (con signo)
    signed char e;          //Del mismo tamaño que char. Al menos 8 bits
        //Declarar un entero corto con signo
        signed short int f;
        signed short g;
        short int h;       
        short i;
        //Declarar un entero con signo
        signed int j;
        int k;
        //Declarar un entero largo con signo
        signed long int l;
        long int m;
        long n;
        //Declarar entero largo doble con signo
        signed long long int o;
        long long int p;
        long long q;

    //Variables de tipo entero (sin signo)
        //Declarar un entero corto con signo
        unsigned short int r;
        unsigned short s;
        short int t;       
        short u;
        //Declarar un entero con signo
        unsigned int v;
        int w;
        //Declarar un entero largo con signo
        unsigned long int x;
        long int y;
        long z;
        //Declarar entero largo doble con signo
        unsigned long long int aa;
        long long int ab;
        long long ac;

    //Variables de tipo punto flotante
        float ad;
        double ae;
        long double af;

    //Variables de tipo booleano
        bool ag;

    //Todas las variables anteriores son tipos aritméticos. Existen más tipos:

    //Variables sin tipo (que no almacenan nada): void

    //Variables de apuntador nulo: decltype(nullptr)

    //---Declarar variables---
    
    //Variables por linea
    int ll;
    int df;

    //Variables separadas con coma
    int sl, ao;

    //---Inicialización de variables---
    int var = 5;      //Inicializacion como C
    int num (6);      //Inicializacion por constructor
    int inc {8};      //Inicializacion uniforme

    //---Deducción de tipo---

    //Inicializar con un tipo y valor de otra variable
    int aux = 7;        //Si no se inicializa aux al utilizar auto, sucederá un error
    auto exa = aux;     //Declara exa del mismo tipo y con el mismo valor que aux. aux debe estar inicializado

    //Inicializar con un tipo de otra variable
    int aux2;
    decltype(aux2) elem;

    //Cadenas

    //Declarar sin valor

    //Inicializar cadenas
    string cad1 = "Esto es una cadena con valor";           //Inicializacion como C
    string cad2 ("Esto tambien es una cadena con valor");   //Inicializacion por constructor
    string cad3 {"Igualmente esto tambien es una cadena"};  //Inicializacion uniforme

    //Cambiar el valor a una cadena
    cad2 = "Se le ha cambiado el valor a esta cadena";
}