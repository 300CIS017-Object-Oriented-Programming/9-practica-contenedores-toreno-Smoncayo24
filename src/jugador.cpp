//
// Created by santi on 4/1/2025.
//

#include "jugador.h"

jugador::jugador(string nickname, int nivelRanking) {
    this->nickname = nickname;
    this->nivelRanking = (nivelRanking >= 1 && nivelRanking <= 100) ? nivelRanking : 1;
}

string jugador::getNickname() { return nickname; }
int jugador::getNivelRanking() { return nivelRanking; }
vector<videojuego*>& jugador::getVideojuegosInscritos() { return videojuegosInscritos; }

void jugador::inscribirVideojuego(videojuego* juego) {
    if (!estaInscrito(juego)) {
        videojuegosInscritos.push_back(juego);
    }
}

bool jugador::estaInscrito(videojuego* juego) {
    for (auto vj : videojuegosInscritos) {
        if (vj->getCodigo() == juego->getCodigo()) {
            return true;
        }
    }
    return false;
}

float jugador::promedioDificultad() {
    if (videojuegosInscritos.empty()) return 0.0f;
    float suma = 0;
    for (auto vj : videojuegosInscritos) {
        suma += vj->getNivelDificultad();
    }
    return suma / videojuegosInscritos.size();
}

void jugador::mostrarVideojuegos() {
    cout << "Videojuegos de " << nickname << ":" << endl;
    for (auto vj : videojuegosInscritos) {
        vj->mostrar();
    }
}