// Ejercicio_5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

//Que teniendo como dato una hora de entrada, expresada en horas, minutos y segundos,
//nos calcule e imprima la hora de salida al cabo de 1 segundo expresada también en horas,
//minutos y segundos.

using namespace std;

int main()
{
    int H, M, S;
    cout << "ingrese las horas, minutos y segundo en ese orden " << endl; cin >> H >> M >> S;

    S = (H * 3600) + (M * 60) + S + 1;

    H = S / 3600;
    S = S % 3600;
    M = S / 60;
    S = S % 60;

    cout << "N horas: " << H << endl;
    cout << "N minutos: " << M << endl;
    cout << "N segundos: " << S << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
