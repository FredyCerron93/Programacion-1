// Ejercicio_11.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

//Calcule el monto a pagar por el servicio de estacionamiento, teniendo en cuenta que por
//la primera hora de estadía se tiene una tarifa de 10 y las restantes tienen un costo de 6. Se
//tienen como datos la hora de entrada(hhmm) y la hora de salida(hhmm).Recuerde que
//iniciada una hora se contabiliza como hora total.La hora de entrada y salida serán
//ingresadas como números enteros.

using namespace std;

int main()
{
    int hen, hsa, pago, h, m;
    cout << "ingrese hora de entrada: "; cin >> hen;
    cout << "ingrese hora de salida: "; cin >> hsa;

    hen = (hen / 100) * 60 + ((hen % 100) / 60) * 60 + ((hen % 100) % 60);
    hsa = (hsa / 100) * 60 + ((hsa % 100) / 60) * 60 + ((hsa % 100) % 60);
    
    h = (hsa - hen) / 60;
    m = (hsa - hen) % 60;

    pago = 10 + (h > 1) * 6 + (m != 0) * 6;

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
