// Ejercicio_2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <conio.h>
#include <iostream>
//Que calcule el menor número de monedas de 5, 2 y 1 para desglosar una cantidad, C, de Soles.

using namespace std;

int main()
{
    int din, vuel1, vuel2;
    cout << "ingrese cantidad de soles ", cin >> din;

    vuel1 = din / 5;
    din = din % 5;

    vuel2 = din / 2;

    din = din % 2;
    
    cout << "N de monedas de 5: " << vuel1 << endl << "N de monedas de 2: " << vuel2 << endl << "N de monedas de 1: " << din << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
