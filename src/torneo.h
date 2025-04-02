//
// Created by santi on 4/1/2025.
//

#ifndef TORNEO_H
#define TORNEO_H

#include <iostream>
#include <string>
#include <map>
#include "videojuego.h"
#include "jugador.h"

using namespace std;

class torneo {
private:
    map<string, videojuego*> videojuegosDisponibles;
    map<string, jugador*> jugadoresRegistrados;
public:
    void registrarVideojuego(Videojuego* juego);
    void registrarJugador(Jugador* jugador);
    void inscribirJugadorEnVideojuego(string nickname, string codigo);
    void mostrarVideojuegosDeJugador(string nickname);
    void inicializarVideojuegos();
    void inicializarJugadores();
    bool existeVideojuego(string codigo);
    bool existeJugador(string nickname);
};



#endif //TORNEO_H
