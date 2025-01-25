#include <iostream>

using namespace std;

int main()
{

    int number, counter = 0;
    long long total = 0;
    cout << "Numbers of Iteration" << endl;
    cin >> number;

    // do
    // {
    //     cout << "Iterate: " << counter + 1 << endl;
    //     if (number <= 0)
    //     {
    //         total = number;
    //         break;
    //     }
    //     total = total + (counter + 1);
    //     counter++;
    // } while (counter < number);

    while (counter < number)
    {
        cout << "Iterate: " << counter + 1 << endl;
        if (number <= 0)
        {
            total = number;
            break;
        }
        total = total + (counter + 1);
        counter++;
    }

    cout << "Program finished, total = " << total << endl;
}