#include "stdafx.h"
#include <iostream>
using namespace std;


class integer // Базовый класс - целое число
{
private:
	int a;
	
public:
	integer(int a) // Конструктор для инициализации полей
	{
		this->a = a;
	
	}

	void print() // Метод для печати полей (виртуальный)
	{
		cout << "\na=" << a; // Печатаем значения полей
		
			if (a % 2 == 0)
				cout << "\nChetnoe";
			else cout << "\nNechetnoe";
			
		
		

	}
};


int main(int argc, char* argv[])
{
	
	integer p1(8); // Создается объект с вызовом конструктора  a = 8 - вводим любое число, котрое будем проверять на четность и нечетность
	
	
	
	integer *pp; // Указатель типа базового класса
	pp = &p1; // Настраиваем на объект базового класса
	pp->print(); // Вызов метода через указатель
	
	pp->print(); // Вызов метода через указатель, вызывается метод класса integer

	system("pause");
	return 0;
}

