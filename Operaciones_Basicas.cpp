//
// Created by mikef on 09/11/2023.
//

#include "Operaciones_Basicas.h"
#include <iostream>

using namespace std;

int main() {
    // 1. Operaciones basicas.
    int a, b, resultado = 0;
    cout << "Ingrese el primer numero: "; cin >> a;
    cout << "Ingrese el segundo numero: "; cin >> b;
    resultado = a + b;
    cout << "El resultado de la suma es: " << resultado << endl;

    return 0;
}