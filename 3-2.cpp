#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int S, m, n, S1;
  double p;

  cin >> S >> m >> n;

  S1 = m * n * 12;
  p = (S1 - S) / (12 * n* 100);
  
  cout << p << endl;

  return 0;
}
