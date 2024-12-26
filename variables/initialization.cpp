// 3 ways to initialize variables in C++

#include <iostream>

using namespace std;

int main()
{
    // 1. Initialization using =
    int a = 5;

    // 2. Initialization using ()
    int b(3);

    // 3. Initialization using {}
    int c{2};

    cout << "a: " << a << "\n"
         << "b: " << b << "\n"
         << "c: " << c << "\n";
}