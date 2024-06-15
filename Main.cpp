#include <iostream>
#include <vector>
#include "pelicula.h"
#include "serie.h"
#include "episodio.h"

using namespace std;

int main() {
    Pelicula pelicula1(1, "Avengers: Endgame", 181, "Accion");
    Pelicula pelicula2(2, "Inception", 148, "Ciencia Ficcion");
    Pelicula pelicula3(3, "The Dark Knight", 152, "Accion");

    Serie serie1(4, "Stranger Things", 4, "Ciencia Ficcion");
    Episodio episodio1(1, "Chapter One: The Vanishing of Will Byers", 47, "Ciencia Ficcion", 1, 1);
    Episodio episodio2(2, "Chapter Two: The Weirest Things", 48, "Ciencia Ficcion", 2, 1);
    serie1.agregarEpisodio(episodio1);
    serie1.agregarEpisodio(episodio2);

    cout << "==== Películas ====" << endl;
    pelicula1.mostrarInformacion();
    cout << "-----------------" << endl;
    pelicula2.mostrarInformacion();
    cout << "-----------------" << endl;
    pelicula3.mostrarInformacion();
    cout << endl;

    cout << "==== Series ====" << endl;
    serie1.mostrarInformacion();
    cout << "-----------------" << endl;
    serie1.mostrarEpisodios();
    cout << endl;

    return 0;
}