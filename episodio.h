#ifndef EPISODIO_H
#define EPISODIO_H

#include "video.h"

class Episodio : public Video {
private:
    int numeroEpisodio;
    int temporada;

public:
    Episodio(int id, const string& nombre, int duracion, const string& genero, int numeroEpisodio, int temporada);

    int getNumeroEpisodio() const;
    int getTemporada() const;
    
    void setNumeroEpisodio(int numeroEpisodio);
    void setTemporada(int temporada);
    
    void mostrarInformacion() const override; 
};

#endif
