#include <iostream>

int main()
{
    int first_value = 5, second_value = 15;
    int *p1, *p2;

    p1 = &first_value;
    p2 = &second_value;

    std::cout << "p1 address: " << p1 << std::endl;
    std::cout << "p2 address: " << p2 << std::endl;

    *p1 = 10;
    std::cout << "first *p1 value:  " << *p1 << std::endl;

    *p2 = *p1;
    std::cout << "first *p2 value:  " << *p2 << std::endl;

    p1 = p2;
    std::cout << "p1: " << p1 << std::endl;
    std::cout << "p2: " << p2 << std::endl;

    *p1 = 200;

    std::cout << "* p1: " << *p1 << std::endl;
    std::cout << "* p2: " << *p2 << std::endl;
    std::cout << "First value: " << first_value << std::endl;
    std::cout << "Second value: " << second_value << std::endl;

    int *p3 = &first_value;
    *p3 = 200;

    std::cout << "Memory address: " << p3 << " Value: " << *p3 << std::endl;
    std::cout << "first value: " << first_value << std::endl;

    return 0;
}