#include <iostream>
#include <string>

struct movie
{
    std::string title;
    int year;
};

void changeYear(movie &m, int y)
{
    std::cout << "m address: " << &m;
    (m).year = y;
}

int main()
{
    movie onePiece;
    movie *pOnePiece;
    pOnePiece = &onePiece;
    movie &rOnePiece = onePiece;

    pOnePiece->title = "One Piece";
    pOnePiece->year = 1990;

    std::cout << "onePiece address: " << &onePiece;
    std::cout << " pOnePiece address: " << &pOnePiece << std::endl;
    std::cout << " rOnePiece address: " << &rOnePiece << std::endl;
    changeYear(rOnePiece, 200);
    std::cout << (*pOnePiece).title << " " << (*pOnePiece).year << std::endl;

    return 0;
}