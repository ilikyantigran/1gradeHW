#include <random>
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <time.h>

using namespace std;

int net;

int bias = 7;// Порог функции активации

int weights[10]; // Весы



// Уменьшение значений весов, если сеть ошиблась и выдала 1
  void decrease (int* number)
  {
    for (int i = 0; i<15; i++)
        //# Возбужденный ли вход
        if (number[i] == 1)
            //Уменьшаем связанный с ним вес на единицу
            weights[i] -= 1;
  }

 bool proceed (int* number)
  {//Рассчитываем взвешенную сумму
    net = 0;
    for (int i = 0; i<15; i++)
        net += number[i]*weights[i];
    return net >= bias;
  }

  void increase(int* number)
    {
      for (int i = 0; i<15; i++)
        if (number[i] == 1)
            weights[i] += 1;
    }

 int main()
 {
   for (int i=0; i< 15; i++)
   {
     weights[i] = 0;
   }
// Цифры (Обучающая выборка)
int num0[15] = {1,1,1,1,0,1,1,0,1,1,0,1,1,1,1};
int num1[15] = {0,0,1,0,0,1,0,0,1,0,0,1,0,0,1};
int num2[15] = {1,1,1,0,0,1,1,1,1,1,0,0,1,1,1};
int num3[15] = {1,1,1,0,0,1,1,1,1,0,0,1,1,1,1};
int num4[15] = {1,0,1,1,0,1,1,1,1,0,0,1,0,0,1};
int num5[15] = {1,1,1,1,0,0,1,1,1,0,0,1,1,1,1};
int num6[15] = {1,1,1,1,0,0,1,1,1,1,0,1,1,1,1};
int num7[15] = {1,1,1,0,0,1,0,0,1,0,0,1,0,0,1};
int num8[15] = {1,1,1,1,0,1,1,1,1,1,0,1,1,1,1};
int num9[15] = {1,1,1,1,0,1,1,1,1,0,0,1,1,1,1};

//Список всех вышеуказанных цифр
int* nums[10] = {num0,num1,num2,num3,num4,num5,num6,num7,num8,num9};

// Виды цифры 5 (Тестовая выборка)
int num51[15] = {1,1,1,1,0,0,1,1,1,0,0,0,1,1,1};
int num52[15] = {1,1,1,1,0,0,0,1,0,0,0,1,1,1,1};
int num53[15] = {1,1,1,1,0,0,0,1,1,0,0,1,1,1,1};
int num54[15] = {1,1,0,1,0,0,1,1,1,0,0,1,1,1,1};
int num55[15] = {1,1,0,1,0,0,1,1,1,0,0,1,0,1,1};
int num56[15] = {1,1,1,1,0,0,1,0,1,0,0,1,1,1,1};

// Инициализация весов сети



int option;
srand(time(NULL));
// Тренировка сети
for (int i = 0; i< 10000; i++)
{
    // Генерируем случайное число от 0 до 9

    option = rand() % 10;

    // Если получилось НЕ число 5
    if (option != 5)
        // Если сеть выдала True/Да/1, то наказываем ее
        {
          if (proceed(nums[option]))
            decrease(nums[option]);
        }  // Если получилось число 5
    else
        // Если сеть выдала False/Нет/0, то показываем, что эта цифра - то, что нам нужно
        if (proceed(num5) == false)
            increase(num5);
  }
// Вывод значений весов
for(int i = 0; i<3;i++)
{
  cout << weights[i] << "  ";
}
cout << endl;
for(int i = 3; i<6;i++)
{
  cout << weights[i]<< "  ";
}
cout << endl;
for(int i = 6; i<9;i++)
{
  cout << weights[i]<< "  ";
}
cout << endl;
for(int i = 9; i<12;i++)
{
  cout << weights[i]<< "  ";
}
cout << endl;
for(int i = 12; i<15;i++)
{
  cout << weights[i]<< "  ";
}
cout << endl;

// Прогон по обучающей выборке
cout << "0 это 5? " << proceed(num0) << endl;
cout << "1 это 5? " << proceed(num1) << endl;
cout << "2 это 5? " << proceed(num2) << endl;
cout << "3 это 5? " << proceed(num3) << endl;
cout << "4 это 5? " << proceed(num4) << endl;
cout << "6 это 5? " << proceed(num6) << endl;
cout << "7 это 5? " << proceed(num7) << endl;
cout << "8 это 5? " << proceed(num8) << endl;
cout << "9 это 5? " << proceed(num9) << endl;

// Прогон по тестовой выборке
cout << "Узнал 5? " << proceed(num5) << endl;
cout << "Узнал 5-1? " << proceed(num51) << endl;
cout << "Узнал 5-2? " << proceed(num52) << endl;
cout << "Узнал 5-3? " << proceed(num53) << endl;
cout << "Узнал 5-4? " << proceed(num54) << endl;
cout << "Узнал 5-5? " << proceed(num55) << endl;
cout << "Узнал 5-6? " << proceed(num56) << endl;

return 0;
}
