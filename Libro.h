#ifndef LIBRO_H
#define LIBRO_H
#include <iostream>

using namespace std;

class Libro {
public:
    string titulo;
    string autor;

    Libro();

    Libro(const string &titulo, const string &autor);

    virtual ~Libro();

    const string &getTitulo() const;

    void setTitulo(const string &titulo);

    const string &getAutor() const;

    void setAutor(const string &autor);

};

#endif // LIBRO_H
