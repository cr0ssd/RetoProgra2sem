#ifndef SERIE_H
#define SERIE_H

#include "video.h"
#include "episodio.h"
#include <vector>

class Serie : public Video {
private:
    vector<Episodio> episodios;

public:
    Serie(int id, const string& nombre, int duracion, const string& genero);

    vector<Episodio>& getEpisodios();

    void agregarEpisodio(const Episodio& episodio);
    void mostrarEpisodios() const;
};

#endif