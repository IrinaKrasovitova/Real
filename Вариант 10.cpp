// эта программа один в один как с кругом в 9 варианте за одним исключением - используем формулу 2 * 3.14 * r (радиус окружности).
// Кстати, насчет ручного ввода, в условии про него ничего не сказано, поэтому я думаю он необязателен. Но если что, это не долго исправить.
#include "stdafx.h"
#include <iostream>
using namespace std;


class circle //  класс - окружность
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
		cout << "\nl=" << 2*3.14*r; // я не инициализировала l (длина окружности), т.к. это не переменная - это просто текст, выводящийся на экран
	}
};


int main(int argc, char* argv[])
{
	circle p1(3); // Создается объект с вызовом конструктора
	
	circle *pp; // Указатель типа базового класса
	pp = &p1; // Настраиваем на объект базового класса
	pp->print(); // Вызов метода через указатель
	
	pp->print(); // Вызов метода через указатель, вызывается метод класса circle
	
	

	system("pause");
	return 0;
}
