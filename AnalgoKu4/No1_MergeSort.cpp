/*
Nama	: Rizky Anugerah
NPM		: 140810180049
Kelas	: A
Program	: Merge Sort
*/

#include <iostream>
#include <chrono>
using namespace std;
  
int data[100];

void mergeSort(int first, int mid, int last)
{
    cout << endl;

    int temp[100], tempFirst = first, tempMid = mid, i = 0;
    while(tempFirst < mid && tempMid < last)
    {
        if(data[tempFirst] < data[tempMid])
            temp[i] = data[tempFirst], tempFirst++;
        else
            temp[i] = data[tempMid], tempMid++;
        i++;
    }
    while(tempFirst < mid)                                      // jika masih bersisa
        temp[i] = data[tempFirst], tempFirst++, i++;
    while(tempMid < last)
        temp[i] = data[tempMid], tempMid++, i++;
    for(int j=0, k=first; j<i, k<last; j++, k++)                //mengembalikan ke array semula
    {
        cout << data[k] << ' ' << temp[j] << endl; 
        data[k] = temp[j];                                      //sudah terurut
    }
}

void merge(int first, int last)                                 // membagi data secara rekursif
{
    if(last-first != 1)
    {
        int mid = (first+last)/2;
        merge(first, mid);
        merge(mid, last);
        mergeSort(first, mid, last);
    }
}

int main()
{
    int n;

    cout << "Masukan jumlah data : "; cin >> n;

    for(int i=0; i<n; i++)
    {
        cout << "Masukan data ke- " << i+1 << " : ";
        cin >> data[i];
    }

    // start perhitungan running time
    auto start = chrono::steady_clock::now();
    merge(0,n);
    auto end = chrono::steady_clock::now();

    cout << "\nData terurut : ";
    for(int i=0; i<n; i++)
    {
        cout << data[i] << ' ';
    }

    cout << endl;

    // running time 
    cout << "Elapsed time in nanoseconds : "  << chrono::duration_cast<chrono::nanoseconds>(end - start).count()  << " ns" << endl;
    cout << "Elapsed time in microseconds : " << chrono::duration_cast<chrono::microseconds>(end - start).count() << " µs" << endl;
    cout << "Elapsed time in milliseconds : " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " ms" << endl;
    cout << "Elapsed time in seconds : " << chrono::duration_cast<chrono::seconds>(end - start).count() << " sec";
    
    return 0;
}
