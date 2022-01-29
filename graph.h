
#ifndef GRAPH_H_
#define GRAPH_H_
#include<iostream>
#include <list>

using namespace std;

class Graph
{
    int V;
    list<int> *adj;
    void DFS_visit(int v, bool visited[]);

public:
    Graph(int V);
    void addEdge(int v, int w);
    void DFS(int v);
};

#endif // FIDO_ASSERTION_H_
