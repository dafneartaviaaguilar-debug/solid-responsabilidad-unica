#include "Guardar.h"

Guardar::Guardar()
{
    //ctor
}

Guardar::~Guardar()
{
    //dtor
}

    void Guardar::GuardarLibro(Libro book){
        cout << "Guardando el titulo del libro: " + book.getTitulo() + ", Author: " + book.getAutor() << endl;
    }
