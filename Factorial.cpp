/*Leer un numero y mostrar el factorial del numero, mismo que se describe con el símbolo n! ejemplo:
5! y se obtiene multiplicando todos los números de el 1 al numero = 1 *2 *3 *4 *5 = 120. No probar con números mayores a 19.*/

#include <iostream>
using namespace std;

int main()
{
	int x,r=1;
	
	cout << "Ingresa un numero: ";
	cin >> x;
	cout << endl;
	
	for(int i=1;i<=x;i++)
	{
		r*=i;
	}
	
	cout << r << endl;
	
	return 0;
}
