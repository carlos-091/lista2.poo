#include "../Headers/VeiculoAutonomo.h"

VeiculoAutonomo::VeiculoAutonomo(int id, const std::string& posicao, double bateria)
    : id(id), posicao(posicao), bateria(bateria) {}

VeiculoAutonomo::~VeiculoAutonomo() = default;

void VeiculoAutonomo::relatorioStatus() const {
    std::cout << "[ID " << id << "] Posição: " << posicao
              << " | Bateria: " << bateria << "%" << std::endl;
}