#include <iostream>

const float PI = 3.14;

class Persegi
{
private:
    float sisi;

protected:
    float protectedSisi;

public:
    Persegi(float s) : sisi{s}, protectedSisi{s} {};
    float luas() { return sisi * sisi; };
};

class Kubus : public Persegi
{
public:
    Kubus(float s) : Persegi{s} {};
    float luas() { return 6 * Persegi::luas(); };
};

class BangunanLain : public Kubus
{
private:
    float r;

public:
    BangunanLain(float rp) : r{rp}, Kubus{rp} {};
    float luas() { return PI * r * r; };
    void showLuasKubus() { std::cout << "Luas kubus dari bangunanlain: " << Kubus::luas(); };
};

int main()
{
    Persegi persegi(2.5);
    Kubus kubus(3);
    BangunanLain bangunanLain(7);

    std::cout << "Luas persegi: " << persegi.luas() << " Luas kubus: " << kubus.luas() << std::endl;
    std::cout << "Luas bangunan lain: " << bangunanLain.luas() << std::endl;
    bangunanLain.showLuasKubus();

    return 0;
}