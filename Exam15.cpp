// ConsoleApplication9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;


class krug // Базовый класс - "Точка на плоскости"
{
protected:
	double r; // Координаты точки
public:
	krug(double r) // Конструктор для инициализации полей
	{
		this->r = r; 
	}
	virtual void print() // Метод для печати полей (виртуальный)
	{
		cout << "\nr=" << r; // Печатаем значения полей
		cout << "\ns=" << 3.14*r*r;
	}
};
class shar3d : public krug // Производный класс - "Точка в пространстве"
{
	double R; // Новое поле - координата z
public:
	shar3d(double r, double R) : // Конструктор
		krug(r) // Явный вызов конструктора базового класса
	{
		this->R = R;
	}
	void print() // Переопределенный метод print
	{
		krug::print(); // Вызов в переопределенном методе метода 
		// базового класса
		cout << " R=" << R; // Допечатывает поле z
		cout << "\ns=" << 4/3*3.14*R*R*R;
	}
	};

	int main(int argc, char* argv[])
	{

		krug p1(2); // Создается объект с вызовом конструктора
		shar3d p3(3, 3); // Создается объект с вызовом конструктора
		krug *pp; // Указатель типа базового класса
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


