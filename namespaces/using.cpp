#include <iostream>

namespace first
{
    int x = 0;
    int y = 1;
}

namespace second
{
    int x = 10;
    int y = 20;
}

void get_first_namespace()
{
    using first::x; // access spesific x of first.
    std::cout << "First's x: " << x << std::endl;
}

void get_second_namesapce()
{
    using namespace second; // access all within second namespace
    std::cout << "Second's x: " << x << std::endl;
    std::cout << "Second's y: " << y << std::endl;
}

int main()
{
    get_first_namespace();
    {
        using namespace first;
        std::cout << "First's y: " << y << std::endl;
    }
    get_second_namesapce();
    return 0;
}