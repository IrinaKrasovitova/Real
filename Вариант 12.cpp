// периметр квадрата
#include "stdafx.h"
#include <iostream>
using namespace std;


class square //  класс - окружность
{
private:
	double a;
	
public:
	square(double a) // Конструктор для инициализации полей
	{
		this->a = a;
		
	}

	void print() // Метод для печати полей
	{
		cout << "\na=" << a; // Печатаем значения полей
		cout << "\np=" << 4*a; // p - perimetr kvadrata
	}
};


int main(int argc, char* argv[])
{
	square p1(3); // Создается объект с вызовом конструктора
	
	square *pp; // Указатель типа базового класса
	pp = &p1; // Настраиваем на объект базового класса
	pp->print(); // Вызов метода через указатель
	
	pp->print(); // Вызов метода через указатель, вызывается метод класса circle
	
	

	system("pause");
	return 0;
}
