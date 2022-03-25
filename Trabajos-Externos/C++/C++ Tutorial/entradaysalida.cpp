#include <iostream>

using namespace std;

int main()
{
    /*
    Para realizar las operaciones de entrada/salida,
    C++ considera el concepto abstracto de stream o flujo,
    útil para realizar operaciones sobre dispositivos secuenciales,
    como la pantalla, el teclado o un archivo.
    Un stream es una entidad donde un programa puede insertar
    o extraer caracteres de forma secuencial.
    No se necesita conocer detalles sobre el dispositivo asociado al
    stream, ni especificaciones internas sobre el stream; sólo saber
    que son una fuente/destino de caracteres, obtenidos o dados
    secuencialmente.
    */
    int a;

    cin >> a;
    cout << a;
    cerr << a;
    clog << a;

    //<----Salida estándar (cout)----->
}