/*Leer un numero base y una potencia y mediante ciclos obtener el resultado de elevar el 
numero base a la potencia indicada. Ejemplo base=3, potencia = 4, el resultado es 3^4, es decir = 3 x 3 x 3 x 3=81*/

#include <iostream>
using namespace std;

int main()
{
	int b,p,r=1;
	
	cout << "Base: ";
	cin >> b;
	cout << "\nPotencia: ";
	cin >> p;
	cout << endl;
	
	for(int i=0;i<p;i++)
	{
		r=r*b;
	}
	
	cout << b << "^" << p << "=" << r << endl;
	
	
	return 0;
}
