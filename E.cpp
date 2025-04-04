#include <iostream>
using namespace std;

void print(int count, int result)
{
  if (count <= 0)
    return;
  cout << result;
  print(count - 1, result);
}

int main()
{
  long long x;
  int digit;
  int result = 10;
  int count = 0;
  cin >> x;

  /*
    x = 12345
    digit = 5
    5 <= 10
    result = 5
    x = 1234
  */

  while (x > 0)
  {
    digit = x % 10;

    if (digit <= result)
      result = digit;
    x /= 10;
    count++;
  }

  print(count, result);
  cout << endl;

  system("pause");
}