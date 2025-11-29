#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include "Funcionario.h"

class Assalariado : public Funcionario {
private:
    double salarioMensal;

public:
    Assalariado(int id, const std::string& nome, const std::string& doc, double salario);
    double calcularPagamento() const override;
    std::string gerarDemonstrativo() const override;
};

#endif