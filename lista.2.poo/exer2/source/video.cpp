#include "../Headers/Video.h"
#include <iostream>
#include <sstream>

Video::Video(const std::string& titulo, int ano, double duracao,
             const std::string& resolucao, const std::string& codec)
    : Midia(titulo, ano, duracao), resolucao(resolucao), codec(codec) {}

void Video::abrir() const {
    std::cout << "Abrindo vídeo: " << titulo << " (" << resolucao << ")\n";
}

void Video::reproduzir() const {
    std::cout << "🎬 Reproduzindo vídeo " << titulo << " [" << codec << "]\n";
}

std::string Video::infoDetalhada() const {
    std::ostringstream oss;
    oss << "Vídeo: " << titulo << " (" << ano << ")\n"
        << "Resolução: " << resolucao << "\n"
        << "Codec: " << codec << "\n"
        << "Duração: " << duracao << " min\n";
    return oss.str();
}

bool Video::combina(const std::string& filtro) const {
    return titulo.find(filtro) != std::string::npos ||
           resolucao.find(filtro) != std::string::npos;
}