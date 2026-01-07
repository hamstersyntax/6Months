#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        int hollow = n - 2;
        
        if (i == 0 || i == n - 1)
        {
            /* code */
        }
        else
        {
            for (int i = 0; i < hollow; i++)
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}