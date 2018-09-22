#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <fstream>

#define _USE_MATH_DEFINES

using namespace std;

int main()
{
  double array1[3][4] = {{5,2,0,10},{3,5,2,5},{20,0,0,0}};
  double array2[4][2] = {{1.2,0.5},{2.8,0.4},{5,1},{2,1.5}};
  double array3[3][2];
  int j, z;
  for (int i = 0;i <3; i++)
    for(j = 0; j<2; j++)
      array3[i][j] = array1[i][0]*array2[0][j] + array1[i][1]*array2[1][j] + array1[i][2]*array2[2][j] +array1[i][3]*array2[3][j];
  cout<<array3[0][0]<< "   "<<array3[0][1]<<endl;
  cout<<array3[1][0]<< "   "<<array3[1][1]<<endl;
  cout<<array3[2][0]<< "   "<<array3[2][1]<<endl;

  double Sell1,Sell2,Sell3,Com1,Com2,Com3;
  Sell1 = array3[0][0];
  Sell2 = array3[1][0];
  Sell3 = array3[2][0];
  Com1 = array3[0][1];
  Com2 = array3[1][1];
  Com3 = array3[2][1];

  if(Sell1 >= Sell2 && Sell1>=Sell3)
    cout << "Больше всего поднял первый"<< endl;
  if(Sell2 >= Sell1 && Sell2>=Sell3)
    cout << "Больше всего поднял второй"<< endl;
  if(Sell3 >= Sell1 && Sell3>=Sell2)
    cout << "Больше всего поднял третий"<< endl;

  if(Com1 >= Com2 && Com1>=Com3)
    cout << "На комиссионных наварился первый" << endl;
  if(Com2 >= Com1 && Com2>=Com3)
    cout << "На комиссионных наварился второй" << endl;
  if(Com3 >= Com1 && Com3>=Com2)
    cout << "На комиссионных наварился третий" << endl;

  return 0;
}
