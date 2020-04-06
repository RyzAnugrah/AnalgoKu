/*
Nama	: Rizky Anugerah
NPM		: 140810180049
Kelas	: A
Program	: Adjacency Matrix
*/

#include <iostream>
using namespace std;

int vertArr[20][20]; 
int count = 0;

void printMatrix(int v)
{
    int i, j;
    for (i = 0; i < v; i++)
    {
        for (j = 0; j < v; j++)
        {
            cout << vertArr[i][j] << " ";
        }
        cout << endl;
    }
}

void addEdge(int u, int v)
{ 
    vertArr[u][v] = 1;
    vertArr[v][u] = 1;
}

int main()
{
    int v = 8;      // verticle = 8

    addEdge(0, 1);
    addEdge(0, 2);

    addEdge(1, 0);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(1, 4);

    addEdge(2, 0);
    addEdge(2, 1);
    addEdge(2, 4);
    addEdge(2, 6);
    addEdge(2, 7);

    addEdge(3, 1);
    addEdge(3, 4);

    addEdge(4, 1);
    addEdge(4, 2);
    addEdge(4, 3);
    addEdge(4, 5);

    addEdge(5, 4);

    addEdge(6, 2);
    addEdge(6, 7);

    addEdge(7, 2);
    addEdge(7, 6);

    printMatrix(v);
}
