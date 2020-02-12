// Ejercicio_2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

//Realice una aplicación en C++ y entorno consola que teniendo como datos de entrada la
//distancia a recorrer y el número de días de estancia, calcule el costo total de un Tour de
//Viaje.
//El precio por cada 100 KM de recorrido es de S / .150 y de cada día de estancia S / .520.
//Por último si el monto total a pagar sobrepasa los S / .2500 existe un descuento del 35 % .

using namespace std;

int main()
{
    int n, d, costo;
    cout << "ingrese distancia: "; cin >> n;
    cout << "ingrese N dias de estancia: "; cin >> d;

    costo = ((n / 100) * 150) + d * 520;
    costo = ((costo > 2500) / 0.65 + (costo <= 2500)) * costo;

    cout << "costo total: " << costo << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
