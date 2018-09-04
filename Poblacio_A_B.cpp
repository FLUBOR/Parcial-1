#include <iostream>
using namespace std;

int main()
{
	int a,b,i;
	
	cout << "Poblacion pais a: ";
	cin >> a;
	cout << "\nPoblacion pais b: ";
	cin >> b;
	cout << endl;

	
	while(a<=b){ 

		a*=(1.06);
		
		b*=(1.03); 

		i++; 
		
	} 
	
	cout << "La poblacion de a es: " << a << endl;; 
	cout << "La poblacion de b es: " << b << endl; 
	
	cout << "La cantidad de años que transcurrieron para que la poblacion a superara a la de b es: " << i << endl; 

	
	return 0;
}
