// codewars https://www.codewars.com/kata/55b195a69a6cc409ba000053/train/cpp

#include <iostream>
using namespace std;

// Fungsi untuk menghitung kombinasi C(n, k) secara iteratif
unsigned long long combination(int n, int k)
{
    unsigned long long result = 1;
    // Manfaatkan simetri: C(n, k) == C(n, n-k)
    if (k > n - k)
        k = n - k;
    for (int i = 1; i <= k; i++)
    {
        result = result * (n - i + 1) / i;
    }
    return result;
}

int main()
{
    int x;
    cout << "Masukkan nilai x (untuk 10^x): ";
    cin >> x;

    // Kasus khusus: untuk x == 0, hanya ada angka 0
    if (x == 0)
    {
        cout << "Jumlah angka increasing atau decreasing di bawah 10^0 adalah: 1" << endl;
        return 0;
    }

    unsigned long long total = 0;

    // Untuk n = 1 (angka satu digit: 0 sampai 9)
    total += 10; // angka: 0, 1, 2, ..., 9

    // Untuk n-digit dengan n >= 2
    for (int n = 2; n <= x; n++)
    {
        // Jumlah angka increasing: C(n+8, n)
        unsigned long long increasing = combination(n + 8, n);
        // Jumlah angka decreasing: C(n+9, n) - 1 (dikurangi 1 untuk mengecualikan "semua nol")
        unsigned long long decreasing = combination(n + 9, n) - 1;
        // Angka repdigit (misalnya: 11, 22, ..., 99) dihitung dua kali, sehingga dikurangkan 9
        unsigned long long repdigits = 9;

        total += (increasing + decreasing - repdigits);
    }

    cout << "Jumlah angka increasing atau decreasing di bawah 10^" << x << " adalah: " << total << endl;
    return 0;
}
