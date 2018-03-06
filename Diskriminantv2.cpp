#include "stdafx.h" 
#include <iostream> 


using namespace std;
int a, b, c;
int discriminant(int a, int b, int c);

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Имеется уравнение вида : ax^2+bx+c";
	cout << "\nВведите целочисленное значение а: ";
	cin >> a;
	cout << "\nВведите целочисленное значение b: ";
	cin >> b;
	cout << "\nВведите целочисленное значение c: ";
	cin >> c;
	int d = discriminant(a, b, c);
	cout << "\n" <<d;
	d = sqrt(d);
	if (d > 0)
	{
		int x1 = (-b + d) / 2 * a;
		int x2 = (-b - d) / 2 * a;
		cout << "\n" << "Первый корень: " << x1 << "\n" << "Второй корень: " << x2 << "\n";
	}
	else if (d == 0)
	{
		int x3 = (-b / 2 * a);
		cout << "\n" << "Единственный корень равен : " << d;
	}
	else if (d < 0)
	{
		cout << "/n" << "Корней нет. ";
	}
	system("pause");
	return 0;
}

int discriminant(int a, int b, int c) {
	int d;
	d = (b * b) - (4 * a * c);
	return d;
}