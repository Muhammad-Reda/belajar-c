#include <iostream>
#include <string>

struct Human
{
    std::string name, address, sex;
    int age;
};

struct Person
{
    Human human;
    std::string job;
    void speak();
};

void Person::speak()
{
    std::cout << Person::human.name << " says hello, he is a " << Person::job << std::endl;
}

int main()
{

    Person redha;
    redha.job = "Programmer";
    redha.human.name = "Redha";
    redha.human.age = 22;
    redha.human.address = "Indonesia";
    redha.human.sex = "male";

    std::cout << redha.human.name << " as " << redha.job << std::endl;
    redha.speak();
    return 0;
}