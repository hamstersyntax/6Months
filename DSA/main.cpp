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
        innerSpaceLen = innerSpaceLen - 2;
        for (int space = 0; space < innerSpaceLen; space++)
        {
            cout << "_";
        }

        cout << endl;
    }

    return 0;
}