#include <iostream>
#include <string>

class Movie
{
    std::string name;
    int year;

public:
    float rating;
    Movie(std::string m, int y, float r) : name{m}, year{y}, rating{r} {};
    void showMovie() { std::cout << name; };
};

int main()
{
    Movie naruto("Naruto", 2005, 9.7);
    Movie *pNaruto;
    pNaruto = &naruto;
    Movie &rNaruto = naruto;

    rNaruto.showMovie();
    std::cout << " get rated " << rNaruto.rating << std::endl;
    std::cout << "naruto address: " << &naruto << ", *pNaruto address: " << &pNaruto << ", &rNaruto address: " << &rNaruto << std::endl;
    return 0;
}