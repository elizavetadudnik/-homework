


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

    // Дано вещественное число А и целое число N > 0. Используя один цикл, найти сумму  1 + А + А^2 + A^3 + ... + A^n.
int task1()
{

	int N = 0;
	double A = 0;
	double powerOfA = 1;
	double sum = 1;

    cout << "введите N";
    cin >> N;
    cout << "введите A";
    cin >> A;

	for (int i = 1; i <= N; i++)
	{
		powerOfA *= A; 
		sum += powerOfA;
	}

    cout << sum << endl;

    return 0;
}



// Даны целые положительные числа N и K.Используя только операции сложения и вычитания, найти частное от деления нацело N на K, а также осттаток 
// от этоого деления.
int task2()
{
	int N = 0;
	int K = 0;
	int count = 0;
	cin >> K;
	cin >> N;

	while (N >= K)
	{
		N -= K;
		++count;
	}

	cout << count << endl;

    return 0;
}

        
// Найти 1! + 2! + 3! + ... + N!.
        
int task3()
{

	int N = 0;
	int factorial = 1;
	int sum = 0;

	cin >> N;

    for (int i = 0; i < N; i++)
    {
		factorial *= i;
        sum += factorial;
    }
    cout << sum << endl;

    return 0;
}