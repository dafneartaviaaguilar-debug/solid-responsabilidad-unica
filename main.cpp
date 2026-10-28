#include <iostream>
#include "Libro.h"
#include "Guardar.h"

using namespace std;

int main() {
    cout << "Principio de Responsabilidad Unica\n" <<endl;

    Libro book;
    Guardar save;
    book.setTitulo("Programacion 2");
    book.setAutor("Cristopher Montero Jimenez");

    // Principio de Responsabilidad Unica
    save.GuardarLibro(book);

    return 0;
}

