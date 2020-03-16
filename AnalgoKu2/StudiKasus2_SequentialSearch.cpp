/*
Nama	: Rizky Anugerah
NPM		: 140810180049
Kelas	: A
Program	: Sequential Search
*/

#include <iostream>
using namespace std;

main()
{
    int x[5] = {1, 2, 3, 4, 5};            // Input 
    int y = 2;                         // integer yang akan dicari
    int n = sizeof(x) / sizeof(x[0]);

    // Deklarasi
    int i = 1;
    int idx; 
    bool found = false;

    // Algoritma
    while (i <= n && !found)
    {
        if (x[i] == y)
        {
            found = true;
        }
        else
        {
            i = i + 1;
        }
    }
    if (found == true)
    {
        idx = i;            // Jika y ditemukan
    }
    else
    {
        idx = 0;            // Jika y tidak ditemukan
    }

    cout << "y berada pada index : " << idx;
}