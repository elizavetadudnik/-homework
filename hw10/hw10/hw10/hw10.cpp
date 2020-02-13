
using namespace std;
#include <iostream>
#include <ctime>

void task1();
void task2();

int main()
{
	setlocale(LC_ALL, "Russian");
    // task1();
	task2();
	return 0;
}

// проверить, явл. ли слово палиндромом.

void task1()
{
	int const size = 5;
	char symbols[size];

	for (int i = 0; i < size; ++i)
	{
		cin >> symbols[i];
	}

	bool isPalindrom = true;

	for (int i = 0; i < size; ++i)
	{
		if (symbols[i] != symbols[size - 1 - i])
		{
			isPalindrom = false;
			break;
		}
	}	

	if (isPalindrom)
	{
		cout << "Слово палиндром" << endl;
	}
	else
	{
		cout << "Слово не палиндром" << endl;
	}
}

// Дается последовательность чисел. Нужно определить, сколько есть пар чисел, в которых есть хотя бы одно число, оканчивающееся на "3".

void task2()
{
	srand(time(NULL));

	int const size = 5;
	int arr[size];

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
		if ((arr[i] % 3 == 0) && (arr[i + 1] % 3 == 0))
		{
			++countPairs;
		}
	}

	cout << countPairs << endl;
}


