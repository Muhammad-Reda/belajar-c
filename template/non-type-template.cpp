#include <iostream>

template <class T, int N>
T fixed_multiply(T val)
{
    return val * N;
}

int main()
{
    int number = 10;

    std::cout << "Result: " << fixed_multiply<int, 2>(10) << std::endl;
    std::cout << "Second Result: " << fixed_multiply<int, 3>(number) << std::endl;

    return 0;
}