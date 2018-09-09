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
	string Enter;
	int sum = 0;
	int kek, lul;
	int l = 0;
	cin >> Enter;
	//cout << Enter;
	bool flag = false;//Вычиталось ли число уже, или нет
	bool was = false;//Прибавлялось ли число уже, или нет
/*	for each (char x in Enter) //Узнать длину
	{
		l += 1;
	}*/
  l = Enter.length();
	for (int i = 0; i < l - 1; i++) //Цикл смотрит все символы, кроме последнего, иначе когда i будет обозначать последний символ строки, программа вылетит, тк нельзя будет прибавить еще одну еденицу, и i+1 не существует
	{
		if (Enter[i] == 'I')
			kek = 1;
		else if (Enter[i] == 'V')
			kek = 5;
		else if (Enter[i] == 'X')
			kek = 10;
		else if (Enter[i] == 'L')
			kek = 50;
		else if (Enter[i] == 'C')
			kek = 100;
		else if (Enter[i] == 'D')
			kek = 500;
		else if (Enter[i] == 'M')
			kek = 1000;

		if (Enter[i+1] == 'I')
			lul = 1;
		else if (Enter[i + 1] == 'V')
			lul = 5;
		else if (Enter[i + 1] == 'X')
			lul = 10;
		else if (Enter[i + 1] == 'L')
			lul = 50;
		else if (Enter[i + 1] == 'C')
			lul = 100;
		else if (Enter[i + 1] == 'D')
			lul = 500;
		else if (Enter[i + 1] == 'M')
			lul = 1000;
		if (kek < lul && (kek == 1 || kek == 10) && flag == false)//если символ стоит перед тем, который больше, надо вычитать. Вычитается только I или X по правилам римских чисел
		{
			sum += lul - kek;
			flag = true;
			was = true;
		}
		else if(was == false)
		{
			flag = false;
			sum += kek;
		}
	}
	if (Enter[l - 1] == 'I') // Прибавление крайнего элемента, который был проигнорирован в цикле
		kek = 1;
	else if (Enter[l - 1] == 'V')
		kek = 5;
	else if (Enter[l - 1] == 'X')
		kek = 10;
	else if (Enter[l - 1] == 'L')
		kek = 50;
	else if (Enter[l - 1] == 'C')
		kek = 100;
	else if (Enter[l - 1] == 'D')
		kek = 500;
	else if (Enter[l - 1] == 'M')
		kek = 1000;

	if (was == false)// проверка на то, был ли он прибавлен в цикле
		sum += kek;
	cout << sum << endl;
  return 0;
}
