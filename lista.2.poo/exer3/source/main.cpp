#include <iostream>
#include <memory>
#include "../Headers/Despachante.h"
#include "../Headers/CarroAutonomo.h"
#include "../Headers/CaminhaoAutonomo.h"
#include "../Headers/OnibusAutonomo.h"

int main() {
    Despachante d;

    d.adicionar(std::unique_ptr<CarroAutonomo>(
        new CarroAutonomo(1, "Centro", 90, 4, 350)));

    d.adicionar(std::unique_ptr<CaminhaoAutonomo>(
        new CaminhaoAutonomo(2, "Porto", 80, 12000, 4)));

    d.adicionar(std::unique_ptr<OnibusAutonomo>(
        new OnibusAutonomo(3, "Rodoviária", 70, 40, true)));

    d.atribuirRota("Aeroporto");
    d.moverTodos();
    d.gerarRelatorio();

    return 0;
}