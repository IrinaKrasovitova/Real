//то же самое, что и в 1 варианте, только замени середину кода, начиная с int ras4et() на int GetFracNumCount()

class Chislo
{
//...
    int GetFracNumCount()
    {
        int numCount = 0;
        double intPart;
        double fracPart = modf( x, &intPart );
        while( fracPart != 0 )
        {
            fracPart = modf( fracPart * 10.0, &intPart );
            numCount++;
        }
        return numCount;
    }
};
void main()
{
//...
    cout << "Количество цифр в дробной части числа: " << p.GetFracNumCount();
//...
}
