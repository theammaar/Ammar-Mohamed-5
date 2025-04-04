#include <iostream>
using namespace std;

/*
  n => number od projects under consideration
  a, b, c => members
*/

int main()
{
    int n;
    cin >> n;

    int totalProjects = 0;

    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b + c >= 2)
        {
            totalProjects++;
        }
    }

    cout << totalProjects << endl;

    system("pause");
    return 0;
}
