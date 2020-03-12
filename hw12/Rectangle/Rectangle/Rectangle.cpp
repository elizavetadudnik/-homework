/*
Создать структуру Rectangle(прямоугольник).

Поля структуры :
-Четыре точки на плоскости, каждая из точек задается двумя целыми значениями((x1, y1), …, (x4, y4))

Методы структуры :
-void createRectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
Этот метод принимает координаты четырех точек на плоскости и записывает переданные значения в соответствующие поля.Получается, что мы задали прямоугольник после того как передали эти значения.До этого прямоугольник задан не был, так как не были известны ни длины его сторон, ни координаты его точек.
Желательно, чтобы метод умел проверять, что эти точки вообще прямоугольник задают.В противном случае можно поругаться на пользователя и сообщить ему, что он передал некорректные значения.

- int square()
Думаю, из названия понятно, что этот метод должен возвращать площадь прямоугольника.Для вычисления площади пользуемся данными, которые объект структуры прямоугольник хранит в своих полях.

- void diagonalsIntersect()
Этот метод ничего не возвращает, зато печатает на экране координаты точки пересечения диагоналей.

- float getWidth()
Этот метод возвращает значение ширины прямоугольника.
Напоминание: float – вещественные числа

- float getLength()
Этот метод возвращает значение длины прямоугольника.

- bool isPointOfRectangle(int x, int y)
Этот метод проверяет, принадлежит ли переданная пользователем точка прямоугольнику.
*/


#include <iostream>

using namespace std;

// прямоугольник

struct Rectangle
{
    // конструктор, нет типа возвращаемого значения, называется также как структура, при создании вызывается одна из перегрузок конструктора
    Rectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
    {
        this->x2 = x2;
        this->x3 = x3;
        this->x1 = x1;
        this->x4 = x4;
        this->y1 = y1;
        this->y2 = y2;
        this->y3 = y3;
        this->y4 = y4;
    }

    float square()
    {
        return getWidth() * getLength();
    }

    float getWidth()
    {
        int width = 0;
        int length = 0;

        fiveSidesLength(width, length);

        return width;
    }

    float getLength()
    {
        int width = 0;
        int length = 0;

        fiveSidesLength(width, length);

        return length;
    }


private: 
    // передача по ссылке
    void fiveSidesLength(int& width, int& length)
    {
        int side1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        int side2 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
        int side3 = sqrt((x2 - x4) * (x2 - x4) + (y2 - y4) * (y2 - y4));
        int side4 = sqrt((x4 - x1) * (x4 - x1) + (y4 - y1) * (y4 - y1));
        int side5 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));

        width = getWidthAuxiliary(side1, side2, side3, side4, side5);
        length = getLengthAuxiliary(side1, side2, side3, side4, side5);
        
    }

    int getWidthAuxiliary(int side1, int side2, int side3, int side4, int side5)
    {
        int width = side1;

        if (width < side2)
        {
            width = side2;
        }
        if (width < side3)
        {
            width = side3;
        }
        if (width < side4)
        {
            width = side4;
        }
        if (width < side5)
        {
            width = side5;
        }
            
        return width;
    }

    int getLengthAuxiliary(int side1, int side2, int side3, int side4, int side5)
    {
        int min = getWidthAuxiliary(side1, side2, side3, side4, side5);

        int max = side1;
        if (side2 > max)
        {
            max = side2;
        }
        if (side3 > max)
        {
            max = side3;
        }
        if (side4 > max)
        {
            max = side4;
        }
        if (side5 > max)
        {
            max = side5;
        }

        int length = min;
        if (side1 < max && side1 > min)
        {
            length = side1;
        }
        if (side2 < max && side2 > min)
        {
            length = side2;
        }
        if (side3 < max && side3 > min)
        {
            length = side3;
        }
        if (side4 < max && side4 > min)
        {
            length = side4;
        }
        if (side5 < max && side5 > min)
        {
            length = side5;
        }

        return length;
    }

    int x1 = 0;
    int x2 = 0;
    int x3 = 0;
    int x4 = 0;
    int y1 = 0;
    int y2 = 0;
    int y3 = 0;
    int y4 = 0;

};

int main()
{
    Rectangle pr = Rectangle(0, 0, 1, 1, 1, 0, 0, 1);

    cout << pr.getLength() << endl;
    cout << pr.getWidth() << endl;
    cout << pr.square() << endl;

    return 0;
}