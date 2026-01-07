#include <iostream>
using namespace std;

int main()
{
    int n = 9;
    int hollow = n - 2;
    for (int i = 0; i < n; i++)
    {

        if (i == 0 || i == n - 1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << "*";
        for (int i = 0; i < hollow; i++)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }

    return 0;
}