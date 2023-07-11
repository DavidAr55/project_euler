#include <stdlib.h>
#include <iostream>

using namespace std;

int fibonacci(int);

int main() {

    // Limite de la serie
    int lim = 4000000;
    int suma = fibonacci(lim);

    cout << "La suma de los numeros pares en la serie Fibonacci hasta 4 Millones es: " << suma << endl;

    return 0;
}

int fibonacci(int lim) {
    
    int total = 0;
    int a = 0, b = 1;      // Damos inicio a la serie Fibonacci

    while (b <= lim)
    {
        int c = a + b;     // Declaramos la variable auxiliar con la que vamos a intercambiar los valores
        a = b;
        b = c;

        // cout << "(a: " << a << " b: " << b << ")" << endl;
        if(b % 2 == 0) {
            total += b;
            // cout << "Divisible: " << b << endl;
        }
    }

    return total;
}