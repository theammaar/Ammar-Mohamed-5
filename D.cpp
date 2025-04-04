#include <iostream>
#include <string>
using namespace std;

int fun(string *operation, int *T)
{
  if (*operation == "T++" || *operation == "++T" || *operation == "++t" || *operation == "t++")
    return ++(*T);
  else if (*operation == "T--" || *operation == "--T" || *operation == "--t" || *operation == "t--")
    return --(*T);
  else
    return *T;
}

int main()
{
  int n;
  cin >> n;
  cin.ignore();

  int T = 0;
  int const maxValue = n;
  string arr[maxValue];

  for (int i = 0; i < n; i++)
  {
    getline(cin, arr[i]);
  }

  for (int i = 0; i < n; i++)
  {
    fun(&arr[i], &T);
  }

  cout << T << endl;

  system("pause");
}
