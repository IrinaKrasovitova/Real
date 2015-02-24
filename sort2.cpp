// sort.cpp: определяет точку входа для консольного приложения. 
// 

 #include "stdafx.h"

 #include <iostream>
 #include <ctime>
 using namespace std;




 void bubbleSort(unsigned char*, char); // прототип функции сортировки пузырьком 


 int main(int argc, char* argv[])


  {
	 	srand(time(NULL));
	 	setlocale(LC_ALL, "rus");
	     cout << "Введите число элементов массива: ";
	 	int n; // длина массива 
	     cin >> n;
	
		

		     unsigned char *a = new unsigned char[n]; // одномерный динамический массив  
	
		
		
		 	for (int i = 0; i<n; ++i) 	//Считываем n чисел в массив 
		 		cin >> a[i];
	

	 	//Следующие три строки отвечают за сортировку 
		 	for (int i = 0; i<n; ++i)
		 		for (int j = i + 1; j<n; ++j)
		 			if (a[j]<a[i])swap(a[i], a[j]);
	

		
		 	for (int i = 0; i < n; ++i)
		 		cout << a[i] << " "; //Вывод массива на экран 
	

		

		 	cout << endl;
	

		 	system("pause");
			return 0;
	}

