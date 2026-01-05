#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // Upper Half
    for (int i = 0; i < n; i++)
    {
        // Left spaces
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";

        cout << "*";

        // Inner spaces
        if (i > 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
                cout << " ";
            cout << "*";
        }
        cout << endl;
    }

    // Lower Half
    for (int i = n ; i > 0; i--)
    {
        // Left spaces
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";

        cout << "*";

        // Inner spaces
        if (i > 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
                cout << " ";
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
