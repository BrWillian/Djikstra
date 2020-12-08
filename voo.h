#ifndef VOO_H
#define VOO_H
#include <string>

class voo
{
public:
    voo(std::string aero, std::string, int hh, int mm, std::string dest, int hh_dest, int mm_dest);
    int horaformatada;
    int custo;
    std::string codvoo;
    std::string aeroporto;
    std::string dest;
    int horaformatada_dest;
};

#endif // VOO_H
