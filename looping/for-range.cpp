#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;

    cout << "What is your name: " << endl;
    getline(cin, name);

    cout << "character of name: " << endl;
    for (auto n : name)
    {
        cout << "[" << n << "]";
    };
    cout << endl;

    cout << "Program finished" << endl;
}