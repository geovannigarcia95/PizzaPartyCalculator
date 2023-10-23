#include <iostream>
using namespace std;

int main() {
    int num_personas, num_pizzas, total_trozos, trozos_por_persona, trozos_sobrantes;

    cout << "Bienvenidos a la pizzer�a virtual. �Cu�ntas personas son? ";
    cin >> num_personas;

    cout << "�Cu�ntas pizzas deseas? ";
    cin >> num_pizzas;

    total_trozos = num_pizzas * 8;  // Cada pizza tiene 8 trozos
    trozos_por_persona = total_trozos / num_personas;  // Divide igualmente
    trozos_sobrantes = total_trozos % num_personas;  // Calcula los trozos sobrantes
    
       // Pausar la ejecuci�n del programa
    system("pause");

    // Borrar la pantalla (solo en sistemas Windows)
    system("cls");

    cout << "Muy bien, le tocar�n a cada persona " << trozos_por_persona << " trozos.\n";
    cout << "Adem�s, sobrar�n " << trozos_sobrantes << " trozos.\n";

 

    // Comentarios finales
    cout << "Programa desarrollado por: Yoshio Geovanni Garcia Lopez" << endl;
    cout << "Desarrollado el: 2023-10-22" << endl;

    return 0;
}

