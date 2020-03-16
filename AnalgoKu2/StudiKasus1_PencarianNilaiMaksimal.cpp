/*
Nama	: Rizky Anugerah
NPM		: 140810180049
Kelas	: A
Program	: Pencarian Nilai Maksimal
*/

#include <iostream>
using namespace std;

main()
{
    int x[5] = {82,20,12,91,45};
    int n = sizeof(x) / sizeof(x[0]);

    // Deklarasi
    int maks = x[0];
    int i = 2;

    // Algoritma
    while (i <= n)
    {
        if (x[i] > maks)
        {
            maks = x[i];
        }
        i = i + 1;
    }

    cout << "Nilai terbesar dari larik tersebut : " << maks;
}