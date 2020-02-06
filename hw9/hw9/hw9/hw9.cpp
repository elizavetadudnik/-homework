#include <ctime>
#include <iostream>
using namespace std;


void task1();
void task2();
void task3();

int main()
{
    setlocale(LC_ALL, "Russian");
    task3();

    return 0;
}

void task1()
{
	int const size = 5;
	int sum = 0;

	char symbols[size];

	for (int i = 0; i < size; ++i)
	{
		cin >> symbols[i];
	}

	bool contains = false;

	for (int i = 0; i < size; ++i)
	{
		cout << symbols[i];
		
		if (symbols[i] == 'a')
		{	
			contains = true;
			sum += 1;
		}
	}
	cout << endl;

	if (contains)
	{
		cout << "в строке содержится " << sum << " символов 'a'" << endl;
	}
	else
	{
		cout << " 'a' не содержится в массиве" << endl;
	}
}

void task2()
{
	int const size = 20;
	int arr[size];

	srand(time(NULL));

	for (int i = 0; i < size; ++i)
	{
		arr[i] = rand() % 201 - 100;
	}

	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int countPairs = 0;

	for (int i = 0; i < size - 1; ++i)
	{
		int prPairs = arr[i] * arr[i + 1];
		int sumPairs = arr[i] + arr[i + 1];
		if ((prPairs > 0) && (sumPairs % 7 == 0))
		{
			++countPairs;
		}
	}

	cout << countPairs << endl;
}

// Переставить элементы строки так, чтобы они расположились в обратном порядке.
void task3()
{
	int const size = 6;
	char symbols[size];
	for (int i = 0; i < size; ++i)
	{
		cin >> symbols[i];
	}

	for (int i = 0; i < size; ++i)
	{
		cout << symbols[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < size / 2; ++i)
	{
		char symbol = symbols[i];
		symbols[i] = symbols[size - i - 1];
		symbols[size - i - 1] = symbol;
	}

	for (int i = 0; i < size; ++i)
	{
		cout << symbols[i] << " ";
	}
	cout << endl;
}