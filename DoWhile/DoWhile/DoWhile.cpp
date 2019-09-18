// DoWhile.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int numero;
	do
	{
		cout << "Escribe un numero ";
		cin >> numero;
	} while (numero < 100);
		return 0;
}

