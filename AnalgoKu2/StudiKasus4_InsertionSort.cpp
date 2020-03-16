/*
Nama	: Rizky Anugerah
NPM		: 140810180049
Kelas	: A
Program	: Insertion Sort
*/

#include <iostream>
using namespace std;

main()
{
    int x[5] = {3, 71, 42, 23, 96};
    int n = sizeof(x) / sizeof(x[0]);

    // Deklarasi
    int i, j, insert;

    // Algoritma
    for (i = 1; i < n; i++)
    {
        insert = x[i];
        j = i - 1;
        while (j >= 0 && x[j] > insert)
        {
            x[j + 1] = x[j];
            j = j - 1;
        }
        x[j + 1] = insert;
    }
    cout << "Hasil Insertion Sort : ";
    for (j = 0; j < n; j++)
    {
        cout << x[j] << " ";
    }
}