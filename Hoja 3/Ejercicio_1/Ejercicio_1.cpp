// Ejercicio_1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

//Pimentel Hermanos, empresa dedicada a vender neumáticos, está realizando la siguiente oferta:
//Si el cliente decide comprar menos de 3 neumáticos paga por cada uno de ellos S / . 145, si
//en cambio compra entre 3 y 5 neumáticos paga, por cada uno, S / . 138, y si compra más de
//5 paga S / . 135 por cada uno.
//Realice una aplicación en C++ que teniendo como dato el número de neumáticos que un
//cliente va a comprar, muestre el monto total que pagará por los mismos.

using namespace std;

int main()
{
    int n, pago;
    cout << "ingrese numero de neumatico a contrar: "; cin >> n;

    pago = (n < 3) * n * 145 + (n <= 5 && n >= 3) * n * 138 + (n > 5)* n * 135;

    cout << "total a pagar: " << pago << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
