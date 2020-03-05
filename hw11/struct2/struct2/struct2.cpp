

#include <iostream>
using namespace std;


struct Parabola
{
	// метод
	void setA(int coeffA)
	{
		if (coeffA == 0)
		{
			cout << "It is not parabola!" << endl;
			return;
		}

		a = coeffA;
	}

	void setB(int coeffB) 
	{
		b = coeffB;
	}

	void setC(int coeffC)
	{
		c = coeffC;
	}

	void printParabola()
	{
		if (a == 1) 
		{
			cout << "x * x";
		}
		else
		{
			cout << a << "x * x";
		}

		if (b == 1)
		{
			cout << " + x";
		}
		else if (b != 0)
		{
			cout << " + " << b << "x";
		}

		if (c != 0)
		{
			cout << " + " << c;
		}

		cout << endl;
	}

	bool pointOfParabola(int x, int y)
	{
		bool pointOfParab = false;
		if (y == a * x * x + b * x + c)
		{
			pointOfParab = true;
		}

		return pointOfParab;
	}

	// поля
	private:
	int a = 1;
	int b = 0;
	int c = 0;
};

int main()
{
	setlocale(LC_ALL, "Russian");

	Parabola parabola;

	parabola.setA(1);
	parabola.setB(0);
	parabola.setC(0);
	parabola.printParabola();

	int x = 0;
	int y = 0;

	cout << "Задайте координаты точки на плоскости" << endl;
	cin >> x >> y;

	if (parabola.pointOfParabola(x, y))
	{
		cout << "Точка (" << x << ", " << y << ") принадлежит параболе" << endl;
	}
	else
	{
		cout << "Точка (" << x << ", " << y << ") не принадлежит параболе" << endl;
	}
}


