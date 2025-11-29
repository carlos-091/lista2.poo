#include "../Headers/Musica.h"
#include <iostream>
#include <sstream>

Musica::Musica(const std::string& titulo, int ano, double duracao,
               const std::string& artista, int bitrate)
    : Midia(titulo, ano, duracao), artista(artista), bitrate(bitrate) {}

void Musica::abrir() const {
    std::cout << "Abrindo música: " << titulo << " (" << artista << ")\n";
}

void Musica::reproduzir() const {
    std::cout << "🎵 Tocando música: " << titulo << " - " << artista << "\n";
}

std::string Musica::infoDetalhada() const {
    std::ostringstream oss;
    oss << "Música: " << titulo << " (" << ano << ")\n"
        << "Artista: " << artista << "\n"
        << "Duração: " << duracao << " min\n"
        << "Bitrate: " << bitrate << " kbps\n";
    return oss.str();
}

bool Musica::combina(const std::string& filtro) const {
    return titulo.find(filtro) != std::string::npos ||
           artista.find(filtro) != std::string::npos;
}