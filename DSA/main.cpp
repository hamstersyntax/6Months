#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int totalRow = 2 * n - 1;
    int mid = n - 1;
    for (int row = 0; row < totalRow; row++)
    {
        int dist = abs(row - mid);
        for (int l = 0; l < dist; l++)
        {
            cout << " ";
        }
        cout << "*";

        
    }

    return 0;
}