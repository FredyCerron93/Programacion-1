// Ejercicio_5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

//El gerente de planta de lápices Faber Castell, desea contar con un programa en C++ que le
//permita calcular el menor número de cajas que se necesitarían para colocar cierta cantidad
//de lápices utilizando cajas de un ciento, medio ciento, una decena y bolsas de un lápiz.

using namespace std;

int main()
{
    int n, n100, n50, n10, bolsa;
    cout << "ingrese cantidad de lapices: "; cin >> n;

    n100 = n / 100;
    n50 = (n % 100) / 50;
    n10 = ((n % 100) % 50) / 10;
    bolsa = (((n % 100) % 50) % 10);

    cout << "Cajas de un ciento: " << n100 << endl;
    cout << "Cajas de medio ciento : " << n50 << endl;
    cout << "Cajas de una decena : " << n10 << endl;
    cout << "Lápices sin embolsar : " << bolsa << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
