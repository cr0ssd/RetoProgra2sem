#include "pelicula.h"

Pelicula::Pelicula(int id, const string& nombre, int duracion, const string& genero)
    : Video(id, nombre, duracion, genero) {}
