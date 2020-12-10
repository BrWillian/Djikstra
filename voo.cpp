#include "voo.h"
#include <math.h>

voo::voo(std::string codigo_viagem, std::string ori, std::string partida, std::string dest, std::string chegada)
{
    this->codvoo = codigo_viagem;
    this->ori = ori;
    this->dest = dest;
}
