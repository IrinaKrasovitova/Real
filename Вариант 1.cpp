#include "stdafx.h"
#include <locale.h>
#include <conio.h>
#include <iostream>
 
using namespace std;
 
class Chislo
{
    double x;
public:
    Chislo()
    {
        x=0;
    }
    Chislo(double x)
    {
        this->x=x;
    }
    void CreateChislo(double x)
    {
        this->x=x;
    }
    int ras4et()
    {
        int a=0, d=x/10;
        while (1)
        {
            if (d!=0) 
            {
                a++;
                d/=10;
            }
            else 
            {
                a++;
                break;
            }
        }
        return a;
    }
    void print()
    {
        cout << "Количество цифр в целой части числа ";
        printf("%lf",x);
        cout << " => " << ras4et() << '\n';
    }
};
 
void main()
{
    setlocale (LC_ALL, "rus");
    double y;
    cout << "Введите вещественное число x=";
    scanf("%lf",&y);
    Chislo p=Chislo(y);
    p.print();
    getch();
}
