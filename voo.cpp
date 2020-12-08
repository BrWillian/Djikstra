#include "voo.h"
#include <math.h>

voo::voo(std::string aeroporto, std::string codvoo, int hh, int mm, std::string dest, int hh_dest, int mm_dest)
{
    this->aeroporto = aeroporto;
    this->codvoo = codvoo;
    this->horaformatada = (hh*3600) + (mm*60);
    this->dest = dest;
    this->horaformatada_dest = (hh_dest*3600) + (mm_dest*60);
    this->custo = std::abs(this->horaformatada - this->horaformatada_dest);
}
