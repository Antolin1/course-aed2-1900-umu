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

    return duracion.count();
}

int main() {
    std::vector<int> longitudes;
    for (int x = 50000; x <= 1000000; x += 50000) {
        longitudes.push_back(x);
    }
    std::ofstream csv("resultados.csv");
    csv << "Longitud,MejorCaso,PeorCaso\n";

    for (int longitud : longitudes) {
        auto mejorCaso = generarMejorCaso(longitud);
        auto mejorTiempo = medirTiempo(mejorCaso, "Mejor caso");

        auto peorCaso = generarPeorCaso(longitud);
        auto peorTiempo = medirTiempo(peorCaso, "Peor caso");
        
        csv << longitud << "," << mejorTiempo << "," << peorTiempo << "\n";
    }

    csv.close();
    return 0;
}
