#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        int hollow = n - 2;
        int stars = i == 0 || i == n-1 ? n : 1;
        for (int i = 0; i < stars; i++)
        {
            cout << "*";
        }
        for (int i = 0; i < hollow; i++)
        {
            cout << " ";
        }
        for (int i = 0; i < stars; i++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}