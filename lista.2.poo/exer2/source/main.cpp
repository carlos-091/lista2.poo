#include <iostream>
#include <memory>
#include <vector>
#include "../Headers/GerenciadorMidia.h"
#include "../Headers/Musica.h"
#include "../Headers/Video.h"
#include "../Headers/Podcast.h"

int main() {
    GerenciadorMidia g;

    g.adicionar(std::unique_ptr<Musica>(new Musica("Shape of You", 2017, 4.3, "Ed Sheeran", 320)));
    g.adicionar(std::unique_ptr<Video>(new Video("Inception", 2010, 148, "1080p", "H.264")));
    g.adicionar(std::unique_ptr<Podcast>(new Podcast("TechTalk", 2022, 60, "Alice",
        {"Bob", "Carol"})));

    g.listar();
    g.abrirTudo();
    g.filtrar("Ed");
    g.filtrar("1080p");

    return 0;
}