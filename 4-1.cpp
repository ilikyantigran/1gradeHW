#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string str;
	char a;
	int i;
	int S = 0;

	ofstream rec("C:\\Users\\tigra\\Desktop\\c++\\keks.txt");

	for (i = 0; i < 10; i++)
	{
		cin >> a;
		str += a;
	}

	rec << str;
	rec.close();

	char lul[50];

	ifstream read("C:\\Users\\tigra\\Desktop\\c++\\keks.txt");

	read.getline(lul, 50);

	read.close();

	cout << lul << endl;

	for (i = 0; i < 10; i++)
	{
		S += str[i] - '0';
	}
	
	cout << S << endl;
}
