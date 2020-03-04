

#include <iostream>
using namespace std;


struct Parabola
{
	// метод
	void setA(int coeffA)
	{
		a = coeffA;
	}

	void setB(int coeffB) 
	{
		b = coeffB;
	}

	void getC(int coeffC)
	{
		c = coeffC;
	}

	void printParabola()
	{
		cin >> a;
		cin >> b;
		cin >> c;
		cout << a << "x * x + " << b << "x + " << c << endl;
	}

	// поля
	private:
	int a = 1;
	int b = 0;
	int c = 0;
};

struct point
{
	bool pointOfParabola(int x, int y)
	{
		bool pointOfParab = false;
		if (y == a * x * x + b * x + c)
		{
			pointOfParab = true;
		}

		return pointOfParab;
	}




	int main()
	{

	}


