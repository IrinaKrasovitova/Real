#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
class pr // Базовый класс - "Точка на плоскости"
{protected:
	double x, y; // Координаты точки
public:
	pr(double x, double y) // Конструктор для инициализации полей
	{
		this->x = x; this->y = y;
	}
	virtual void print() // Метод для печати полей (виртуальный)
	{
		cout << "\nx=" << x << " y=" << y; // Печатаем значения полей
		cout << "\ns=" << x*y;
	}
};
class paral3d : public pr // Производный класс - "Точка в пространстве"
{
	double z; // Новое поле - координата z
public:
	paral3d(double x, double y, double z) : // Конструктор
		pr(x, y) // Явный вызов конструктора базового класса
	{
		this->z = z;
	}
	void print() // Переопределенный метод print
	{
		pr::print(); // Вызов в переопределенном методе метода 
		// базового класса
		cout << " z=" << z; // Допечатывает поле z
		cout << "\nv=" << x*y*z;
	}
};

int main(int argc, char* argv[])
{
	pr p1(1, 2); // Создается объект с вызовом конструктора
	paral3d p3(3, 4, 5); // Создается объект с вызовом конструктора
	pr *pp; // Указатель типа базового класса
	pp = &p1; // Настраиваем на объект базового класса
	pp->print(); // Вызов метода через указатель
	pp = &p3; // Настриваем указатель на объект производного класса 
	// (преобразование типа допустимо)
	pp->print(); // Вызов метода через указатель, вызывается метод класса point3d
	// Если метод print в классе point был объявлен без virtual, 
	// то вызывался бы метод print класс point
	
	system("pause");
	return 0;
}
