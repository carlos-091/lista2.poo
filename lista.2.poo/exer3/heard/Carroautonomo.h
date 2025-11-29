#ifndef CARROAUTONOMO_H
#define CARROAUTONOMO_H
#include "VeiculoAutonomo.h"

class CarroAutonomo : public VeiculoAutonomo {
private:
    int passageiros;
    double autonomia;

public:
    CarroAutonomo(int id, const std::string& posicao, double bateria,
                  int passageiros, double autonomia);

    void planejarRota(const std::string& destino) override;
    void mover() override;
    void estrategiaRecarga() const override;
    bool detectarObstaculos() const override;
    double consumoPorKm() const override;
};

#endif