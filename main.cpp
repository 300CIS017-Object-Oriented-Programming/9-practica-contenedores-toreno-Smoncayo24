#include <iostream>
#include "src/torneo.h"
using namespace std;

void mostrarMenu() {
    cout << "\nBattle Arena!!!\n";
    cout << "1. Registrar videojuego\n";
    cout << "2. Registrar jugador\n";
    cout << "3. Inscribir jugador a videojuego\n";
    cout << "4. Mostrar videojuegos de un jugador\n";
    cout << "5. Calcular promedio de dificultad\n";
    cout << "6. Salir\n";
    cout << "Ingrese una opción: ";
}

void limpiarBuffer() {
    while (cin.get() != '\n');
}

int main() {
    torneo torneo;
    int opcion;
    string codigo, nombre, genero, nickname;
    int nivelDificultad, nivelRanking;

    torneo.inicializarVideojuegos();
    torneo.inicializarJugadores();

    do {
        mostrarMenu();
        cin >> opcion;
        limpiarBuffer();

        switch (opcion) {
            case 1:
                cout << "Código del videojuego: ";
                getline(cin, codigo);
                cout << "Nombre: ";
                getline(cin, nombre);
                cout << "Género: ";
                getline(cin, genero);
                cout << "Dificultad (1-5): ";
                cin >> nivelDificultad;
                limpiarBuffer();

                torneo.registrarVideojuego(new videojuego(codigo, nombre, genero, nivelDificultad));
                cout << "Videojuego registrado.\n";
                break;

            case 2:
                cout << "Nickname del jugador: ";
                getline(cin, nickname);
                cout << "Nivel de ranking (1-100): ";
                cin >> nivelRanking;
                limpiarBuffer();

                torneo.registrarJugador(new jugador(nickname, nivelRanking));
                cout << "Jugador registrado.\n";
                break;

            case 3:
                cout << "Nickname del jugador: ";
                getline(cin, nickname);
                cout << "Código del videojuego: ";
                getline(cin, codigo);

                torneo.inscribirJugadorEnVideojuego(nickname, codigo);
                break;

            case 4:
                cout << "Nickname del jugador: ";
                getline(cin, nickname);
                torneo.mostrarVideojuegosDeJugador(nickname);
                break;

            case 5:
                cout << "Nickname del jugador: ";
                getline(cin, nickname);
                if (torneo.existeJugador(nickname)) {
                    jugador* jugador = torneo.getJugador(nickname);
                    cout << "Promedio de dificultad: " << jugador->promedioDificultad() << "/5\n";
                } else {
                    cout << "Jugador no encontrado.\n";
                }
                break;

            case 6:
                cout << "Saliendo del sistema...\n";
                break;

            default:
                cout << "Opción no válida. Intente de nuevo.\n";
        }
    } while (opcion != 6);

    return 0;
}