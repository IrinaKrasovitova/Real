// Шестнадцатиричная система счисления
#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;

#include <iostream>

using namespace std;

class Test
{
private:
	int x;
public:
	
	Test(){}
	Test(int a){ x = a; }
	~Test(){}
	void Print(){ cout << "Число: " << x << ". Число в 16-й СС: " << hex << x << dec << endl; }
	void Print(int a){ cout << "Число: " << a << ". Число в 16-й СС: " << hex << a << endl; }

};

int main()
{
	setlocale(LC_ALL, "rus");

	Test t(110);
	t.Print();
	system("pause");
	return 0;
}


// это манипулятор из серии setw,setprecision и т.д. он переводит поток в режим отображения 16-ричных чисел на ввод/вывод, вернуться назад в 10-ную манипулятором dec
