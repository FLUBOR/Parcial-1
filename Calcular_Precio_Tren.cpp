/*Escriba un programa que calcule el precio del boleto de ida y vuelta en ferrocarriles, conociendo la distancia
del viaje de ida y el tiempo de estancia. El precio por kilómetro es de $0.17. Se sabe además que si el número de
días de estancia es superior a 7 y la distancia total (ida y vuelta) a recorrer es superior a 800 Km. el boleto tiene
un descuento del 30%.*/
#include <iostream>
using namespace std;

int main()
{
	float precio=0.0,distancia,estancia;
	cout << "Cuantos dias son de estancia? ";
	cin >> estancia;
	cout << "\nCual es la distancia?(Km) ";
	cin >> distancia;
	cout << endl;
	
	if(distancia>800 && estancia>7)
	{
		precio=distancia*0.17;
		precio=precio-(precio*0.30);
	}
	else
		precio=distancia*0.17;
		
	cout << "El total a pagar es: " << precio << endl;
	
	
	return 0;
}
