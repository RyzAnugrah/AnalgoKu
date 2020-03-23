/*
Nama	: Rizky Anugerah
NPM		: 140810180049
Kelas	: A
Program	: Bubble Sort
*/

#include <iostream>
using namespace std;

int n;
int data[100], data2[100];

int swap(int a, int b)
{
    int t;

    t = data[b];
    data[b] = data[a];
    data[a] = t;
}

int output()
{
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << ' ';
    }
    cout << endl;
}

int bubbleSort()
{
    for (int i=1; i<n; i++)
    {
        for (int j = n-1; j>=i; j--)
        {
            if (data[j] < data[j-1])
            {
                swap(j, j-1);
            }
        }
        output();
    }
    cout << endl;
}

int main()
{
    cout << "Masukan jumlah data : "; cin >> n;

    for (int i=0; i<n; i++)
    {
        cout << "Masukan data ke- " << i + 1 << " : "; cin >> data[i];
        data2[i] = data[i];
    }
    
    output();
    bubbleSort();

    cout << "\nData terurut : " << endl;
    output();

    return 0;
}