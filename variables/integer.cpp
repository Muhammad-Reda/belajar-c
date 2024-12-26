// Int variables are declared using the int keyword. The int data type is used to store integer values.
#include <iostream>

using namespace std;

int main()
{
    // declaring integer variables
    int nilaiMandiri, nilaiUTS, nilaiUAS, nilaiAkhir;

    // Hitung nilai

    // Assing value of nilai
    nilaiMandiri = 80u;
    nilaiUTS = 80u;
    nilaiUAS = 80u;

    nilaiAkhir = (nilaiMandiri * 0.3) + (nilaiUTS * 0.35) + (nilaiUAS * 0.35);

    // Print nilaiAkhir
    cout << "Nilai Akhir: " << nilaiAkhir;
}