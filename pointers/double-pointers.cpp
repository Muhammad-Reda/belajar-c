#include <iostream>

void increment_pointer(int *p)
{
    (*p)++;
}

int main()
{

    int a;
    int *b;
    int **c;
    int *p = nullptr;
    p = &a;

    a = 5;
    b = &a;
    c = &b;

    increment_pointer(b);

    std::cout << "adress a: " << &a << std::endl;
    std::cout << "value a: " << a << std::endl;
    std::cout << "address b: " << b << std::endl;
    std::cout << "value b: " << *b << std::endl;
    std::cout << "address c: " << c << std::endl;
    std::cout << "value *c: " << *c << std::endl;
    std::cout << "value **c: " << **c << std::endl;
    std::cout << "Null pointer: " << p << std::endl;
    std::cout << "Null pointer: " << *p << std::endl;

    return 0;
}