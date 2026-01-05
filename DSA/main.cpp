#include <iostream>
using namespace std;

int main()
{
    int N = 4;
    int innerSpaceLen = N + N;
    for (int i = 0; i < N; i++)
    {
        for (int l = 0; l < i + 1; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}