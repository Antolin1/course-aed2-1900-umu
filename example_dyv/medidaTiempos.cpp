#include <iostream>
#include "dyv.h"
#include <cassert>
#include <math.h>
#include <fstream>
#include <chrono>

using namespace std;


vector<int> generarPeorCaso(int longitud) {
    vector<int> secuencia(longitud);
    for (int i = 0; i < longitud; ++i) {
        secuencia[i] = i;
    }
    return secuencia;
}

vector<int> generarMejorCaso(int longitud) {
    vector<int> secuencia(longitud);
    for (int i = 0; i < longitud; ++i) {
        secuencia[i] = longitud - i;
    }
    return secuencia;
}


// Mide el tiempo que tarda la función en ejecutarse
double medirTiempo(const std::vector<int>& secuencia, const std::string& descripcion) {
    auto start = std::chrono::high_resolution_clock::now();

    int resultado = subsecuenciaMasLargaDyV(secuencia, 0, secuencia.size() - 1);  // Usa tu versión iterativa

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> duracion = end - start;

    std::cout << descripcion << " - Longitud: " << secuencia.size()
              << " → Resultado: " << resultado
              << " | Tiempo: " << duracion.count() << " ms\n";

    return duracion.count();
}

int main() {
    vector<int> longitudes = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    std::ofstream csv("resultados.csv");
    csv << "Longitud,MejorCaso,PeorCaso\n";

    for (int n : longitudes) {
        int longitud = pow(2, n);  // Longitud de la secuencia
        auto mejorCaso = generarMejorCaso(longitud);
        auto mejorTiempo = medirTiempo(mejorCaso, "Mejor caso");

        auto peorCaso = generarPeorCaso(longitud);
        auto peorTiempo = medirTiempo(peorCaso, "Peor caso");

        std::cout << "---------------------------\n";
        csv << n << "," << mejorTiempo << "," << peorTiempo << "\n";
    }

    csv.close();
    return 0;
}
