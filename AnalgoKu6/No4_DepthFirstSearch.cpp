/*
Nama	: Rizky Anugerah
NPM		: 140810180049
Kelas	: A
Program	: DFS
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

void DFSPrint(int vertex, bool visited[])
{
    visited[vertex] = true;
    cout << vertex+1 << " ";

    for (list<int>::iterator i = G.edge[vertex].begin(); i != G.edge[vertex].end(); ++i)
        if (!visited[*i])
            DFSPrint(*i, visited);
}

void DFS(Graph G, int vertex)
{
    bool *visited = new bool[G.vertex];
    for (int i = 0; i < G.vertex; i++)
        visited[i] = false;

    for (int i = 0; i < G.vertex; i++)
        if (visited[i] == false)
            DFSPrint(i, visited);
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

    cout << "Depth First Search\n";
    DFS(G, 0);
}