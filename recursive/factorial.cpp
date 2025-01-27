#include <iostream>

using namespace std;

unsigned long long factorial(long n);

int main()
{
    int number;
    cout << "Number of factorial: ";
    cin >> number;

    auto result = factorial(number);

    cout << "Result: " << result << endl;

    return 0;
}

unsigned long long factorial(long n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}