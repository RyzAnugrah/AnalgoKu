/*
Nama	: Rizky Anugerah
NPM		: 140810180049
Kelas	: A
Program	: Selection Sort
*/

#include <iostream>
using namespace std;

int n;
int data[100], data2[100];

void swap(int a, int b)
{
    int t;

    t = data[b];
    data[b] = data[a];
    data[a] = t;
}

void output()
{
    for (int i = 1; i <= n; i++)
    {
        cout << data[i] << ' ';
    }
    cout << endl;
}

void selectionSort()
{
    int pos, i, j;
    
    for (i=1; i<=n-1; i++)
    {
        pos = i;
        for (j=i+1; j<=n; j++)
        {
            if (data[j] < data[pos])
                pos = j;
        }
        if (pos != i)
        {
            swap(pos, i);
        }
        output();
    }
}

int main()
{
    cout << "Masukkan jumlah data : "; cin >> n;

    for (int i=1; i<=n; i++)
    {
        cout << "Masukkan data ke- " << i << " : "; cin >> data[i];
        data2[i] = data[i];
    }

    output();
    selectionSort();

    cout << "\nData terurut : " << endl;
    output();

    return 0;
}