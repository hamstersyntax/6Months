#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i - 1; space++)
        {
            cout << "*";
        }
        for (int i = 0; i < n; i++)
        {
            cout << i+1;
        }
        cout << endl;
    }
    return 0;
}