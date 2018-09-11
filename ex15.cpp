//15)Получить все четырехзначные целые числа,
// в записи которых нет двух одинаковых цифр (указание: использовать полный перебор).
#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <fstream>
#include <cstring>

#define _USE_MATH_DEFINES

using namespace std;

bool f(int* n)//нерационально
{

  if(n[0] == n[1] || n[0] == n[2] ||n[0] == n[3] ||n[1] == n[2] ||n[1] == n[3] ||n[2] == n[3] )
    return false;
  else
    return true;
}

int main()
{
  int* n = new int [4];
  for (int x = 1000; x <=9999; x++)
  {
    n[0] = x%10;
    n[1] = x/10%10;
    n[2] = x/100%10;
    n[3] = x/1000%10;
    if (f(n))
    {
      cout << n[3] << n[2] << n[1] << n[0] << endl;
    }
  }
  return 0;
}
