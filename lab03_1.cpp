// Lab_03_1.cpp
// Катерина Шклярук
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 31

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;       // вхідний параметр
    double y1, y2;  // результати обчислення
    double A;       // функціонально стала частина виразу
    double B;       // функціонально змінна частина виразу

    cout << "x = ";
    cin >> x;

    A = 2 * fabs(13 - x);

    // Спосіб 1: розгалуження у скороченій формі

    if (x <= -1)
        B = exp(fabs(x - 5));

    if (-1 < x && x < 1)
        B = pow(sin(pow(x, 3)), 2) - 1;

    if (x >= 1)
        B = cos(fabs(x)) / (1 + pow(sin(x), 2));

    y1 = A * B;

    cout << endl;
    cout << "1) y = " << y1 << endl;


    // Спосіб 2: розгалуження у повній формі

    if (x <= -1)
        B = exp(fabs(x - 5));
    else
        if (-1 < x && x < 1)
            B = pow(sin(pow(x, 3)), 2) - 1;
        else
            B = cos(fabs(x)) / (1 + pow(sin(x), 2));

    y2 = A * B;

    cout << "2) y = " << y2 << endl;

    return 0;
}