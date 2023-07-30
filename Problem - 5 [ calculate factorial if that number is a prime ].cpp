#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

long long factorial(int n)
{
    long long result = 1;
    for (int i = 2; i <= n; ++i)
    {
        result *= i;
    }

    return result;
}

int main()
{
    int number;
    cout <<"Enter a number: ";
    cin >>number;

    bool prime = isPrime( number );

    if ( prime )
    {
        long long result = factorial(number);
        cout << result << endl;
    }
    else
        cout << "Error! Not a prime number." << endl;

    return 0;
}
