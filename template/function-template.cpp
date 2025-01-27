#include <iostream>

// Buat template function yang bisa dimasukin tipe data apapun.
template <typename T>
T sum(T &a, T &b)
{
    return a + b;
}

int main()
{

    int aInterger = 10, bInteger = 10;
    float aFloat = 2.5, bFloat = 3.5;

    int sumInteger = sum(aInterger, bInteger);
    float sumFloat = sum(aFloat, bFloat);

    std::cout << "Sum Integer: " << sumInteger << std::endl;
    std::cout << "Suum Float: " << sumFloat << std::endl;

    return 0;
}