#ifndef VOO_H
#define VOO_H
#include <string>

using namespace std;

class voo
{
public:
    voo(std::string codigo_viagem, std::string ori, std::string partida, std::string dest, std::string chegada);
    std::string codvoo;
    std::string ori;
    std::string dest;
    int partida;
    int chegada;
    int getCusto();
private:
    int custo;
    int formatar_hora(string hora);
};

#endif // VOO_H
