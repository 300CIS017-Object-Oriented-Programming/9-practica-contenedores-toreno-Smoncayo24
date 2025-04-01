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
    vector<videojuego> videojuegosInscritos;
public:
    jugador(string, int);
    void mostar();
};



#endif //JUGADOR_H
