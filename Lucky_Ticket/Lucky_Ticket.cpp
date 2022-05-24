#include <iostream>

using namespace std;

string checkForLucky(int number) {
	int first = 0;
	int second = 0;

	for (int i = 0; i < 3; i++)
	{
		first += number % 10;
		number /= 10;
	}
	for (int i = 0; i < 3; i++)
	{
		second += number % 10;
		number /= 10;
	}
	return first == second ? "счастливый! :)" : "не счастливый :(";
}

int main()
{
	/* Ввести с клавиатуры шестизначный номер трамвайного
	(троллейбусного) билета, и определить является ли он счастливым
	(совпадают суммы трёх первых и трёх последних цифр билета).
	123006 - счастливый. 345678 - нет. */

	setlocale(0, "rus");

	int number;

	cout << "Введите номер вашего билета (6 цифр): ";
	cin >> number;

	cout << "Ваш билет - " << checkForLucky(number) << "\n";
}