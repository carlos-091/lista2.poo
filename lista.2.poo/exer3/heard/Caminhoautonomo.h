#ifndef CAMINHAOAUTONOMO_H
#define CAMINHAOAUTONOMO_H
#include "VeiculoAutonomo.h"

class CaminhaoAutonomo : public VeiculoAutonomo {
private:
    double capacidadeCarga;
    int eixos;

public:
    CaminhaoAutonomo(int id, const std::string& posicao, double bateria,
                     double capacidadeCarga, int eixos);

    void planejarRota(const std::string& destino) override;
    void mover() override;
    void estrategiaRecarga() const override;
    bool detectarObstaculos() const override;
    double consumoPorKm() const override;
};

#endif