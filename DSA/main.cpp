#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        int hollow = n - 2;
        int stars = i == 0 || i == n ? n : 1;
         cout << endl;
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
       
    }

    return 0;
}