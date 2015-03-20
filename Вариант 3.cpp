#include "stdafx.h"
#include <locale.h>
#include <conio.h>
#include <iostream>

using namespace std;

class Chislo
{
	double x;
public:
	Chislo()
	{
		x = 0;
	}
	Chislo(double x)
	{
		this->x = x;
	}
	void CreateChislo(double x)
	{
		this->x = x;
	}
	int ras4et()
	{
		double a = 0, d = x / 10;
		while (1)
		{
			if (d != 0)
			{
				a++;
				d /= 10;
			}
			else
			{
				a++;
				break;
			}
		}
		return a;
	}
	void print()
	{
		cout << "Цифр в целой части числа ";
		
		
	}
};

void main()
{
	setlocale(LC_ALL, "rus");
	double x, y, n;
	x = -41.56789;
	y = modf(x, &n);
	printf("modf(%lf))=fractional %f and integer : %f", x, y, n);

	
	_getch();
}

