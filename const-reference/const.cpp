#include <iostream>
#include <string>

using namespace std;

string concate(string &a, string &b)
{
    b = "Baru";
    return a + b;
}

string concatenate(const string &a, const string &b)
{
    // b = "Baru"; // Can't change the value because it's const reference parameter
    return a + b;
}

int main()
{

    string firstName = "Muhammad", lastName = "Redha";

    auto constReference = concatenate(firstName, lastName);
    cout << "Const reference " << constReference << endl;
    cout << "First name: " << firstName << " Last name: " << lastName << endl;

    auto rawReference = concate(firstName, lastName);
    cout << "Common reference " << rawReference << endl;
    cout << "First name: " << firstName << " Last name: " << lastName << endl;

    return 0;
}