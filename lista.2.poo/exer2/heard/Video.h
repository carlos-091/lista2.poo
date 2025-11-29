#ifndef VIDEO_H
#define VIDEO_H

#include "Midia.h"

class Video : public Midia {
private:
    std::string resolucao;
    std::string codec;

public:
    Video(const std::string& titulo, int ano, double duracao,
          const std::string& resolucao, const std::string& codec);

    void abrir() const override;
    void reproduzir() const override;
    std::string infoDetalhada() const override;
    bool combina(const std::string& filtro) const override;
};

#endif