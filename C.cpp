#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    int const maxElements = n;
    string bookTitle;
    string arr[maxElements];
    string result[maxElements];

    bool exist = false;

    getline(cin, bookTitle);
    arr[0] = bookTitle;

    for (int i = 1; i <= n; i++)
    {
        getline(cin, bookTitle);

        if (bookTitle.size() != 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j] == bookTitle)
                    exist = true;
                else if (arr[j] != bookTitle)
                    exist = false;
            }

            if (exist == false)
                result[i] = "OK";
            else
                result[i] = bookTitle;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << endl;
    }

    system("pause");
    return 0;
}
