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
        if (i!=0)
        {
            for (int spaceR = 0; spaceR < n; spaceR++)
            {
                /* code */
            }
            
        }
        
        cout << endl;
    }

    return 0;
}