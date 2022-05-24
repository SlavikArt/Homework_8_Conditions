#include <iostream>

using namespace std;

string checkForFloatPart(double num) {
    if (num - (int) num != 0)
    {
        return "имеет вещественную часть";
    }
    return "не имеет вещественную часть";
}

int main()
{
    /* Проверить, имеет ли введённое число вещественную часть.
    Например, числа 3.14 и 2.5 – имеют вещественную часть,
    а числа 5 и 10.0 – нет. */

    setlocale(0, "rus");

    double num;

    cout << "Введите число: ";
    cin >> num;

    cout << "Число " << num << " " << checkForFloatPart(num) << "\n";
}