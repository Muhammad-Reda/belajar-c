#include <iostream>
#include <string>

namespace person
{
    std::string name = "Muhammad Reda", address = "Pekanbaru, Riau, Indonesia.";
    int age = 20;
    void greetings() { std::cout << "Hello " << person::name << std::endl; }
}

namespace animal
{
    std::string name = "Cat";
    int age = 2;
    void meow() { std::cout << "MEOWWW" << std::endl; }
}

int main()
{
    std::cout << person::name << std::endl;
    person::greetings();

    std::cout << animal::name << std::endl;
    animal::meow();

    return 0;
}