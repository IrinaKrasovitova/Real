// Exam1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class integer
{
	int a;
public:
	integer(int a)
	{
		this->a = a;
	}

	void print()

	{
		cout << "\na=" << a;
	
				if (a % 2 == 0)
			cout << "\nChetnoe " << ((a % 2) + 1);
		else cout << "\nNechetnoe " << ((a %2) - 1);

	}
};


int main(int argc, char* argv[])
{



	/*printf("%d ", 9);
	if (9 % 2 == 0)
		cout << "\nChetnoe";
	else cout << "\nNechetnoe";*/

	integer p1(9);
	integer *pp;
	pp = &p1;
	//p1.print();
	pp->print();
	
	system("pause");
	return 0;

}

