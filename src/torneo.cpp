//
// Created by santi on 4/1/2025.
//

#include "torneo.h"
#include <iostream>
using namespace std;

void torneo::registrarVideojuego(videojuego* juego) {
    if (!existeVideojuego(juego->getCodigo())) {
        videojuegosDisponibles[juego->getCodigo()] = juego;
    } else {
        cout << "Error: Videojuego con código " << juego->getCodigo() << " ya existe." << endl;
    }
}

void torneo::registrarJugador(jugador* jugador) {
    if (!existeJugador(jugador->getNickname())) {
        jugadoresRegistrados[jugador->getNickname()] = jugador;
    } else {
        cout << "Error: Jugador " << jugador->getNickname() << " ya registrado." << endl;
    }
}

void torneo::inscribirJugadorEnVideojuego(string nickname, string codigo) {
    if (!existeJugador(nickname)) {
        cout << "Error: Jugador no registrado." << endl;
        return;
    }
    if (!existeVideojuego(codigo)) {
        cout << "Error: Videojuego no disponible." << endl;
        return;
    }

    jugador* jugador = jugadoresRegistrados[nickname];
    videojuego* juego = videojuegosDisponibles[codigo];

    if (jugador->estaInscrito(juego)) {
        cout << "Error: El jugador ya está inscrito en este videojuego." << endl;
    } else {
        jugador->inscribirVideojuego(juego);
        cout << "Inscripción exitosa." << endl;
    }
}

void torneo::mostrarVideojuegosDeJugador(string nickname) {
    if (existeJugador(nickname)) {
        jugadoresRegistrados[nickname]->mostrarVideojuegos();
    } else {
        cout << "Error: Jugador no encontrado." << endl;
    }
}

bool torneo::existeVideojuego(string codigo) {
    return videojuegosDisponibles.find(codigo) != videojuegosDisponibles.end();
}

bool torneo::existeJugador(string nickname) {
    return jugadoresRegistrados.find(nickname) != jugadoresRegistrados.end();
}