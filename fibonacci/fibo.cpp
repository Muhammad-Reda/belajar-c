#include <iostream>

void fibo(int n)
{
    int fn_1 = 0, fn = 1, i = 1;
    int counter = 0;

    do
    {
        std::cout << fn << " ";
        i = fn_1;
        fn_1 = fn;
        fn = fn_1 + i;
        counter++;
    } while (counter < n);
}

int main()
{
    int n;
    std::cout << "n: ";
    std::cin >> n;
    std::cout << "\n";
    fibo(n);
    return 0;
}