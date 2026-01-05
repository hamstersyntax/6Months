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
            cout << " ";
        }
        for (int r = 0; r < i + 1; r++)
        {
            cout << "*";
        }
        cout << endl;
    }
    innerSpaceLen = N + N;
    for (int i = 0; i > N; i++)
    {
        for (int l = i + 1; l > 0; l--)
        {
            cout << "*";
        }
        innerSpaceLen = innerSpaceLen - 2;
        for (int space = innerSpaceLen; space > 0; space--)
        {
            cout << " ";
        }
        for (int r = i + 1; r > 0; r--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}