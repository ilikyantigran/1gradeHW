#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  cout << "Обработка последовательности дробных чисел. После ввода каждого числа нажимайте <Enter>" << endl;

  double x,sum;
  int n = 0;
  sum = 0;

  for (int i = 0; i<5; i++)
  {
    cin >> x;
    sum+=x;
    n++;
    cout << "Введено чисел: " << n << ". Сумма : " << sum <<endl;
  }

  return 0;
}
