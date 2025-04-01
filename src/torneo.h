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
    void registrarVideojuego();
    void registrarJugador();
    void inscribirJugadorEnVideojuego();
    void mostrarVideojuegosDeJugador();
    void inicializarVideojuegos();
    void inicializarJugadores();
};



#endif //TORNEO_H
