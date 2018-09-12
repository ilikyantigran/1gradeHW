//32)Дано натуральное число x. Выбросить из записи числа х цифры 0 и 5,
// оставив прежним порядок остальных цифр. Например, из числа 590155069 должно получиться 9169.
#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <fstream>
#include <cstring>

#define _USE_MATH_DEFINES

using namespace std;

int main()
{
  string x;
  cin >> x;
  for(int i =0; i< x.length(); i++)
  {
    if(x[i] != '0' && x[i] != '5')
    cout << x[i] ;
  }
  cout << endl;
  return 0;
}
