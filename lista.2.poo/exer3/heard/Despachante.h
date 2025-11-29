#ifndef DESPACHANTE_H
#define DESPACHANTE_H

#include <vector>
#include <memory>
#include <string>
#include "VeiculoAutonomo.h"

class Despachante {
private:
    std::vector<std::unique_ptr<VeiculoAutonomo>> frota;

public:
    void adicionar(std::unique_ptr<VeiculoAutonomo> v);
    void atribuirRota(const std::string& destino);
    void moverTodos();
    void gerarRelatorio() const;
};

#endif