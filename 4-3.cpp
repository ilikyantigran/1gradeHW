#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <fstream>

#define _USE_MATH_DEFINES

using namespace std;

int p;

int rect(int a,int b)
{
	return a*b;
}

double trian(int a, int b, int c)
{
	p = (a + b + c) / 2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

double cir(int r)
{
	return 3.14*r*r;
}

int main()
{
	int x, y, z;
	cout << "Для прямоугольника" << endl;
	cin >> x >> y;
	cout << rect(x, y) << endl;
	cout << "Для треугольника" << endl;
	cin >> x >> y >> z;
	cout << trian(x, y, z) << endl;
	cout << "Для круга" << endl;
	cin >> x;
	cout << cir(x) << endl;
}
