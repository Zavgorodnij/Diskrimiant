// Diskriminant.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	static int A,B,C,D,X1,X2;
	cout << "A="; cin >> A; cout << "B="; cin >> B; cout << "C="; cin >> C;
	D = sqrt((B*B) - (4 * A*C));
	if (D > 0)
	{
		X1 = ((-B) + D) / (2*A);
		X2= ((-B) - D) / (2 * A);
		cout << "X1=" << X1 << " X2=" << X2<<endl;

	}
	if (D == 0)
	{
		X1 = ((-B) + D) / (2 * A);
		cout << "X1=" << X1 << endl;
	}
	if (D < 0)
	{
		cout << "Сорян, но дискриминанта нету" << endl;
	}
	system("pause");
	return 1;
}

