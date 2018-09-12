#include <iostream>
using namespace std;

int factorial(int n);
int potencia(int b,int p);
float seno(float x,int n);
float logaritmo(int x,int n);

int main()
{
	int op,n;
	float x;
	
	do
	{
		cout << "0- Salir" << endl;
		cout << "1- Seno" << endl;
		cout << "2- Coseno" << endl;
		cout << "3- Logaritmo natural" << endl; 
		cout << ">";
		cin >> op;
		cout << endl;
		
		if(op!=0)
		{
			cout << "Ingrese numero: ";
			cin >> x;
			cout << endl;
			cout << ">";
			cin >> n;
			cout << endl;
			
			switch(op)
			{
				case 1: 
				{
					cout << "Sen(" << x <<")=" << (float)seno(x,n) << endl;
					break;
				}
				case2:
				{
					cout << "Sen(" << x <<")=" << (float)seno(x,n) << endl;
					break;
				}
				case 3:
				{
					cout << "ln(" << x <<")=" << (float)logaritmo(x,n) << endl;
					break;
				}
				default:
				{
					cout << "Esa no es una opcion valida." << endl;	
				}
			}
			
			
		}
		cout << endl << endl;
	}while(op!=0);
	
	return 0;
}

float seno(float x,int n)
{
	int aux,j;
	float sum=0.0,ter;
	j=x;
	j=(j*2)+2;
	for(int i=3,aux=1;aux<=j;i+=2,aux++)
	{
		ter=(potencia(x,i)/factorial(i));
		if(aux%2==0)
		{
			sum+=ter;
			cout << "A";
		}
		else
		{
			sum-=ter;
			cout << "B";
		}
	}
	
	return sum;
}

int factorial(int n)
{
	float fact=1.0;
	for(int i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}

int potencia(int b,int p)
{
	/*
	float res=0.0;
	while(p>0.0)
	{
		res=b*res;
		p--;
	}
	return res;
	*/
	int pot=1;
    for(int i=1;i<=p;i++)
    {
        pot*=b;
    }
    return pot;
}

float logaritmo(int x,int n)
{
	float sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=(1.0/i)*potencia((x-1)/x,i);
	}
	return sum;
}
/*
float seno(float x)
{
	float a;        
    float seno1=x;
    if(x==1)
    {
    	a=((float)potencia(1,3)/factorial(3));
		return a;
		seno1=1;
    }
    else if(x==0)
    {
        return seno1;
    }
    else if(x>=2)
	{ 
		int i,j;
		int n=1;
		//j=x;
		j=(j*2)+2;
		for(i=1;i<=j;i=i+2)
		{    
			n*=-1;
			cout<<seno1<<endl;
			seno1+=(n*(float)potencia(x,i)/factorial(i));
		}
		return seno1; 
		seno1=x;
    }
}
   */ 


