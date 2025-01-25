// Get the differenct between suffic and prefic increment
#include <iostream>

using namespace std;

int main()
{
    int a = 5, b = 5;
    int c = ++a;
    int d = b++;

    cout << "Nilai c: " << c << endl; // 6
    cout << "Nilai d: " << d << endl; // 5

    return 0;
}