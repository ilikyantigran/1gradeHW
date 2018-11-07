#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	string STOP = "";
	int IntLight, IntDay, IntCurtain;

	while (STOP != "Все")
	{
		cout << "Если лампа включена, ввести 1, нет - 2" << endl;
		cin >> IntLight;
		cout << "Если день, ввести 1, нет - 2" << endl;
		cin >> IntDay;
		cout << "Если шторы раздвинуты ввести 1, нет - 2" << endl;
		cin >> IntCurtain;

		if ((IntLight == 1) || (IntDay == 1 && IntCurtain == 1))
			cout << "Светло" << endl;
		else
			cout << "Темно" << endl;
			
		cout << "Чтобы остановиться, напишите Все" << endl;

		cin >> STOP;
	}

	return 0;
}
