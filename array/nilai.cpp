#include <iostream>
#include <array>

void tampil_nilai()
{
    std::array<int, 11> nilai;
    std::cout << "Menampilkan grafik nilai mahasiswa: \n";

    for (int i = 0; i < nilai.size(); i++)
    {
        std::cout << "Jumlah mahasiswa dengan nilai ";
        if (i == 0)
        {
            std::cout << " 0-9: ";
        }
        else if (i == 10)
        {
            std::cout << " 100: ";
        }
        else
        {
            std::cout << i * 10 << "-" << ((i + 1) * 10) - 1 << ": ";
        }
        std::cin >> nilai[i];
    }

    std::cout << "Grafik nilai\n";

    for (int i = 0; i < nilai.size(); i++)
    {
        if (i == 0)
        {
            std::cout << "0-9  : ";
        }
        else if (i == 10)
        {
            std::cout << "100  : ";
        }
        else
        {
            std::cout << i * 10 << "-" << ((i + 1) * 10) - 1 << ": ";
        }

        for (int j = 0; j < nilai[i]; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

int main()
{
    tampil_nilai();
    return 0;
}