#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

class Angle
{
	static const double Pi;
public: Angle(double deg = 0.0) : _angle(deg) {}

		double getAngle() const
		{
			return _angle;
		}

		double transInRad() const
		{
			return _angle * Pi / 180;
		}

		double transInDeg() const
		{
			return transInRad() * 180 / Pi;
		}

		double sin() const
		{
			return std::sin(transInRad());
		}

		

private: double _angle;
};

const double Angle::Pi = 3.14159265358979323;

int main()
{
	setlocale(LC_ALL, "Russian");
	Angle a1(90.0); // здесь задается значение угла. можешь поставить 45.0  270.0  0.0 и т.д. 

	std::cout << "Угол:\n" << a1.getAngle() << "\n";
	
	std::cout << "Вычисляем sin угла:\n" << a1.sin();
	system("pause");
	return 0;
}
