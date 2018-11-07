#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int b, c;

	cin >> b >> c;

	if (b != 0)
	{
		cout << "x = " << (-c / b) <<endl;
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
	
	return 0;
}
