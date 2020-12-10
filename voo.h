#ifndef VOO_H
#define VOO_H
#include <string>

class voo
{
public:
    voo(std::string codigo_viagem, std::string ori, std::string partida, std::string dest, std::string chegada);
    std::string codvoo;
    std::string ori;
    std::string dest;
};

#endif // VOO_H
