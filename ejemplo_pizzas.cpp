#include <iostream>
using namespace std;

int main() {
    int num_personas, num_pizzas, total_trozos, trozos_por_persona, trozos_sobrantes;

    cout << "Bienvenidos a la pizzería virtual. ¿Cuántas personas son? ";
    cin >> num_personas;

    cout << "¿Cuántas pizzas deseas? ";
    cin >> num_pizzas;

    total_trozos = num_pizzas * 8;  // Cada pizza tiene 8 trozos
    trozos_por_persona = total_trozos / num_personas;  // Divide igualmente
    trozos_sobrantes = total_trozos % num_personas;  // Calcula los trozos sobrantes
    
       // Pausar la ejecución del programa
    system("pause");

    // Borrar la pantalla (solo en sistemas Windows)
    system("cls");

    cout << "Muy bien, le tocarán a cada persona " << trozos_por_persona << " trozos.\n";
    cout << "Además, sobrarán " << trozos_sobrantes << " trozos.\n";

 

    // Comentarios finales
    cout << "Programa desarrollado por: Yoshio Geovanni Garcia Lopez" << endl;
    cout << "Desarrollado el: 2023-10-22" << endl;

    return 0;
}

