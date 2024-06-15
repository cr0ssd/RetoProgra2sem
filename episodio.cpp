#include "episodio.h"
#include <iostream>

using namespace std;

Episodio::Episodio(int id, const string& nombre, int duracion, const string& genero, int numeroEpisodio, int temporada)
    : Video(id, nombre, duracion, genero), numeroEpisodio(numeroEpisodio), temporada(temporada) {}

int Episodio::getNumeroEpisodio() const {
    return numeroEpisodio;
}

int Episodio::getTemporada() const {
    return temporada;
}

void Episodio::setNumeroEpisodio(int numeroEpisodio) {
    this->numeroEpisodio = numeroEpisodio;
}

void Episodio::setTemporada(int temporada) {
    this->temporada = temporada;
}


void Episodio::mostrarInformacion() const {
    Video::mostrarInformacion();

    cout << "Episodio Número: " << numeroEpisodio << endl;
    cout << "Temporada: " << temporada << endl;
}