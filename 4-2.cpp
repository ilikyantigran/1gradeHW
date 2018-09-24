#include <iostream>
#include <cstdlib>

using namespace std;

char sign(int x)
{
	if (x > 0)
		return '+';
	if(x < 0)
		return '-';
	if(x == 0)
		return '0';
    return 0;
}

int main()
{
	int x;
	cin >> x;
	cout << sign(x) << endl;
  return 0;
}
