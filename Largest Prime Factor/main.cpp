#include <iostream>

using namespace std;

long long encontrarFactorPrimoMasGrande(long long numero) {
    long long factorPrimoMasGrande = -1; // Inicializamos con un valor negativo

    // Dividimos el número por 2 hasta que ya no sea divisible por 2
    while (numero % 2 == 0) {
        factorPrimoMasGrande = 2;
        numero /= 2;
    }

    // Ahora probamos con los números impares mayores a 2
    for (long long i = 3; i * i <= numero; i += 2) {
        while (numero % i == 0) {
            factorPrimoMasGrande = i;
            numero /= i;
        }
    }

    // Si al final el número que queda es mayor a 1, es un factor primo
    if (numero > 1) {
        factorPrimoMasGrande = numero;
    }

    return factorPrimoMasGrande;
}

int main() {
    long long numero = 600851475143;
    long long factorPrimoMasGrande = encontrarFactorPrimoMasGrande(numero);

    cout << "El factor primo más grande de " << numero << " es: " << factorPrimoMasGrande << endl;

    return 0;
}
