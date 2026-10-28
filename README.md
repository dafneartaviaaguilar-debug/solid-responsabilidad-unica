o# Principio de Responsabilidad Única (Single Responsability Principle)

Proyecto en C++ que demuestra el primer principio SOLID: En español como Principio de Responsabilidad Única.

## ¿Qué es este principio?

> Una clase debe tener **una sola razón para cambiar**, es decir, una sola responsabilidad.

## ¿Cómo se implementa en este proyecto?

Se separaron dos responsabilidades distintas en dos clases:

| Clase | Responsabilidad única |
|-------|-----------------------|
| `Libro` | Guardar los **datos** del libro (`titulo` y `autor`) con sus getters y setters. |
| `Guardar` | Encargarse de **guardar** un libro (`GuardarLibro`). |

`Libro` no sabe nada de cómo se guarda, y `Guardar` no sabe nada de cómo se maneja un libro por dentro: solo recibe uno y lo guarda.

### Código clave

```cpp
// Libro.h  -> solo representa los datos
class Libro {
public:
    string titulo;
    string autor;
    // constructores, getters y setters
};

// Guardar.h -> solo se encarga de guardar
class Guardar {
public:
    void GuardarLibro(Libro book);
};
```

```cpp
// main.cpp
Libro book;
Guardar save;
book.setTitulo("Programacion 2");
book.setAutor("Cristopher Montero Jimenez");

save.GuardarLibro(book);   // cada clase hace solo lo suyo
```

### ¿Por qué cumple el principio?

- Si cambia la forma de guardar (archivo, base de datos, etc.), solo se modifica `Guardar`.
- Si el libro necesita un campo nuevo (por ejemplo `editorial`), solo se modifica `Libro`.
- Si ambas cosas estuvieran en una sola clase `Libro`, esa clase tendría **dos razones para cambiar**, y se violaría el principio.

## Estructura del proyecto

```
Libro.h / Libro.cpp        -> datos del libro
Guardar.h / Guardar.cpp    -> lógica para guardar
main.cpp                   -> programa de ejemplo
```

## Salida del programa

```
Principio de Responsabilidad Unica

Guardando el titulo del libro: Programacion 2, Author: Cristopher Montero Jimenez
```

## Cómo ejecutarlo

```bash
g++ *.cpp -o programa
./programa        # en Windows: programa.exe
```
