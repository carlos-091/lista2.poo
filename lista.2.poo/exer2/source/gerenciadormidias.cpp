#include "../Headers/GerenciadorMidia.h"
#include <iostream>

void GerenciadorMidia::adicionar(std::unique_ptr<Midia> m) {
    midias.push_back(std::move(m));
}

void GerenciadorMidia::listar() const {
    std::cout << "\n=== Catálogo de Mídias ===\n";
    for (const auto& m : midias)
        std::cout << m->infoDetalhada() << "\n";
}

void GerenciadorMidia::abrirTudo() const {
    for (const auto& m : midias) {
        m->abrir();
        m->reproduzir();
    }
}

void GerenciadorMidia::filtrar(const std::string& filtro) const {
    std::cout << "\n=== Resultado da busca por \"" << filtro << "\" ===\n";
    for (const auto& m : midias)
        if (m->combina(filtro))
            std::cout << m->infoDetalhada() << "\n";
}