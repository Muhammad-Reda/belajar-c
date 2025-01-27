#include <iostream>

using namespace std;

void greetings()
{
    cout << "Hello World!" << endl;
}

// by Value
int addition(int a, int b, int c)
{
    int total = a + b + c;

    return total;
}

// by Reference
void changeLocalValues(int &a, int &b, int &c)
{
    a *= 2;
    b *= 2;
    c *= 2;
}

int main()
{

    int x = 2, y = 3, z = 4; // initial values

    greetings();

    auto byValue = addition(x, y, z);
    cout << "By value: " << byValue << endl;
    cout << "x: " << x << endl; // Still 2
    cout << "y: " << y << endl; // Still 3
    cout << "z: " << z << endl; // Still 4

    for (int i = 0; i < 20; i++)
    {
        cout << "-";
    }
    cout << endl;

    changeLocalValues(x, y, z);

    cout << "By reference" << endl;
    cout << "x: " << x << endl; // changed to 4
    cout << "y: " << y << endl; // changed to 6
    cout << "z: " << z << endl; // changed to 8

    return 0;
}