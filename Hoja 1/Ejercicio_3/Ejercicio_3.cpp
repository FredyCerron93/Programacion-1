// Ejercicio_3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
//Que teniendo como dato una hora expresada en segundos (t), nos calcule y muestre la 
//cantidad de horas, minutos y segundos contenidos en dicha hora.

using namespace std;

int main()
{
    int segundos, minutos, horas, resto1, resto2;
    cout << "ingrese cantidad de tiempo en segundo: "; cin >> segundos;

    horas = segundos / 3600;
    segundos = segundos % 3600;
    minutos = segundos / 60;
    segundos = segundos % 60;

    cout << "N horas: " << horas << endl;
    cout << "N minutos: " << minutos << endl;
    cout << "N segundos: " << segundos << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
