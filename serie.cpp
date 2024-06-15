#include "serie.h"
#include <iostream>

using namespace std;

Serie::Serie(int id, const string& nombre, int duracion, const string& genero)
    : Video(id, nombre, duracion, genero) {}

vector<Episodio>& Serie::getEpisodios() {
    return episodios;
}

void Serie::agregarEpisodio(const Episodio& episodio) {
    episodios.push_back(episodio);
}

void Serie::mostrarEpisodios() const {
    cout << "Episodios de " << nombre << ":" << endl;
    for (const Episodio& episodio : episodios) {
        episodio.mostrarInformacion();
        cout << "-----------------" << endl;
    }
}
