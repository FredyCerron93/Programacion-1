// Ejercicio_10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

//Determine el pago a realizar por la entrada a un espectáculo donde se pueden comprar
//sólo hasta cuatro entradas, donde al costo de dos entradas se les descuenta el 10 %, al de
//2 tres entrada el 15 % y a la compra de cuatro tickets se le descuenta el 20 % .Debe ingresar
//el costo de la entrada y el número de entradas a comprar.

using namespace std;

int main()
{
    int n;
    double precio, pago;

    cout << "ingrese el numero de entrada: "; cin >> n;
    cout << "ingrese el precio de entrada: "; cin >> precio;

    pago = ((n == 1) + 2 * (n == 2) + 3 * (n == 3) + 4 * (n == 4)) * precio;

    cout << "total a pagar: " << pago << " soles" << endl; 

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
