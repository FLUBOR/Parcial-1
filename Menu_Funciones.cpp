#include <iostream>
#include <math.h>
using namespace std;

int Menu();
float formula1(int x);
float formula2(int x,int y);
float formula3(int x);
void tabla(int op);
void tablaxy();

int main()
{
	int x,y,op;
	do
	{
		op=Menu();
		switch(op)
		{
			case 1:{
				tabla(op);
				break;
			}
			case 2:{
				cout << "Ingresa el valor de X: ";
				cin >> x;
				cout << "\nIngresa el valor de Y: ";
				cin >> y;
				cout << endl;
				tablaxy();
				break;
			}
			case 3:{
				tabla(op);
				break;
			}
			default:{
				cout << "Error!!" << endl;
			}
		}
		
		
	}while (op!=0);
	
	
	return 0;
}

int Menu()
{
	int op;
	cout << "Escoge un funcion:" << endl;
	cout << "0--- Salir" << endl;
	cout << "1--- Funcion 1" << endl;
	cout << "2--- Funcion 2" << endl;
	cout << "3--- Funcion 3" << endl;
	cout << "> ";
	cin >> op;
	cout << endl;
	return op;
}

void tabla(int op)
{
	int tabla;
	cout << "Valor maximo para tabular: ";
	cin >> tabla;
	cout << endl;
	cout << "X	F(x)" << endl;
	for(int i=0;i<=tabla;i++)
	{
		if(op==1)
		{
			cout << i << "	" << formula1(i) << endl;
		}
		if(op==3)
		{
			cout << i << "	" << formula3(i) << endl;
		}
	}
	cout << endl;
}

void tablaxy()
{
	cout << "X	Y	F(x,y)" << endl;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			cout << i << "	" << j  << "	" << formula2(i,j) << endl;
		}
	}
}

float formula1(int x)
{
	float r=0;
	r=2*pow(x,2);
	r=pow(r,1/3);
	r/=(2*x)-3;
	return r;
}

float formula2(int x,int y)
{
	float r=0;
	r=(2*x*y)-(3*y);
	return r;	
}

float formula3(int x)
{
	float r=0;
	if(x>0)
	{
		r=2*pow(x,2);
		return r;
	}
	else
	{
		r=3/pow(x,3);
		return r;
	}
}
