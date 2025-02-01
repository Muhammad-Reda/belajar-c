#include <iostream>

unsigned long long factorial(long &n)
{
    if (n == 1)
        return 1;

    long next = n - 1;
    std::cout << n << "\n";
    return n * factorial(next);
}

int main()
{
    long number = 5;
    long &ref = number;
    std::cout << "Result: " << factorial(ref) << std::endl;

    return 0;
}