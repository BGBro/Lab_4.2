// Lab_04_2.cpp
// Горбачов Богдан
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 3


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xk, dx, A, B, y;

	cout << "xp = "; cin >> x;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;

	cout << "---------------------------" << endl;

	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;

	cout << "---------------------------" << endl;

	while (x <= xk)
	{
		A = 2 / x + abs(x);

		if (x < 0)
			B = 1 + 4 * pow(x, 2);
		else
			if (0 <= x && x <= 2)
				B = pow(exp(x) + abs(x), 2);
			else
				B = 5 * sin(pow(x, 2) + 1);

		y = A + B;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;

		x += dx;
	}

	cout << "---------------------------" << endl;

	system("break");
}