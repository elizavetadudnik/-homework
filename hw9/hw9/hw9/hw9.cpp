

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
