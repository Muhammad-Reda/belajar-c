#include <iostream>

int main()
{
    char *p;
    bool flag = true;

    if (flag)
    {
        char buffer[1000];

        p = new char[1000];
    }
    delete[] p;
    return 0;
}