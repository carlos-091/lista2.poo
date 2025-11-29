#include "../Headers/Midia.h"

Midia::Midia(const std::string& titulo, int ano, double duracao)
    : titulo(titulo), ano(ano), duracao(duracao) {}

Midia::~Midia() = default;