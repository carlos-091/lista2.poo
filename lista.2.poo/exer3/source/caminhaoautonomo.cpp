#include "../Headers/CaminhaoAutonomo.h"
#include <iostream>

CaminhaoAutonomo::CaminhaoAutonomo(int id, const std::string& posicao, double bateria,
                                   double capacidadeCarga, int eixos)
    : VeiculoAutonomo(id, posicao, bateria),
      capacidadeCarga(capacidadeCarga), eixos(eixos) {}

void CaminhaoAutonomo::planejarRota(const std::string& destino) {
    std::cout << "Caminhão " << id << ": planejando rota para " << destino
              << " (evitando restrições de peso)\n";
}

void CaminhaoAutonomo::mover() {
    if (detectarObstaculos()) {
        std::cout << "Caminhão " << id << ": obstáculo detectado, freando.\n";
    } else {
        std::cout << "Caminhão " << id << ": seguindo rota de carga.\n";
        bateria -= consumoPorKm() * 7;
    }
}

void CaminhaoAutonomo::estrategiaRecarga() const {
    std::cout << "Caminhão " << id << ": recarregando em doca industrial.\n";
}

bool CaminhaoAutonomo::detectarObstaculos() const {
    return true; // simula sensores pesados
}

double CaminhaoAutonomo::consumoPorKm() const {
    return 1.5;
}