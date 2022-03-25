#include <iostream>

using namespace std;

int main ()
{
    //<------Literales------>:
    int a = 5;  //La literal es 5
    
    //----Literales en otras bases numericas----

    //Las literales en base octal se preceden de un 0
    int b = 015;    //La literal está en base octal y equivale al 13 en decimal
    
    //Las literales en base hexadecimal se preceden de un 0x
    int c = 0x1F;   //La literal está en base hexadecimal y equivale al 31 en decimal

    //Aqui se imprimen en base decimal, para mostrar que equivalen a los que se mencionaron
    cout << b << " y " << c << endl;

    //<------Tipos de dato de las literales------>

    /*
    Por defecto, las literales son de cierto tipo de dato.
    Sin embargo, se puede forzar a que sean de otro tipo
    colocando sufijos
    */

    //Variables enteras
    int o = 30;      //Por defecto, es un entero con signo

    int f = 57u;     //Entero sin signo
    int p = 57U;     //Lo mismo que el anterior. Los sufijos también pueden ser colocados en mayusculas
    int d = 39l;     //Entero largo
    int sl = 70ul;   //Entero largo sin signo
    int ro = 20lu;   //Este sufijo produce el mismo resultado que el anterior
    int x = 19Lu;    //Se pueden combinar mayusculas y minusculas en los sufijos

    //---Variables de punto flotante---

    //Sufijo de potencias de 10
    float q = 6.02e23;  //Equivale a 6.02x10^23

    //Tipos de datos
    float j = 20;       //Por defecto, son de tipo double

    float sp = 30.2f;   //De tipo float
    float w = 92.67F;   //Hace lo mismo que el anterior.
    float xi = 10.4l;   //De tipo long double

    //<------Caracteres y literales de cadena------>

    char carac = 'x';       //Cadena de un solo carácter (caracteres)
    string cad = "cadena"; //Literal de cadena

    //<--Secuencias de escape-->
    char saltoDeLinea = '\n';
    char retornodecarro = '\r';
    char tabulador = '\t';
    char tabuladorVertical = '\v';
    char retroceso = '\b';
    char formFeed = '\f';           //Page Feed
    char alarma = '\a';
    char comillaSimple = '\'';
    char comillaDoble = '\"';
    char interrogacion = '\?';
    char lineaSecuenciaEscape = '\\';

    //<------Formas de representar caracteres------>
    char codigoASCIIdecimal = 54;       //Codigo numerico ASCII en decimal
    char codigoASCIIoctal = '\66';      //Codigo numerico ASCII en octal. Se tiene que preceder con '\'
    char codigoASCIIhexa = '\x36';     //Codigo numerico ASCII en hexadecimal. Se tiene que preceder con \x

    //Aqui se imprimen los dos numeros anteriores para demostrar que quedaron correctamente almacenados
    cout << codigoASCIIoctal << ' ' << codigoASCIIhexa << endl;

    /*
    <------Concatenacion de literales de cadenas------>
    Se puede lograr agregando uno o mas espacios entre las literales
    */
    string concat = "Primera cadena" " Segundacadena "    " y Tercera cadena";

    //Se imprime la variable anterior para comprobar que se ha asignado correctamente
    cout << concat << endl;

    /*
    <-------Cadenas de multiples lineas------>
    Se puede lograr agregando uno o mas caracteres \ al final de cada linea dentro de la literal
    */
   string multiples = "Primera linea \
                        Segunda linea \
                        Tercera linea";

    //Se imprime la cadena anterior para comprobar el resultado
    cout << multiples << endl;

    /*
    <------Prefijos para caracteres y literales de cadenas------>
    Por defecto, las literales de caracteres
    tienen como tipo de dato char.
    para forzar otros tipos de datos, tenemos
    que utilizar prefijos
    */
    char car = 'h';     //Por defecto, son de tipo char
    const char16_t *sd = u"Cadena de 16 bits";
    const char32_t *kc = U"Cadena de 32 bits";      //Los prefijos SI son sensibles a mayusculas
    const wchar_t *tot = L"Cadena con la cantidad maxima de bits permitida";

    /*
    <------Prefijos de codificacion de cadenas------>
    Podemos elegir la codificacion de la cadena
    */
    const char *UTF8 = u8"Cadena codificada en el ejecutable usando UTF-8";
    const char *pura = R"(Esta es una cadena pura, las secuencias de escape \n no se toman en cuenta)";
    const char *otrapura = R"#%(Una cadena de texto)#%";
    //La secuencia de caracteres inicial de la cadena pura tiene que ser la misma que la del final

    //Comprobamos el resultado de las tres anteriores cadenas
    cout << UTF8 << ' ' << pura << ' ' << otrapura << endl;

    //Variables constantes
    const int v = 5;  //Este si es un valor almacenado en memoria

    //<------Constantes simbólicas------>
    /*
    Son directivas de preprocesador.
    Antes de la compilación, el preprocesador
    hace un reemplazo "a ciegas", es decir,
    reemplaza cada ocurrencia del primer argumento
    de la constante simbolica por el segundo argumento,
    sin revisar su sintaxis.
    */
    #define SIMBOLO x*5

    cout << SIMBOLO << endl;

}