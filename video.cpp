#include "video.h"
#include <iostream>

using namespace std;

Video::Video(int id, const string& nombre, int duracion, const string& genero) 
    : id(id), nombre(nombre), duracion(duracion), genero(genero), calificacionPromedio(0.0) {}

int Video::getId() const {
    return id;
}

string Video::getNombre() const {
    return nombre;
}

int Video::getDuracion() const {
    return duracion;
}

string Video::getGenero() const {
    return genero;
}

float Video::getCalificacionPromedio() const {
    return calificacionPromedio;
}

void Video::setCalificacionPromedio(float calificacionPromedio) {
    this->calificacionPromedio = calificacionPromedio;
}

void Video::mostrarInformacion() const {
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Duración: " << duracion << " minutos" << endl;
    cout << "Género: " << genero << endl;
    cout << "Calificación Promedio: " << calificacionPromedio << endl;
}
