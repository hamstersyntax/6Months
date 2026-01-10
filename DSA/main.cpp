#include <iostream>
#include <cmath>
using namespace std;
int reverse(int n)
{

    int result = 0;
    int rem;
    while (n > 0)
    {
        result = n % 10;
        n /= 10;
    }
}
int main()
{
    reverse(123);

    return 0;
}