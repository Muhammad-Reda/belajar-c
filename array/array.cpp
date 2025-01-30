#include <iostream>
#include <array>
#include <string>

void pushArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < length; i++)
    {
        std::cout << "Array value: " << arr[i] << std::endl;
    }
}

template <typename T, int N>
void array_std(std::array<T, N> array)
{
    for (int i = 0; i < N; i++)
    {
        std::cout << "Array value: " << array[i] << std::endl;
    }
}

int main()
{
    // int length = 5;
    // int empty_array[5] = {};
    // pushArray(empty_array, length);

    std::array<std::string, 5> array_string = {"Satu", "Dua", "Tiga", "Empat", "Limat"};

    array_std<std::string, 5>(array_string);

    std::cout << array_string.size() << std::endl;

    int arr[] = {0, 2, 3, 4, 5};
    std::cout << "array: " << arr[4] << std::endl;

    int *p;
    p = arr + 4;
    *p = 6;

    std::cout << "Pointer arr: " << *p << std::endl;

    return 0;
}