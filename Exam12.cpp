#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
class vector // Базовый класс - "Точка на плоскости"
{protected:
	double x, y; // Координаты точки
public:
	vector(double x, double y) // Конструктор для инициализации полей
	{
		this->x = x; this->y = y;
	}
	virtual void print() // Метод для печати полей (виртуальный)
	{
		cout << "\nx=" << x << " y=" << y; // Печатаем значения полей
		cout << "\nl=" << sqrt(pow(x - 0, 2) + pow(y - 0, 2));
	}
};
class vector3d : public vector // Производный класс - "Точка в пространстве"
{
	double z; // Новое поле - координата z
public:
	vector3d(double x, double y, double z) : // Конструктор
		vector(x, y) // Явный вызов конструктора базового класса
	{
		this->z = z;
	}
	void print() // Переопределенный метод print
	{
		vector::print(); // Вызов в переопределенном методе метода 
		// базового класса
		cout << " z=" << z; // Допечатывает поле z
		cout << "\nl=" << sqrt(pow(x - 0, 2) + pow(y - 0, 2) + pow(z - 0, 2));
	}
};

int main(int argc, char* argv[])
{
	vector p1(1, 2); // Создается объект с вызовом конструктора
	vector3d p3(3, 4, 5); // Создается объект с вызовом конструктора
	vector *pp; // Указатель типа базового класса
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
