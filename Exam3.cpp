// Exam1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h" 
 #include <iostream>
#include <string>
 using namespace std;




 class symbol // Базовый класс - Символ char[] chars = { 'c', 'a', 't'}  
 {
	 private:
		
			 	string s = "code";
		

			 public:
				 	symbol(string s) // Конструктор для инициализации полей 
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
	 	symbol p1("code"); // Создается объект с вызовом конструктора 
	
		 	symbol *pp; // Указатель типа базового класса 
	pp = &p1; // Настраиваем на объект базового класса 
	 	pp->print(); // Вызов метода через указатель 
	
		 	pp->print(); // Вызов метода через указатель, вызывается метод класса symbol 
	

		

		 	system("pause");
	return 0;
	 }