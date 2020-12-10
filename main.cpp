#include <iostream>
#include <graph.h>
#include <voo.h>
#include <fstream>
#include <string.h>
#include <map>
#include <sstream>

using namespace std;

int main()
{
    string line = "";
    string strtmp = "";

    voo *novo_voo;
    vector<voo> objetos;
    vector<string> palavras;
    ifstream file("file.txt");
    if(file.is_open())
    {
        while(getline(file, line))
        {
            stringstream ss (line);

            while (getline (ss, strtmp, ' '))
            {
                palavras.push_back (strtmp);
            }

            if(palavras.size() > 5)
            {
                novo_voo = new voo(palavras[0], palavras[1], palavras[2], palavras[3], palavras[4]);
                objetos.push_back(*novo_voo);
                novo_voo = new voo(palavras[0], palavras[3], palavras[5], palavras[6], palavras[7]);
                objetos.push_back(*novo_voo);
            }else {
                novo_voo = new voo(palavras[0], palavras[1], palavras[2], palavras[3], palavras[4]);
                objetos.push_back(*novo_voo);
            }
            palavras.clear();
        }
        file.close();
    }

    for(auto &i: objetos)
    {
        cout<<i.codvoo<<" "<<i.ori<<" "<<i.dest<<endl;
    }

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

    //std::cout<<obj->dijkstra(0, 4);

}
