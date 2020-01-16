#include <iostream>

using namespace std;

int task1();
int task2();
int task3();

int main()
{
	setlocale(LC_ALL, "Russian");
	task1();

	return 0;
}

// Дано трехзначное число. Вывести вначале его последнюю цифру (единицы), а затем — его среднюю цифру (десятки).
int task1()
{
	int number = 0;
	cin >> number;
	cout << "последняя цифра числа: " << number % 10 << "\nсредняя цифра числа: " << number / 10 % 10;
	return 0;
}

//	Даны две переменные целого типа: A и B. Если их значения не равны, то присвоить каждой переменной большее из этих значений, а если равны, то присвоить переменным нулевые значения.
// Вывести новые значения переменных A и B.
int task2()
{
	int A = 0;
	int B = 0;

	cin >> A >> B;

	if (A == B)
	{
		A = 0;
		B = 0;
	}
	if (A > B)
	{
		B = A;
	}
	else if (A < B)
	{
		A = B;
	}

	cout << "A = " << A << "; B = " << B << endl;

	return 0;
}



// Даны два целых числа А и В(А < B). Найти сумму всех целых чисел от А до В включительно.
int task3()
{
	int A = 0;
	int B = 0;

	cin >> A >> B;

	int sum = 0;

	for (int i = A; A <= B; ++i)
	{
		sum = sum + i;
	}
	
	return 0;
}