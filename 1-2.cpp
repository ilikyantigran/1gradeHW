#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;

	cout << "Сумма : " <<a + b << endl;
	cout << "Разность : " <<a - b << endl;

	if (b!=0)
		cout << "Деление : " <<a / b << endl;
	else cout << "Не делите на ноль" << endl;

	cout << "Произведение : " <<a * b << endl;

	return 0;
}
