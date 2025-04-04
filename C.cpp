#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int const maxElements = n;
    string bookTitle;

    string arr[maxElements];
    string result[maxElements];

    for (int i = 0; i < n; i++)
    {
        bool exist = false;
        getline(cin, bookTitle);

        if (bookTitle.size() != 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j] == bookTitle)
                {
                    exist = true;
                }

                if (arr[j] != bookTitle)
                {
                    exist = false;
                }
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
