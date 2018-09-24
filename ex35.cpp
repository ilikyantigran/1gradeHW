//35)Дана строка S из n символов. Подсчитать максимальное число подряд идущих пробелов.
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  char* S;
  int sum = 0;
  int max = 0;
  int n;
  bool flag = false;
  cin >> S;
  cout << "введите n" << endl;
  cin >> n;
  for (int i = 0; i<n;i++)
  {
    if (S[i]== ' ' && flag == true)
      {
        sum++;
        if (sum>max)
          max = sum;
          cout << "есть" << endl;
      }
    if (S[i]==' ')
      {
        cout << "flag" << endl;;
        flag = true;
      }
    else
      {
        cout<<"else"<<endl;
        sum = 0;
        flag = false;
      }

  }
  if (max!=0)
    max++;
  cout << max << endl;
  return 0;
}
