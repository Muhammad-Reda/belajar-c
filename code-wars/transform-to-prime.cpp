/*
    https://www.codewars.com/kata/5a946d9fba1bb5135100007c/cpp
*/

#include <iostream>
#include <math.h>
#include <vector>

int sum(std::vector<int> numbers)
{
    int sum = 0;
    for (auto number : numbers)
    {
        sum += number;
    }

    return sum;
}

int trialDivision(int N)
{

    if (N == 2)
        return 1;

    int i = 2;
    int k = ceil(sqrt(N));

    std::cout << "K: " << k;

    while (i <= k)
    {

        if (N % i == 0)
            return 0;
        i += 1;
    }

    return 1;
}

int prime(std::vector<int> numbers, int &primeContainer)
{
    int total = sum(numbers);

    for (int i = total; i < total * 2; i++)
    {
        int p = trialDivision(i);
        // std::cout << "true \n";
        if (p)
        {
            primeContainer = i;
            break;
        }
    }

    return primeContainer - total;
}

int main()
{
    std::vector<int> numbers = {1, 1, 1};
    int primeContainer;
    int &rPrimeContainer = primeContainer;

    std::cout << "Gap: " << prime(numbers, rPrimeContainer) << std::endl;

    return 0;
}