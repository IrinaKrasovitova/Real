// площадь квадрата
#include "stdafx.h"
#include <iostream>
using namespace std;


class square //  класс - квадрат
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
		cout << "\ns=" << a*a;
	}
};


int main(int argc, char* argv[])
{
	square p1(3); // Создается объект с вызовом конструктора
	
	square *pp; // Указатель типа базового класса
	pp = &p1; // Настраиваем на объект базового класса
	pp->print(); // Вызов метода через указатель
	
	pp->print(); // Вызов метода через указатель, вызывается метод класса square
	
	

	system("pause");
	return 0;
}
