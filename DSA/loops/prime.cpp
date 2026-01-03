#include <iostream>
using namespace std;
// Program to Check whether  is Number prime or not
int main()
{
    bool isPrime(true);
    int n;
    // Getting Input
    cout << "Enter A Number to Check ";
    cin >> n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    // Print Output
    isPrime ? cout << n << " Is prime " : cout << "It's not a prime number";
    return 0;
}
