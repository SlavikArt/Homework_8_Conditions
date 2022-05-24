#include <iostream>

using namespace std;

int main()
{
    /* Определить, параллельна ли прямая линия оси ординат,
    либо оси абсцисс. Прямая задаётся двумя точками. */

    setlocale(0, "rus");

    double x1;
    double y1;

    double x2;
    double y2;

    cout << "Введите координаты 2-х точек прямой:\n";
    
    cout << "X1: ";
    cin >> x1;
    cout << "Y1: ";
    cin >> y1;

    cout << "X2: ";
    cin >> x2;
    cout << "Y2: ";
    cin >> y2;

    if (y1 == y2)
    {
        cout << "Данная прямая параллельна оси абсцисс.\n";
    }
    else if (x1 == x2)
    {
        cout << "Данная прямая параллельна оси ординат.\n";
    }
    else
    {
        cout << "Данная прямая не параллельна оси ординат.\n";
    }
}