#include <iostream>
using namespace std;

int main()
{
    /*
        n => height
        m => width
        a => side length of square flower bed
    */

    long long n, m, a;
    cin >> n >> m >> a;

    long long rows = (n + a - 1) / a;
    long long columns = (m + a - 1) / a;
    long long squares = rows * columns;

    cout << squares << endl;

    system("pause");
    return 0;
}
