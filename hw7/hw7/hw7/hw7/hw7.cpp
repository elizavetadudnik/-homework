


#include <iostream>

using namespace std;

int task1();
int task2();

 int main()
{
    setlocale(LC_ALL, "Russian");
    task1();

    return 0;
}

      // Дано вещественное число А и целое число N > 0. Используя один цикл, найти сумму  1 + А + А^2 + A^3 + ... + A^n.


    {
        int task1()

        int N, i;
        double A, PowerOfA, sum;
        cout << "введите N";
        cin >> N;
        cout << "введите A";
        cin >> A;

        b = 1;
        c = 1;
        for (i = 1;i <= N;i++);

        {PowerOfA *= A; sum += PowereOfA;}

        cout << sum << endl;

        retutn 0;
}



    // Даны целые положительные числа N и K.Используя только операции сложения и вычитания, найти частное от деления нацело N на K, а также осттаток от этоого деления.

    {
        int task2()

        int n, past, current, count  
        for (int i = 0; i < n; i++) 
        {
            std::cin >> current;
            if (i > 0 && current < past) 
            {
            std::cout << current << " ";
         
            }
                past = current;
         return 0;
    }

        // Найти 1! + 2! + 3! + ... + N!.

        {
            int task3()

            int N, factorial, sum
            for (int i = 0; i < N; i++)
            {
                i *= i;
                count << i << endle
                sum += 1;
            }
            count << sum << endle;
            return 0;
        }