/*Escriba un programa que acepte como entrada un n�mero de cinco d�gitos, lo separe en sus distintos d�gitos y
los imprima separ�ndolos cada uno con tres espacios. (Sugerencia: emplee los operadores de divisi�n y de
m�dulo) Por ejemplo, si el usuario tecla 42339, el programa deber� imprimir:
4 2 3 3 9*/

#include <iostream>
using namespace std;

int main()
{
	int num,n1,n2,n3,n4,n5;
	cout << "Inserta un numero de 5 cifras: ";
	cin >> num;
	cout << endl;
	
	n1=num/10000;
	cout << n1 << "  ";
	
	n2=(num%10000)/1000;
	cout << n2 << "  ";
	
	n3=(num%10000)%1000/100;
	cout << n3 << "  ";
	
	n4=((num%10000)%1000)%100/10;
	cout << n4 << "  ";
	
	n5=(((num%10000)%1000)%10)/1;
	cout << n5 << "  ";
	
	

	return 0;
}
