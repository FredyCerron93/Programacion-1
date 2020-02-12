// Ejercicio_6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <math.h>

//Que lea las coordenadas(x, y) de un punto y nos indique si se encuentra en el círculo 
//x2+y2 = 25.

using namespace std;

int main()
{
    //Aqui empezamos con los selectores
    double x, y;
    cout << "ingrese coordenadas x e y " << endl;
    cin >> x >> y;

    if ((pow(x, 2) + pow(y, 2)) <= 25)
        cout << "esta dentro del circulo" << endl;
    else
        cout << "esta fuera del circulo" << endl;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
