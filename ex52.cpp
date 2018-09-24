#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
  int array[2][2];

  cout<<"заполните первый столбец матрицы"<<endl;
  cin >> array[0][0];
  cin >> array [0][1];

  cout<<"заполните второй столбец матрицы"<<endl;
  cin >> array[1][0];
  cin >> array [1][1];
  cout << endl;

  cout << array [0][0] << " " << array [0][1] << endl;
  cout << array[1][0] << " " << array [1][1] <<endl;

  cout<< "определитель равен: " << (array[0][0]*array[1][1])-(array[0][1]*array[1][0]) << endl;
  return 0;
}
