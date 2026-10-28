#include "Libro.h"

Libro::Libro() {}

Libro::Libro(const string &title, const string &author) : titulo(titulo), autor(autor) {}

const string &Libro::getTitulo() const {
    return titulo;
}

void Libro::setTitulo(const string &titulo) {
    Libro::titulo = titulo;
}

const string &Libro::getAutor() const {
    return autor;
}

void Libro::setAutor(const string &autor) {
    Libro::autor = autor;
}

Libro::~Libro() {

}
