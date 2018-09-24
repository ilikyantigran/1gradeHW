#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string str;
	//cin >>     cout<<
	ofstream rec("//Users//tigran//prj//1gradeHW//test.txt");
	cin >> str;
	rec << str;
	rec.close();
	char file[50];
	ifstream read("//Users//tigran//prj//1gradeHW//test.txt");
	read.getline(file, 50);
	read.close();
	cout << file << endl;
}
