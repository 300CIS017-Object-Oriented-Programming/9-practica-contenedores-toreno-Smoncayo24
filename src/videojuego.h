//
// Created by santi on 4/1/2025.
//

#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include <iostream>
#include <string>

using namespace std;

class videojuego {
private:
  string codigo;
  string nombre;
  string genero;
  int nivelDificultad;

public:
  videojuego(int, string, string, int);
  void mostrar();
};



#endif //VIDEOJUEGO_H
