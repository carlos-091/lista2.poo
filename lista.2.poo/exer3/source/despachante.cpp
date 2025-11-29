#include "../Headers/Despachante.h"
#include <iostream>

void Despachante::adicionar(std::unique_ptr<VeiculoAutonomo> v) {
    frota.push_back(std::move(v));
}

void Despachante::atribuirRota(const std::string& destino) {
    for (auto& v : frota)
        v->planejarRota(destino);
}

void Despachante::moverTodos() {
    for (auto& v : frota)
        v->mover();
}

void Despachante::gerarRelatorio() const {
    std::cout << "\n=== Relatório de Frota ===\n";
    for (const auto& v : frota)
        v->relatorioStatus();
}