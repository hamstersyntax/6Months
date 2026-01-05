#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        int spaces = n - i - 1;
        for (int j = 0; j < spaces; j++)
        {
            cout << "#";
        }
        for (int star = 0; star < n; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}