## Situación problema

Modelado servicio de streaming

### Estructura del Proyecto

El proyecto se divide en las siguientes clases:

* **Video:** Clase base abstracta que define las propiedades comunes a películas y series.
* Propiedades: id, nombre, duración, género, calificación promedio.
* Métodos: Getters, Setters, mostrarInformacion().
* **Pelicula:** Clase derivada de Video que representa una película.
* **Episodio:** Clase derivada de Video que representa un episodio de una serie.
* Propiedades adicionales: número de episodio, temporada.
* Métodos adicionales: Getters, Setters, mostrarInformacion() (sobreescrito).
* **Serie:** Clase derivada de Video que representa una serie de televisión.
* Propiedades adicionales: vector de episodios.
* Métodos adicionales: agregarEpisodio(), mostrarEpisodios().

### Cómo Utilizar el Programa

1. **Compilar el código fuente:** Utiliza un compilador de C++ para compilar el código fuente.
2. **Ejecutar el programa:** Ejecuta el archivo ejecutable generado.

### Ejemplo de Uso

El archivo `main.cpp` contiene un ejemplo de cómo utilizar las clases para crear y gestionar películas y series. En este ejemplo:

* Se crean instancias de películas con información básica.
* Se crea una instancia de serie y se le añaden dos episodios.
* Se muestra la información de las películas y la serie, incluyendo los detalles de los episodios.

### Notas Adicionales

* El programa utiliza archivos de encabezado (.h) para declarar las clases y archivos de código fuente (.cpp) para implementar los métodos.
* La clase `Video` se define como abstracta para evitar la creación de instancias directas de la clase base.
* Se utiliza el polimorfismo para llamar a la versión correcta del método `mostrarInformacion()` según el tipo de objeto.

## Isaac Martínez Trujillo A01735069