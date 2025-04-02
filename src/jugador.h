//
// Created by santi on 4/1/2025.
//

#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <string>
#include <vector>
#include "videojuego.h"

using namespace std;

class jugador {
private:
    string nickname;
    int nivelRanking;
    vector<videojuego*> videojuegosInscritos;
public:
    jugador(string nickname, int nivelRanking);
    string getNickname();
    int getNivelRanking();
    vector<videojuego*>& getVideojuegosInscritos();
    void inscribirVideojuego(Videojuego* juego);
    bool estaInscrito(Videojuego* juego);
    float promedioDificultad();
    void mostrarVideojuegos();
};



#endif //JUGADOR_H
