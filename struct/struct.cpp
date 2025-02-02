#include <iostream>
#include <string>
#include <sstream>

struct Person
{
    std::string name, address;
    int age;
} persons[2];

void printStruct(Person person);
void fillStruct();

int main()
{
    fillStruct();
    int n;
    for (n = 0; n < 2; n++)
    {
        printStruct(persons[n]);
    }

    return 0;
}

void fillStruct()
{
    std::string myString;
    int n;
    std::string question[3] = {"What is your name? ", "How old are you? ", "Where do you live? "};
    for (n = 0; n < 2; n++)
    {
        for (int i = 0; i < 3; i++)
        {
            std::cout << question[i];
            std::getline(std::cin, myString);

            if (i == 0)
            {
                std::stringstream(myString) >> persons[n].name;
                while (myString.length() == 0)
                {
                    std::getline(std::cin, myString);
                    std::stringstream(myString) >> persons[n].name;
                }
            }
            else if (i == 1)
            {
                while (myString.length() == 0)
                {
                    std::getline(std::cin, myString);
                    std::stringstream(myString) >> persons[n].age;
                }
            }
            else
            {
                std::stringstream(myString) >> persons[n].address;
                while (myString.length() == 0)
                {
                    std::getline(std::cin, myString);
                    std::stringstream(myString) >> persons[n].address;
                }
            }
        }
    }
}

void printStruct(Person person)
{
    std::cout << "Hai " << person.name << ", So you are " << person.age << " from " << person.address << "\n";
}