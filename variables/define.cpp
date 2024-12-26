// Using define preprocessors

#include <iostream>
#define PI 3.14

using namespace std;

int main()
{
    double r = 8.0, circle;
    circle = 2 * PI * r;

    cout << "Circle: " << circle;

    return 0;
}