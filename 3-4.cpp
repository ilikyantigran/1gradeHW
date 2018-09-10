#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <fstream>

#define _USE_MATH_DEFINES

using namespace std;

int main()
{
	string str;
	//cin >>     cout<<
	ofstream rec("D:\\cxvfzd\\keks.txt");
	cin >> str;
	rec << str;
	rec.close();
	char lul[50];
	ifstream read("D:\\cxvfzd\\keks.txt");
	read.getline(lul, 50);
	read.close();
	cout << lul << endl;
}
