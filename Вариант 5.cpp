// Если я правильно поняла, то здесь просто нужно присвоить переменной значение символа, а не числа. Но это лучше у кого-нибудь переспросить.
#include "stdafx.h"
#include <iostream>
using namespace std;


class symbol // Базовый класс - Символ char[] chars = { 'c', 'a', 't' 
{
private:
	
	char s = {'c'};

public:
	symbol(char s) // Конструктор для инициализации полей
	{
		this->s = s;
		
	}

	 void print() // Метод для печати полей 
	{
		cout << "\ns=" << s; // Печатаем значения полей
	}
};

	

int main(int argc, char* argv[])
{
	symbol p1('c'); // Создается объект с вызовом конструктора
	
	symbol *pp; // Указатель типа базового класса
	pp = &p1; // Настраиваем на объект базового класса
	pp->print(); // Вызов метода через указатель
	
	pp->print(); // Вызов метода через указатель, вызывается метод класса symbol


	system("pause");
	return 0;
}
