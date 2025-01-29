#include <iostream>

int main()
{

    int a;
    int *b;
    int **c;

    a = 5;
    b = &a;
    c = &b;

    std::cout << "adress a: " << &a << std::endl;
    std::cout << "value a: " << a << std::endl;
    std::cout << "value b: " << b << std::endl;
    std::cout << "value b: " << *b << std::endl;
    std::cout << "value c: " << c << std::endl;
    std::cout << "value c: " << *c << std::endl;

    return 0;
}