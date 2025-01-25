// Take input from user and print it on the console
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    // string name;
    // int age;

    // cout << "Enter your Fullname: " << endl;
    // getline(cin, name);
    // // cin >> name;

    // cout << "Enter your age: " << endl;
    // cin >> age;

    // cout << "Hai " << name << ", You are " << age << " years old." << endl;

    string mystr;
    float price;
    int quantity;

    // Take the price with type of string
    cout << "Enter the price; " << endl;
    getline(cin, mystr);

    // Extract the numerical input into price
    stringstream(mystr) >> price;

    // Take the quantity with type of string
    cout << "Enter the quantity: " << endl;
    getline(cin, mystr);

    // Extract the numerical input into quantity
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price * quantity << endl;

    return 0;
}