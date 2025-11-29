#ifndef VEICULOAUTONOMO_H
#define VEICULOAUTONOMO_H

#include <string>
#include <iostream>

class VeiculoAutonomo {
protected:
    int id;
    std::string posicao;
    double bateria;

public:
    VeiculoAutonomo(int id, const std::string& posicao, double bateria);
    virtual ~VeiculoAutonomo();

    virtual void planejarRota(const std::string& destino) = 0;
    virtual void mover() = 0;
    virtual void relatorioStatus() const;
    virtual void estrategiaRecarga() const = 0;
    virtual bool detectarObstaculos() const = 0;
    virtual double consumoPorKm() const = 0; // puro → classe abstrata

    int getId() const { return id; }
    double getBateria() const { return bateria; }
    void setPosicao(const std::string& novaPosicao) { posicao = novaPosicao; }
};

#endif