#include "voo.h"
#include <math.h>
#include <sstream>
#include <fstream>
#include <iostream>
#include <string>

voo::voo(std::string codigo_viagem, std::string ori, std::string partida, std::string dest, std::string chegada)
{
    this->codvoo = codigo_viagem;
    this->ori = ori;
    this->dest = dest;
    this->partida = formatar_hora(partida);
    this->chegada = formatar_hora(chegada);
}
int voo::formatar_hora(string hora){
    stringstream ss;
    unsigned int hh, mm;

    ss << hora;
    ss >> hh;
    ss.ignore();
    ss >> mm;

    return (hh*3600+mm*60);
}
