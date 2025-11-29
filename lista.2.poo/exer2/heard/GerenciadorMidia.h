#ifndef GERENCIADORMIDIA_H
#define GERENCIADORMIDIA_H

#include <vector>
#include <memory>
#include <string>
#include "Midia.h"

class GerenciadorMidia {
private:
    std::vector<std::unique_ptr<Midia>> midias;

public:
    void adicionar(std::unique_ptr<Midia> m);
    void listar() const;
    void abrirTudo() const;
    void filtrar(const std::string& filtro) const;
};

#endif