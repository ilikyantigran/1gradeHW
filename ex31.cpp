//Дано целое число n (вводится с клавиатуры). Определить, входит ли цифра 3 в запись числа n2
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int n;
  int sum = 0;
  cin >> n;
  longint n2 = n*n;
  cout << n2 << endl;
  do {
    if(n2%10 == 3)
        sum++;
    n2 /= 10;
  } while(n2 !=0);
  cout << sum << endl;
  return 0;
}
