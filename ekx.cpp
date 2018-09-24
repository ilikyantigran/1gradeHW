//Дано натуральное число т (т < 27). Получить все трехзначные целые числа, сумма цифр которых равна
//т. (указание: использовать полный перебор)
#include <iostream>
#include <cstdlib>

using namespace std;

int sum(int x) //Функция для нахождения суммы цифр
{
  return (x%10+(x/10)%10+(x/100)%10);
}

int main ()
{
  int n;
  cin >> n;
  for (int i =100; i<=999; i++)
  {
  if (sum(i) == n)
    cout<< i<< endl;
  }
  return 0;
}
