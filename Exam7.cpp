// эта программа работает, но у нее есть минус - я ничего не ввожу с клавиатуры, мне просто лень. Я задаю радиус, равный 2 и сразу вывожу на печать площадь круга 3.14 * r * r 

#include "stdafx.h"
#include <iostream>
using namespace std;


class circle //  класс - Круг
{
private:
	double r;
	
public:
	circle(double r) // Конструктор для инициализации полей
	{
		this->r = r;
		
	}

	void print() // Метод для печати полей
	{
		cout << "\nr=" << r; // Печатаем значения полей
		cout << "\ns=" << 3.14*r*r;
	}
};


int main(int argc, char* argv[])
{
	circle p1(2); // Создается объект с вызовом конструктора
	
	circle *pp; // Указатель типа базового класса
	pp = &p1; // Настраиваем на объект базового класса
	pp->print(); // Вызов метода через указатель
	
	pp->print(); // Вызов метода через указатель, вызывается метод класса circle
	
	

	system("pause");
	return 0;
}