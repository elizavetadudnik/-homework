
using namespace std;
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
    int task1();
	void task2();
	return 0;
}

// проверить, явл. ли слово палиндромом.

int task1;
{
	char symbols[size];
	int const size = 5;

	for (int i = 0; i < size; ++i)
	{
		cin >> symbols[i];
	}

	for (int i = 0; i < size; ++i)
	{
		cout << symbols[i];

		if (symbols[i] == symbols[6 - i])
		{
			cout << "является палиндромом" << endle;
		}
	}
		else
		{
			cout << "не является палиндромом" << endl;
		}

	
}

// Дается последовательность чисел. Нужно определить, сколько есть пар чисел, в которых есть хотя бы одно число, оканчивающееся на "3".

{
void task2

	int const size = 5;
	int arr[size];

	for (int i = 0; i < size; ++i)
	{
		arr[i] = rand() % 101 - 100;
	}

	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int countPairs = 0;
	

	for (int i = 0; i < size - 1; ++i)
	{
		if (arr[i] mod 3 = 0)
		{
			++countPairs;
		}
	}

	cout << countPairs << endl;
}


