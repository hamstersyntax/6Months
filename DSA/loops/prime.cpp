#include <iostream>
using namespace std;

int main()
{
    bool isPrime(true);
    int n;
    cout << "Enter  a number ";
    cin >> n;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
        cout << " Run----" << i << endl;
    }
    isPrime ? cout << n << " is prime " : cout << "Not a prime number";
    return 0;
}