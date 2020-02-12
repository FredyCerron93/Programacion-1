// Ejercicio_5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

//Realice una aplicación en C++ que permita emitir la factura correspondiente a una compra
//de un artículo determinado.El programa deberá recibir como datos la cantidad de
//unidades adquiridas y el precio del artículo y emitir el monto total a pagar.
//Recuerde que para emitir una factura deberá de considerar que el IGV es del 18 % del
//precio total.

using namespace std;

int main()
{
	int n, precio;
	cout << "ingrese cantidad y precio del articulo: "; cin >> n >> precio;

	cout << "total a pagar: " << (n * precio) * 0.82 << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
