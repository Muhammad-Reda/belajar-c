#include <iostream>

using namespace std;

// Declaring function before and works after
inline long long sum(int &a, int &b);

int main()
{

    int x = 1000000, y = 2000000;

    auto result = sum(x, y);

    cout << "Result: " << result << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}

inline long long sum(int &a, int &b)
{
    a *= 2;
    long long longA = a;
    b *= 2;
    long long longB = b;
    return longA * longB;
}