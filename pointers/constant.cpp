#include <iostream>

template <typename T, int N>
T get_array_length(T (*)[N])
{
    return N;
}

void increment_all(int *start, int *stop)
{
    int *current = start;
    while (current != stop)
    {
        ++(*current);
        ++current;
    }
}

void print_all(const int *start, const int *stop)
{
    const int *current = start;
    while (current != stop)
    {
        std::cout << *current << std::endl;
        ++current;
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int array_length = get_array_length(&array);
    std::cout << "array length: " << array_length << std::endl;
    increment_all(array, array + array_length);
    print_all(array, array + array_length);
    return 0;
}