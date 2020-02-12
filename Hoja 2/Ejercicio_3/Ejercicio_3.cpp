// Ejercicio_3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

//Realice un aplicación en C++ y entorno consola que teniendo como dato de entrada un
//número entero de 15 dígitos lo descomponga en 3 números de 5 dígitos y luego sume los 3
//números.

using namespace std;

int main()
{
    long long n, n1, n2, n3;
    cout << "ingrese un numero de 15 digitos: "; cin >> n;

    n1 = n / 10000000000;
    n2 = (n % 10000000000) / 100000;
    n3 = n % 100000;

    n = n1 + n2 + n3;

    cout << "Salida: " << n << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
