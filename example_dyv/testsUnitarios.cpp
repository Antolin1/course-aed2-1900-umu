#include <iostream>
#include "dyv.h"
#include <cassert>

void testPrincipio() {
    std::vector<int> S = {1, 2, 3, 2, 3, 4, 1, 2};
    int resultado = subsecuenciaMasLargaDyV(S, 0, S.size() - 1);
    assert(resultado == 3); 
}

void testDecreciente() {
    std::vector<int> S = {5, 4, 3, 2, 1};
    int resultado = subsecuenciaMasLargaDyV(S, 0, S.size() - 1);
    assert(resultado == 1); 
}

void testMitad() {
    std::vector<int> S = {1, 2, 3, 4, 1, 2, 3, 4, 5, 6, 1, 2, 3, 4};
    int resultado = subsecuenciaMasLargaDyV(S, 0, S.size() - 1);
    assert(resultado == 6);
}

int main() {
    testPrincipio();
    testDecreciente();
    testMitad();
    std::cout << "Todos los tests pasaron!" << std::endl;
    return 0;
}