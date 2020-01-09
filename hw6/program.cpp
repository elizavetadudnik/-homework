
// Дано трехзначное число. Вывести вначале его последнюю цифру (единицы), а затем — его среднюю цифру (десятки).

#include <iostream>

using namespace std;
int main()

{
	int number;
	cin >> number;
	cout << "последняя цифра числа" << number % 10 << "средняя цифра числа" << number / 10 % 10;
	return 0;
}


//	Даны две переменные целого типа: A и B. Если их значения не равны, то присвоить каждой переменной большее из этих значений, а если равны, то присвоить переменным нулевые значения.
// Вывести новые значения переменных A и B.

#include <iostream>

using namespace std;
int main()
{
    int A,B;
    cin >> A >> B; 
 
    if (A = B)
        A == 0;
        B == 0;
    if (A > B) 
		B == A;
	else if (A < B)
		A == B;
		cout << "A = " << a << "B = " << B << endl;
 
    return 0;
     }
 
      
 
// Даны два целых числа А и В(А < B). Найти сумму всех целых чисел от А до В включительно.

#include <iostream> 

using namespace std;
int main();

{
	int A,B;
	cin >> A >> B;
	for (int i = A, A <= B, i++)
	{
	sum = sum + i;
	}
}










#include <iostream> // ввод-вывод

using namespace std;

void cruelFunc(); // сигнатура: тип возвращаемого значения + название функции + аргументы
void helloFunc();

int main()
{
	// ctrl + F5 - запуск программы
	// F10 - отладка

	// cout - вывод на консоль, endl - вывод пустой строки
	cout << "Input two integer numbers" << endl;

	// int; float, double - вещественные (double более точный); bool

	int number1 = 0;
	int number2 = 0;

	// cin - считывание с клавиатуры
	cin >> number1 >> number2;

	int sum = number1 + number2;

	cout << "Sum is " << sum << endl;

	if (number1 > number2)
	{
		cout << "first number is greater" << endl;
	}
	else
	{
		cout << "second number is equal to the first or greater than first" << endl;
	}

	// i += 1 <=> ++i
	// (начальное значение; выполняем пока; после каждой итерации увеличиваем i на единицу)
	// <> (Pascal)  <=> != (С++)
	// = (Pascal) <=> == (C++)

	// while (условие)
	// {
	// }

	cruelFunc();

	return 0;
}

void cruelFunc()
{
	for (int i = 0; i < 10; ++i)
	{
		cout << "Hello, cruel world!!!" << endl;
	}
	helloFunc();
}

void helloFunc()
{
	cout << "Hello, good world!!!" << endl;
}


