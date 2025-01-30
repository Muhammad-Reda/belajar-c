#include <iostream>

int addition(int a, int b)
{
    return a + b;
}

int substraction(int a, int b)
{
    return a - b;
}

int operation(int x, int y, int (*funtion_to_call)(int, int))
{
    int g;
    g = (*funtion_to_call)(x, y);
    std::cout << "Adress from operation: " << *funtion_to_call << "\n";
    return (g);
}

int main()
{
    int m, n;
    int (*minus)(int, int) = substraction;

    m = operation(7, 5, addition);
    n = operation(20, m, minus);

    std::cout << "&addition: " << &addition << "\n";
    std::cout << "&substraction: " << &substraction << "\n";
    std::cout << "&m: " << &m << "\n";
    std::cout << "m: " << m << "\n";
    std::cout << "&n: " << &n << "\n";
    std::cout << "n: " << n << std::endl;

    return 0;
}