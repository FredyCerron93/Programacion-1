// Ejercicio_2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

//MAPFE, agencia de seguros asigna el precio de sus seguros para automóviles basándose
//en el sexo y la edad del conductor.Los hombres menores de 25 años pagan los precios
//más altos, 1000 soles.Los hombres de 25 años o más años pagan 700 soles.Las mujeres
//de menos de 21 años pagan 800 soles, mientras que las mujeres de 21 años o más pagan
//500 soles.Se le solicita a usted que realice una aplicación en C++ que teniendo como dato
//el sexo(‘H’, ’M’) y la edad de la persona, muestre el pago correspondiente para el seguro
//del automóvil.

using namespace std;

int main()
{
    int edad;
    char genero;
    cout << "ingrese genero y edad: "; cin >> genero >> edad;

	switch (genero)
	{
	case 'h':
	case 'H': if (edad < 25) cout << "pago: " << 1000 << " soles" << endl;
			else cout << "pago: " << 700 << " soles" << endl;
		break;
	case 'm':
	case 'M':if (edad < 21) cout << "pago: " << 800 << " soles" << endl;
			else cout << "pago: " << 500 << " soles" << endl;
		break;
	default:
		break;
	}
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
