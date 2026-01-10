#include <iostream>
#include <cmath>
using namespace std;
int binaryToDecimal(int n)
{

    int result = 0;
    int rem;
    while (n > 0)
    {
        result += pow(2, n % 10);
        n /= 10;
    }
    cout << result;
}
int main()
{
    binaryToDecimal(101010);

    return 0;
}