// Ejercicio_4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

//Una empresa empaquetadora de sobres requiere de un programa en C++ que optimice el
//número de empaques de sobres que utilizará para empaquetar sus productos.Se sabe que la
//empresa tiene empaques de 12, 30 y 50 sobres respectivamente..

using namespace std;

int main()
{
    int n, n1, n2, n3;
    cout << "ingrese cantidad de sobres: "; cin >> n;

    n1 = n / 50;
    n2 = (n % 50) / 30;
    n3 = (((n % 50) % 30) / 12) + (((n % 50) % 30) % 12 != 0);

    cout << "Cantidad de empaque de 50: " << n1 << endl;
    cout << "Cantidad de empaque de 30: " << n2 << endl;
    cout << "Cantidad de empaque de 12: " << n3 << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
