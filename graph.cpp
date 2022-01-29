#include<iostream>
#include <list>
#include "graph.h" // header in local directory

using namespace std;


Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::DFS_visit(int v, bool visited[])
{

    visited[v] = true;
    cout << v << " ";
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end();i++)
        {
            if (!visited[*i])
            DFS_visit(*i, visited);
        }
}


void Graph::DFS(int v)
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;


  DFS_visit(v, visited);
}
