#include <iostream>
#include <cstdlib>
#include <string>
#include <string.h>
#include <cmath>
#include <fstream>

#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

using namespace std;

int main()
{
	char str1[] = "qwertyuioplkjhgfdsazxcvbnmlkjh";
	cout << str1 << endl;
	int i, j;
	//char str2[30];
	char a;
	bool flag;
	for (i = 0; i < 30; i++)
	{
		flag = true;
		for (j = 0; j < 30 - (i+1); j++)
		{
			if ((int)str1[j] > (int)str1[j+1])
			{
				flag = false;
				swap(str1[j], str1[j + 1]);
			}
		}
		if (flag)
		{
			break;
		}
	}
	cout << str1 << endl;
}
