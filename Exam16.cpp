#include "stdafx.h"
#include <iostream>
#define LINELEN 84
#include <string>
using namespace std;


class automobil // Базовый класс - Круг
{
	string t;
	//char t[64];
	double v; // Радиус
public:
	automobil(double v, string t) // Конструктор для инициализации полей
	{
		this->t = t;
		this->v = v;
	}

	virtual void print() // Метод для печати полей (виртуальный)
	{
		cout << "\nv=" << v << "\nt=" << t << endl; // Печатаем значения полей
	}
};
class gruzautomobil : public automobil // Производный класс - Эллипс, тип наследования доступа
{
	double m; // Новое поле - малая полуось b
public:
	gruzautomobil(double v, double m, string t) : // Конструктор
		automobil(v, t) // Явный вызов конструктора базового класса
	{
		this->m = m;
	}
	void print() // Переопределенный метод print
	{
		automobil::print(); // Вызов в переопределенном методе метода 
		// базового класса
		cout << " m=" << m; // Допечатывает поле b
	}
};

int main(int argc, char* argv[])
{
	//setlocale(LC_ALL, "rus");
	string t = "Lexus";
	//cout << "Lexus" << endl;
	automobil p1(300, t); // Создается объект с вызовом конструктора
	//cout << "Lexus" << endl;
	gruzautomobil p3(200, 500, t); // Создается объект с вызовом конструктора
	automobil *pp; // Указатель типа базового класса
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

