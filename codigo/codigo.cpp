#include <iostream>     
#include <vector>       
using namespace std;

// Estructura que representa una rutina de entrenamiento
struct Rutina {
    string ejercicio;       // Nombre del ejercicio principal
    int diasPorSemana;      // Días que se entrena por semana
    int duracionMin;        // Duración diaria en minutos
};

// Estructura que representa el progreso semanal del atleta
struct Progreso {
    int semana;             // Número de semana
    string observaciones;   // Comentarios u observaciones del entrenador
    float mejoraPorcentaje; // Porcentaje de mejora en la semana
};

// Estructura principal que representa a un atleta
struct Atleta {
    string nombre;              
    Rutina rutina;              
    vector<Progreso> historial; 
};

// Función para registrar una rutina para el atleta
void registrarRutina(Atleta &a) {
    cout << "\n--- Registro de Rutina ---\n";
    
   
    cout << "Nombre del atleta: ";
    cin.ignore(); 
    getline(cin, a.nombre);


    cout << "Ejercicio principal: ";
    getline(cin, a.rutina.ejercicio);

    cout << "Días por semana: ";
    cin >> a.rutina.diasPorSemana;

    cout << "Duración (minutos por día): ";
    cin >> a.rutina.duracionMin;

    cout << "Rutina registrada correctamente.\n";
}

// Función para mostrar la rutina actual del atleta
void mostrarRutina(const Atleta &a) {
    cout << "\n--- Rutina del atleta ---\n";

    // Verifica si hay datos cargados
    if (a.nombre.empty()) {
        cout << "No hay rutina registrada.\n";
        return;
    }

    // Muestra los datos de la rutina
    cout << "Nombre: " << a.nombre << endl;
    cout << "Ejercicio: " << a.rutina.ejercicio << endl;
    cout << "Días por semana: " << a.rutina.diasPorSemana << endl;
    cout << "Duración por día: " << a.rutina.duracionMin << " minutos\n";
}

// Función para agregar una nueva entrada de progreso
void actualizarProgreso(Atleta &a) {
    // Verifica si ya hay una rutina registrada
    if (a.nombre.empty()) {
        cout << "Primero debes registrar una rutina.\n";
        return;
    }

    Progreso nuevo;

    cout << "\n--- Actualizar Progreso ---\n";

    // Solicita datos del progreso
    cout << "Semana (número): ";
    cin >> nuevo.semana;
    cin.ignore(); 
    cout << "Observaciones: ";
    getline(cin, nuevo.observaciones);
    cout << "Mejora (%) esta semana: ";
    cin >> nuevo.mejoraPorcentaje;

    // Agrega el progreso al historial
    a.historial.push_back(nuevo);
    cout << "Progreso actualizado correctamente.\n";
}

// Función para mostrar el historial completo de progreso
void mostrarProgreso(const Atleta &a) {
    cout << "\n--- Historial de Progreso ---\n";

    // Verifica si hay progreso registrado
    if (a.historial.empty()) {
        cout << "No hay progreso registrado aún.\n";
        return;
    }

    for (const auto& p : a.historial) {
        cout << "Semana " << p.semana << ": "
             << p.observaciones << " | Mejora: " << p.mejoraPorcentaje << "%\n";
    }
}


int main() {
    Atleta atleta; 
    int opcion;

    // Menú de opciones
    do {
        cout << "\n--- CLUB FUERZA TOTAL ---\n";
        cout << "1. Registrar rutina\n";
        cout << "2. Mostrar rutina\n";
        cout << "3. Actualizar progreso\n";
        cout << "4. Mostrar progreso\n";
        cout << "0. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1: registrarRutina(atleta); break;
            case 2: mostrarRutina(atleta); break;
            case 3: actualizarProgreso(atleta); break;
            case 4: mostrarProgreso(atleta); break;
            case 0: cout << "Saliendo...\n"; break;
            default: cout << "Opción inválida.\n";
        }
    } while (opcion != 0); 
    return 0;
}

