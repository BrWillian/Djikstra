#include <iostream>
#include <graph.h>
#include <voo.h>
#include <fstream>
#include <string.h>
#include <map>
#include <set>
#include <sstream>

using namespace std;

int main()
{
    string line = "";
    string strtmp = "";

    set<pair<string, pair<string, int>>>voos;

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
        voos.insert(make_pair(i.codvoo, make_pair(i.ori, i.partida)));
        voos.insert(make_pair(i.codvoo, make_pair(i.dest, i.chegada)));
    }

    set<pair<string, pair<string, int>>> :: iterator it;
    set<pair<string, pair<string, int>>> :: iterator it2;
    graph *obj = new graph(100);ele diss
    int i = 0;
    for(it=voos.begin(); it != voos.end();it++)
    {
        cout<<it->first<<" "<<it->second.first<<" "<<it->second.second<<" "<<endl;
    }



    cout<<"____________________________"<<endl;

    for(auto &i: objetos)
    {
        cout<<i.codvoo<<" "<<i.ori<<" "<<i.partida<<" "<<i.dest<<" "<<i.chegada<<endl;
    }


    cout<<"____________________________"<<endl;
    /*
    set<pair<string, string>> :: iterator iv;
    vector<voo>::iterator io;
    for(iv=voos.begin(); iv != voos.end();iv++)
    {
        for(io=objetos.begin(); io!=objetos.end(); io++)
        {
            if(iv->first == io->codvoo)
            {
                cout<<io->codvoo<<" "<<io->ori<<" "<<io->dest<<endl;

            }
        }
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
    obj->addVertex(3, 4, 1);*/

    //std::cout<<obj->dijkstra(0, 4);

}
