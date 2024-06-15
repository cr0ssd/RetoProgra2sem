#ifndef VIDEO_H
#define VIDEO_H

#include <string>

using namespace std;

class Video {
protected:
    int id;
    string nombre;
    int duracion;
    string genero;
    float calificacionPromedio;

public:
    Video(int id, const string& nombre, int duracion, const string& genero);

    int getId() const;
    string getNombre() const;
    int getDuracion() const;
    string getGenero() const;
    float getCalificacionPromedio() const;

    void setCalificacionPromedio(float calificacionPromedio);

    void mostrarInformacion() const;
};

#endif