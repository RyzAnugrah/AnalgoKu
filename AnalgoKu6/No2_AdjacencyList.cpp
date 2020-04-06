/*
Nama	: Rizky Anugerah
NPM		: 140810180049
Kelas	: A
Program	: Adjacency List
*/

#include <iostream>
#include <list>
using namespace std;

struct Graph
{
    int vertex;
    list<int> *edge;
};
Graph G;

void graph(Graph &G, int vertex)
{
    G.vertex = vertex;
    G.edge = new list<int>[vertex];
}

void addEdge(Graph &G, int i, int j)
{
    G.edge[i].push_back(j);
}

void printList(Graph G)
{
    for (int i = 0; i < G.vertex; ++i)
    {
        cout << "\n Vertex " << i+1 << "\n head";
        for (auto x : G.edge[i])
            cout << " -> " << x+1;
        cout << endl;
    }
}

int main()
{
    graph(G, 8);

    addEdge(G, 0, 1);
    addEdge(G, 0, 2);

    addEdge(G, 1, 0);
    addEdge(G, 1, 2);
    addEdge(G, 1, 3);
    addEdge(G, 1, 4);

    addEdge(G, 2, 0);
    addEdge(G, 2, 1);
    addEdge(G, 2, 4);
    addEdge(G, 2, 6);
    addEdge(G, 2, 7);

    addEdge(G, 3, 1);
    addEdge(G, 3, 4);

    addEdge(G, 4, 1);
    addEdge(G, 4, 2);
    addEdge(G, 4, 3);
    addEdge(G, 4, 5);

    addEdge(G, 5, 4);

    addEdge(G, 6, 2);
    addEdge(G, 6, 7);

    addEdge(G, 7, 2);
    addEdge(G, 7, 6);

    printList(G);
}
