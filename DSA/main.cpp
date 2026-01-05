#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int spaceUL = n - i - 1; spaceUL > 0; spaceUL--)
        {
            cout << " ";
        }
        cout << "*";
        
        cout << endl;
    }

    return 0;
}