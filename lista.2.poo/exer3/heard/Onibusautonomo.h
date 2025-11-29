#ifndef ONIBUSAUTONOMO_H
#define ONIBUSAUTONOMO_H
#include "VeiculoAutonomo.h"

class OnibusAutonomo : public VeiculoAutonomo {
private:
    int lotacao;
    bool acessibilidade;

public:
    OnibusAutonomo(int id, const std::string& posicao, double bateria,
                   int lotacao, bool acessibilidade);

    void planejarRota(const std::string& destino) override;
    void mover() override;
    void estrategiaRecarga() const override;
    bool detectarObstaculos() const override;
    double consumoPorKm() const override;
};

#endif