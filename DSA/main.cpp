#include <iostream>
using namespace std;
string decToBinary(int num)
{
    string binary = "";
    while (num > 0)
    {
        binary = to_string(num % 2) + binary;
        num /= 2;
    }

    return binary;
}
int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << decToBinary(i);
    }

    return 0;
}