
//! Быстрая сортировка.
/*! Алгоритм быстрой сортировки массивов.
*/

#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <clocale>

using namespace std;

//! Функция быстрой сортировки
void quick_sort(vector <int> &v, int begin0, int end0)
{
	auto d = end0; //! Число, относительно котрого будем сравнивать 
	
	auto begin = begin0; //! Указатель на начало
	auto end = end0; //! Указатель на конец

	do
	{
		while (v[begin]<d)
			begin++;
		while (v[end]>d)
			end--;
		if (begin <= end)
		{
			swap(v[begin], v[end]); //! Меняем местами
			begin++;
			end--;
		}
	} while (begin <= end);
	if (begin0<end)
		quick_sort(v, begin0, end);
	if (begin<end0)
		quick_sort(v, begin, end0);
}
int main()
{
	setlocale(LC_CTYPE, "rus");
	vector <int> arr; //! Заводим массив.
	/*! Заполняем его цифрами от 0 до 19.
	*/
	for (auto i = 0; i<20; i++)
		arr.push_back(i);
	//! Перемешиваем наш массив
	for (size_t i = 0; i<arr.size(); i++)
		swap(arr[i], arr[rand() % (arr.size() - i) + i]);
	cout << "Массив: ";
	for (size_t i = 0; i<arr.size(); i++)
		cout << arr[i] << " ";
	cout << endl;
	//! Функция быстрой сортировки
	quick_sort(arr, 0, arr.size() - 1);
	cout << "Быстрая сортировка:";
	for (size_t i = 0; i<arr.size(); i++)
		cout << arr[i] << " ";
	cout << endl;
	
	system("pause");
	return 0;
}
