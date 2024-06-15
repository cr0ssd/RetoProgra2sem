#ifndef PELICULA_H
#define PELICULA_H

#include "video.h"

class Pelicula : public Video {
public:
    Pelicula(int id, const string& nombre, int duracion, const string& genero);
};

#endif