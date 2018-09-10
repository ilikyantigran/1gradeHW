#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <fstream>
#include <cstring>
#define _USE_MATH_DEFINES
using namespace std;
int main()
{
	system("chcp 1251");
	system("cls");
	double Sys, l, sum, n;
	sum = 0;
	l = 0;
	string number;
	cout << "Введите систему счисления" << endl;
	cin >> Sys;
	cout << "Введите число" << endl;
	cin >> number;
	l = number.length();
	for (int i = 0; i <l; i++)
	{
		if (number[i] == '1')
			n = 1;
		else if (number[i] == '2')
			n = 2;
		if (number[i] == '3')
			n = 3;
		else if (number[i] == '4')
			n = 4;
		if (number[i] == '5')
			n = 5;
		else if (number[i] == '6')
			n = 6;
		if (number[i] == '7')
			n = 7;
		else if (number[i] == '8')
			n = 8;
		if (number[i] == '9')
			n = 9;
		else if (number[i] == 'A')
			n = 10;
		if (number[i] == 'B')
			n = 11;
		else if (number[i] == 'C')
			n = 12;
		if (number[i] == 'D')
			n = 13;
		else if (number[i] == 'E')
			n = 14;
		if (number[i] == 'F')
			n = 15;
		sum += pow(Sys, l - 1 - i)*n;
	}
	cout << sum << endl;
}
