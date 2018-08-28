/*Escriba un programa que lea dos enteros y determine si el primero es un múltiplo del segundo, y que
imprima el resultado (Sugerencia: utilice el operador de módulo)*/
#include <iostream>
using namespace std;

int main()
{
	int a,b,aux;
	
	cout << "Inserta un numero: ";
	cin >> a;
	cout << "\nInserta otro numero: ";
	cin >> b;
	cout << endl;
	
	if(a>b)
	{
		aux=a;
		a=b;
		b=aux;
	}
	
	if(b%a==0)
		cout << "El numero " << a << " es multiplo de " << b << endl;
	else
		cout << "Los numeros ingresados no son validos";

	return 0;
}
