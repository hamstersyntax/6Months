#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int hollow = n - 2;
    for (int i = 0; i < n; i++)
    {
        cout << "*";

        if (i != 0 || i != n - 1)
        {
            cout << "*";
            for (int i = 0; i < hollow; i++)
            {
                cout << " ";
            }
            cout << "*";
        }
    }

    return 0;
}