/*
Nama	: Rizky Anugerah
NPM		: 140810180049
Kelas	: A
Program	: Selection Sort
*/

#include <iostream>
using namespace std;

main()
{
    int x[5] = {1, 3, 5, 2, 4};
    int n = sizeof(x) / sizeof(x[0]);

    // Deklarasi
    int i, j, imaks, temp;

    // Algoritma
    for (i = 2; i < n; i++)
    {
        imaks = 1;
        for (j = 2; j < i; j++)
        {
            if (x[j] > x[imaks])
            {
                imaks = j;
            }
        }
        temp = x[i];
        x[i] = x[imaks];
        x[imaks] = temp;
    }
    cout << "Hasil Selection Sort : ";
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
}