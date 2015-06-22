#include "stdafx.h"
#include <iostream>
#define LINELEN 84
#include <string>
using namespace std;


class  sotrudnik// Базовый класс - Круг
{protected:
	string fio;
	//char t[64];
	double oklad; // Радиус
public:
	sotrudnik(double oklad, string fio) // Конструктор для инициализации полей
	{
		this->fio = fio;
		this->oklad = oklad;
	}

	virtual void print() // Метод для печати полей (виртуальный)
	{
		cout << "\noklad=" << oklad << "\nfio=" << fio << endl; // Печатаем значения полей
	}
};
class nachalnik : public sotrudnik // Производный класс - Эллипс, тип наследования доступа
{
	double nadbavka; // Новое поле - малая полуось b
public:
	nachalnik(double oklad, double nadbavka, string fio) : // Конструктор
		sotrudnik(oklad, fio) // Явный вызов конструктора базового класса
	{
		this->nadbavka = nadbavka;
	}
	void print() // Переопределенный метод print
	{
		sotrudnik::print(); // Вызов в переопределенном методе метода 
		// базового класса
		cout << " nadbavka=" << nadbavka; // Допечатывает поле b
		cout << " zarplata=" << (nadbavka + oklad);
	}
};

int main(int argc, char* argv[])
{
	//setlocale(LC_ALL, "rus");
	string fio = "Lexus";
	//cout << "Lexus" << endl;
	sotrudnik p1(300, fio); // Создается объект с вызовом конструктора
	//cout << "Lexus" << endl;
	nachalnik p3(200, 500, fio); // Создается объект с вызовом конструктора
	sotrudnik *pp; // Указатель типа базового класса
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

