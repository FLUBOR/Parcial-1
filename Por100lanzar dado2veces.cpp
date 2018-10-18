#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int lanzar_dados();
void histograma(int n[],int t);

int main()
{
	int v[11]={0};
	int dado=0;
	srand(time(NULL));
	for(int i=0;i<100;i++)
	{
		dado=lanzar_dados();
		
		for(int j=0;j<11;j++)
		{
			if(dado==j+2)
			{
				v[j]++;
				continue;
			}
		}		
	}
	histograma(v,11);
		
	return 0;
}

int lanzar_dados()
{
	int dado=0;
	for(int i=0;i<2;i++)
		dado+=1+rand()%(6);
	return dado;
}

void histograma(int n[],int t)
{
	for(int i=0;i<t;i++)
	{
		cout <<"["<< i+2 <<"]"<< "\t";
		for(int j=0;j<n[i];j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
