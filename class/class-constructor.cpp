#include <iostream>

class Persegi
{
    float sisi;

public:
    Persegi(float s) : sisi(s) {}; // Constructor
    float luas() { return sisi * sisi; };
};

class Kubus
{
    Persegi persegi;

public:
    Kubus(float s) : persegi(s) {}; // Constructor
    float luas() { return 6 * persegi.luas(); };
};

class PersegiPanjang
{
    float panjang, lebar;

public:
    PersegiPanjang(float p, float l) : panjang{p}, lebar{l} {};
    float luas() { return panjang * lebar; };
};

class Balok
{
    PersegiPanjang pp;
    float panjang, lebar, tinggi;

public:
    Balok(float p, float l, float t) : pp{p, l}, panjang{p}, lebar{l}, tinggi{t} {};
    float luas() { return 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi)); }
};

int main()
{

    float sisi = 2.5, panjang = 5, lebar = 2.5, tinggi = 3;
    Persegi p(sisi);
    Kubus k(sisi);

    PersegiPanjang pp(panjang, lebar);
    Balok b(panjang, lebar, tinggi);

    std::cout << "Luas Persegi: " << p.luas() << std::endl;
    std::cout << "Luas Persegi Panjang: " << pp.luas() << std::endl;
    std::cout << "Luas Kubus: " << k.luas() << std::endl;
    std::cout << "Luas Balok: " << b.luas() << std::endl;

    return 0;
}