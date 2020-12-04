#include "graph.h"

graph::graph(int V)
{
    this->V = V; // atribui numero de vertices

    adj = new std::list<std::pair<int, int>>[V];
}
void graph::addVertex(int v1, int v2, int cost)
{
    adj[v1].push_back(std::make_pair(v2, cost));
}
int graph::dijkstra(int orig, int dest)
{
    std::vector<int>dist(V, INT32_MAX);
    std::vector<bool>visitados(V, false);
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;

    dist[orig] = 0;
    pq.push(std::make_pair(dist[orig], orig));

    while(!pq.empty())
    {
        std::pair<int, int> p = pq.top(); // extrair pair do top
        int u = p.second; // obtem vertice do pair

        pq.pop();

        if(!visitados[u])
        {
            // marcar como visitado
            visitados[u] = true;
            std::list<std::pair<int, int>>::iterator it;

            // percorre os vertices v adjacentes de u
            for(it = adj[u].begin(); it!=adj[u].end(); it++)
            {
                //obtem o vertice adjacente e o custo a aresta
                int v = it->first;
                int custo_aresta = it->second;

                //relaxamento de u,v
                if(dist[v] > (dist[u] + custo_aresta))
                {
                    // atualiza a distancia de v e insere na fila de prioridade
                    dist[v] = dist[u] + custo_aresta;
                    pq.push(std::make_pair(dist[v] , v));
                }
            }
        }

    }
    // retorna a distancia minima ate o destino
    return dist[dest];
}
