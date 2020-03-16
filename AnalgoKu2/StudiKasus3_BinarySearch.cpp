/*
Nama	: Rizky Anugerah
NPM		: 140810180049
Kelas	: A
Program	: Binary Search
*/

#include <iostream>
using namespace std;

main()
{
    int x[5] = {1, 2, 3, 4, 5};             // Input
    int y = 3;                              // integer yang akan dicari
    int idx;                                // Output
    int n = sizeof(x) / sizeof(x[0]);

    // Deklarasi
    int i, j, mid;
    bool found;

    // Algoritma
    i = 1;
    j = n;
    found = false;
    while (!found && i <= j)
    {
        mid = (i + j) / 2;
        if (x[mid] == y)
        {
            found = true;
        }
        else if (x[mid] < y) // mencari di bagian kanan
        { 
            i = mid + 1;
        }
        else // mencari di bagian kiri
        {
            j = mid - 1; 
        }
    }
    if (found == true)
    {
        idx = mid;
    }
    else
    {
        idx = 0;
    }

    cout << "y berada pada index : " << idx;
}