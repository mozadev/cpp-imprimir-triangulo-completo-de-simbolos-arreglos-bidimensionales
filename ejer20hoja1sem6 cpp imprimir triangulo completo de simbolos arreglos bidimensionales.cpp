/*
ejercciios 1 de la hoja 3 repetitivas
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include <conio.h>
using namespace std;

int IngresaN()
{
	int N;
	cout << "Ingerese N:"; cin >> N;
	while (N <= 0 || N >=10)
	{
		cout << "Ingerese N:"; cin >> N;
	}
	return N;
}
void Figura(int N)
{
	for (int i = 1; i <= N; i++)
	{ 
		for (int e = 40-i; e >= 1; e--)
			cout << " ";
		for (int j = 1; j <= i; j++)
			cout << j;
		for (int k = i-1; k >= 1; k--)
			cout << k;
		cout << endl;
	}
}

int main()
{
	int N = IngresaN();
	Figura(N);
	_getch();
}