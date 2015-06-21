#include "stdafx.h" 
#include <iostream>
#include <conio.h>
#include <cmath>
#include <math.h>
#include <stdio.h>
using namespace std;
class vc // Базовый класс - "Точка на плоскости" 
{
protected:
	float x; // Координаты точки 
public:
	vc(float x) // Конструктор для инициализации полей 
	{
		this->x = x;
	}
	virtual void print() // Метод для печати полей (виртуальный) 
	{
		cout << "\nx=" << x; // Печатаем значения полей 
		//cout << "\nmodulvc=" << sqrt(pow(x, 2)); // 
		//printf("%lf", x);
		std::cout << "\nmodulvc=" << sqrt(pow((x / 1), 2) + pow((x - (x / 1)), 2));
	}
};
class cc : public vc // Производный класс - "Точка в пространстве" 
{
	double y; // Новое поле - координата z 
public:
	cc(double x, double y) : // Конструктор 
		vc(x) // Явный вызов конструктора базового класса 
	{
		this->y = y;
	}
	void print() // Переопределенный метод print 
	{
		vc::print(); // Вызов в переопределенном методе метода  
		// базового класса 
		cout << " y=" << y; // Допечатывает поле z 
		cout << "\nmodulcc=" << sqrt(pow(x, 2) + pow(y, 2)); 
	}
};


int main(int argc, char* argv[])
{
	vc p1(3.14); // Создается объект с вызовом конструктора 
	cc p3(3, 4); // Создается объект с вызовом конструктора 
	vc *pp; // Указатель типа базового класса 
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
