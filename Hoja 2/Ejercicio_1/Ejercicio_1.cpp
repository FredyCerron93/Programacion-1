// Ejercicio_1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

//Realice una aplicación en C++ y entorno consola que solicite el ingreso de un número
//entero y si este es mayor o igual a 10 devuelva el triple de este de lo contrario la cuarta
//parte de este

using namespace std;

int main()
{
    int n;
    cout << "ingrese un numero: "; cin >> n;

    n = (n >= 10) * n * 3 + (n < 10)* n * 0.25;

    cout << "numero final: " << n << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
