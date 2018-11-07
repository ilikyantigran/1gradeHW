#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c, D;

	cin >> a >> b >> c;
	if (a == 0)
	{// Задание 3
		if (b != 0)
		{
			cout << "x = " << (-c / b) << endl;
		}
		else
		{
			if (c == 0)
			{
				cout << "x = любому числу" << endl;
			}
			else
			{
				cout << "Нет решений" << endl;
			}
		}
	}//Конец задания 3
	else
	{
		D = (b*b - 4 * a*c);
		if (D < 0)
			cout << "Нет решений" << endl;
		else
		{
			if (D == 0)
			{
				cout << "x = " << (-b + sqrt(b*b - 4 * a*c)) / 2 * a << endl;
			}
			else
			{
				cout << "x1 = " << (-b + sqrt(b*b - 4 * a*c)) / 2 * a << endl;
				cout << "x2 = " << (-b - sqrt(b*b - 4 * a*c)) / 2 * a << endl;
			}
		}
	}
	
	return 0;
}
