#include <iostream>
using namespace std;

int main()
{
    int num = 42;
    string binary = "";
    while (num > 0)
    {
        binary = to_string(num % 2) + binary;
        num /= 2;
    }
    cout << binary;
    return 0;
}