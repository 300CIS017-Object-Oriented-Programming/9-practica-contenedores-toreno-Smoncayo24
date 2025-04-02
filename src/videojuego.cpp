//
// Created by santi on 4/1/2025.
//

#include "videojuego.h"
#include <iostream>
using namespace std;

videojuego::videojuego(string codigo, string nombre, string genero, int nivelDificultad) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->genero = genero;
    this->nivelDificultad = (nivelDificultad >= 1 && nivelDificultad <= 5) ? nivelDificultad : 1;
}

string Videojuego::getCodigo() { return codigo; }
string Videojuego::getNombre() { return nombre; }
string Videojuego::getGenero() { return genero; }
int Videojuego::getNivelDificultad() { return nivelDificultad; }

void Videojuego::mostrar() {
    cout << "Código: " << codigo << " | Nombre: " << nombre
         << " | Género: " << genero << " | Dificultad: " << nivelDificultad << "/5" << endl;
}