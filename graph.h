#ifndef GRAPH_H
#define GRAPH_H
#include <queue>
#include <list>
#include <iostream>

class graph
{

private:
    int V; // numero de vertices
    std::list<std::pair<int, int>> *adj;
public:
    graph(int V);
    void addVertex(int v1, int v2, int cost);
    int dijkstra(int orig, int dest);
};

#endif // GRAPH_H
