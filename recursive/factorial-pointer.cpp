#include <iostream>

using namespace std;

unsigned long long factorial(long *n);

int main()
{
    long number;
    cout << "Number of factorial: ";
    cin >> number;

    long *p = &number;

    auto result = factorial(p);

    cout << "Result: " << result << endl;

    return 0;
}

unsigned long long factorial(long *n)
{
    if (*n <= 1)
    {
        return 1;
    }

    std::cout << "address: " << n << "\n";

    long temp = *n - 1;
    return (*n) * factorial(&temp);
}