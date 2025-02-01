#include <iostream>
#include "animal-static.cpp"
#include "animals.cpp"

int main()
{
	extern char animal_extern[];
	//extern void bark();

	std::cout << "Animal static: " << animal << "\n";
	std::cout << "Animal extern: " << animal_extern << "\n";
	std::cout << "Dog: " << dog << "\n";
	bark();
	return 0;
}