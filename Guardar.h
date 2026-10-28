#ifndef GUARDAR_H
#define GUARDAR_H
#include "Libro.h"
#include <iostream>
using namespace std;

class Guardar {
public:
    Guardar();
    virtual ~Guardar();

    void GuardarLibro(Libro book);
};

#endif // GUARDAR_H
