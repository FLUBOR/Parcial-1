#include <iostream>
using namespace std;

void llenar(int v[],int tam);
void imprimir(int v[],int t);

int main()
{
	int tam;
	cout << "Ingresa el numero maximo a examinar: ";
	cin >> tam;
	cout << endl;

	int v[tam];
	llenar(v,tam);
	for(int i=2;i<tam;i++)
	{
		for (int j=2;j<tam/i;j++)
		{
			v[j*i]=0;
		}
	}

	imprimir(v,tam);
	return 0;
}

void llenar(int v[],int tam)
{
	for(int i=0;i<tam;i++)
	{
		v[i]=1;
	}
}

void imprimir(int v[],int t)
{
	cout <<"Numeros primos encontrados: ";
	cout <<"(Rango: 1 y " << t << ")" << endl;
	
	for(int i=1;i<t;i++)
	{
		if(v[i]==1)
		{
			cout << i << "\t";
		}
	}
	cout << endl;
}  

