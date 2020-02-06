

#include <iostream>
using namespace std;


int task1();
int task2();


int main()
{
    setlocale(LC_ALL, "Russian");
    task1();
	task2();

    return 0;
}


{
void task1;
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

	else
	{
		cout << " 'a' не содержится в массиве" << endl;
	}
}

}

// Дан целочисленный массив из 40 элементов.Элементы массива могут принимать целые значения от –100 до 100 включительно.
// Опишите на естественном языке или на одном из языков программирования алгоритм, позволяющий найти и вывести количество пар 
// элементов массива, произведение которых положительно, а сумма кратна 7. Под парой подразумевается два подряд идущих элемента массива.


{
void task2
	int const size = 20;
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
	int prPairs = 0;
	int sumPairs = 0;

	for (int i = 0; i < size - 1; ++i)
	{
		int prPair = arr[i] + arr[i + 1];
		if ((prPairs > 0) && (sumPair % 7 = 0))
		{
			++countPairs;
		}
	}

	cout << countPairs << endl;
}