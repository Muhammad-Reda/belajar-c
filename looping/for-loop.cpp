#include <iostream>

using namespace std;

int main()
{

    int number;
    long long total = 0;
    cout << "Numbers of Iteration" << endl;
    cin >> number;

    for (int i = 0; i < 1000000; i++)
    {
        // cout << "Iterate " << i + 1 << endl;
        total = total + (i + 1);
    };

    cout << "Program finished, total = " << total << endl;
}