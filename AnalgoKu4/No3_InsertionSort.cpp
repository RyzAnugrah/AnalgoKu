/*
Nama	: Rizky Anugerah
NPM		: 140810180049
Kelas	: A
Program	: Insertion Sort
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

void insertionSort()
{
    int temp, i, j;
    
    for (i=1; i<=n; i++)
    {
        temp = data[i];
        j = i - 1;
        while (data[j] > temp && j >= 0)
        {
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = temp;
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
    insertionSort();

    cout << "\nData terurut : ";
    output();
    
    return 0;
}