/*
Nama : Rizky Anugerah
NPM : 140810180049
Program : Stable Matching Problem 
*/

#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;
#define N 5

bool chooseMen(int prioritas[2 * N][N], int w, int m, int m1)
{
    for (int i = 0; i < N; i++)
    {
        if (prioritas[w][i] == m1)
            return true;

        if (prioritas[w][i] == m)
            return false;
    }
} 
void StableMatch(int prioritas[2 * N][N])  
{
    int Wanita[N];

    bool priaLajang[N];

    memset(Wanita, -1, sizeof(Wanita));
    memset(priaLajang, false, sizeof(priaLajang));
    int jumlahJomblo = N;

    while (jumlahJomblo > 0)
    {
        int m;
        for (m = 0; m < N; m++)
            if (priaLajang[m] == false)
                break;

        for (int i = 0; i < N && priaLajang[m] == false; i++)
        {
            int w = prioritas[m][i];

            if (Wanita[w - N] == -1)
            {
                Wanita[w - N] = m;
                priaLajang[m] = true;
                jumlahJomblo--;
            }

            else
            {
                int m1 = Wanita[w - N];

                if (chooseMen(prioritas, w, m, m1) == false)
                {
                    Wanita[w - N] = m;
                    priaLajang[m] = true;
                    priaLajang[m1] = false;
                }
            } 
        }
    }
    cout << "=================" << endl;
    cout << "  Pria    Wanita  " << endl;
    cout << "=================" << endl;
    string man;
    string woman;
    for (int i = 0; i < N; i++)
    {
        if (i < N)
        {
            if (Wanita[i] == 0)
                man = "Victor";
            if (Wanita[i] == 1)
                man = "Wyatt";
            if (Wanita[i] == 2)
                man = "Xavier";
            if (Wanita[i] == 3)
                man = "Yancey";
            if (Wanita[i] == 4)
                man = "Zeus";
                
            if (i == 0)
                woman = "Amy";
            if (i == 1)
                woman = "Bertha";
            if (i == 2)
                woman = "Clare";
            if (i == 3)
                woman = "Diane";
            if (i == 4)
                woman = "Erika";
        }
        cout << " " << man << "\t  " << woman << endl;
    }
    cout << "=================" << endl;
}

int main()
{
    int prioritas[2 * N][N] = {{6, 5, 8, 9, 7},
                            {8, 6, 5, 7, 9},
                            {6, 9, 7, 8, 5},
                            {5, 8, 7, 6, 9},
                            {6, 8, 5, 9, 7},
                            {4, 0, 1, 3, 2},
                            {2, 1, 3, 0, 4},
                            {1, 2, 3, 4, 0},
                            {0, 4, 3, 2, 1},
                            {3, 1, 4, 2, 0}};
    StableMatch(prioritas);

    return 0;
}
