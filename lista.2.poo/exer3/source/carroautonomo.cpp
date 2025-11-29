#include "../Headers/CarroAutonomo.h"
#include <iostream>

CarroAutonomo::CarroAutonomo(int id, const std::string& posicao, double bateria,
                             int passageiros, double autonomia)
    : VeiculoAutonomo(id, posicao, bateria),
      passageiros(passageiros), autonomia(autonomia) {}

void CarroAutonomo::planejarRota(const std::string& destino) {
    std::cout << "Carro " << id << ": planejando rota para " << destino << std::endl;
}

void CarroAutonomo::mover() {
    if (detectarObstaculos()) {
        std::cout << "Carro " << id << ": obstáculo detectado, ajustando rota.\n";
    } else {
        std::cout << "Carro " << id << ": movendo-se suavemente.\n";
        bateria -= consumoPorKm() * 5;
    }
}

void CarroAutonomo::estrategiaRecarga() const {
    std::cout << "Carro " << id << ": recarregando em estação rápida.\n";
}

bool CarroAutonomo::detectarObstaculos() const {
    return false; // simplificação
}

double CarroAutonomo::consumoPorKm() const {
    return 0.8; // consumo em % por km
}