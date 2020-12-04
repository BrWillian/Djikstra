#include <iostream>
#include <graph.h>


int main()
{
    graph *obj = new graph(5);
    obj->addVertex(0, 1, 4);
    obj->addVertex(0, 2, 2);
    obj->addVertex(0, 3, 5);
    obj->addVertex(0, 1 ,4);
    obj->addVertex(1, 4, 1);
    obj->addVertex(2, 1, 1);
    obj->addVertex(2, 3, 2);
    obj->addVertex(2, 4, 1);
    obj->addVertex(3, 4, 1);

    std::cout<<obj->dijkstra(0, 4)<<std::endl;


}
