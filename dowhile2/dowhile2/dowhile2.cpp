// dowhile2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int opcion = 0;
	do
	{
		cout << "Ingrese 1 para mostrar mensaje\n";
		cout << "Ingrese 2 para mostrar algo mas\n";
		cout << "Ingrese 0 para Salir\n";
		cout << "Ingrese una opcion: \n";
		cin >> opcion;
	} while (opcion != 0);

	return 0;
}


