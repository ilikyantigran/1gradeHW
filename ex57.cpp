//57)Создать массив, содержащий сведения в библиотеке о книгах: ФИО автора, название, год издания.
// Данные вводить с клавиатуры.
//1. найти название книги, автор и год издания которой вводятся вручную;
//2. определить имеется ли книга, в названии которой есть слово «Паскаль». Если «да»,
//то сообщить автора и год издания.
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

int main()
{
  int count;
  cout << "Введите количество книг" << endl;
  cin >> count;
  string array[3][count];

  for(int i = 0; i< count; i++)
  {
    cout << "Введите автора" << endl;
    cin >> array[0][i];
    cout<< "Введите название" << endl;
    cin >> array[1][i];
    cout << "Введите год издания" <<endl;
    cin>> array[2][i];
  }

  for (int j = 0; j<count;j++)
  {
    cout<<array[0][j]<< "|"<<array[1][j]<< "|"<<array[2][j]<<endl;
  }
  cout<< endl;

  for (int z = 0; z <count; z++)
  {
    if(array[1][z] == "Паскаль")
      cout << array[0][z]<< "|"<<array[1][z]<< "|"<<array[2][z]<<endl;
  }
  return 0;
}
