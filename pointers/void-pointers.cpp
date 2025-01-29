#include <iostream>

void increase(void *data, int psize)
{
    if (psize == sizeof(char))
    {
        char *pchar;
        pchar = (char *)data;
        ++(*pchar);
    }
    else if (psize == sizeof(int))
    {
        int *pint;
        pint = (int *)data;
        ++(*pint);
    }
}

int main()
{
    char a = 'a';
    int number = 200;

    increase(&a, sizeof(a));
    increase(&number, sizeof(number));

    std::cout << "a: " << a << " number: " << number << std::endl;
    return 0;
}