#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {

    int lim = 1000;
    int total = 0;

    for(int i = 0; i < lim; i++) {
        if(i % 3 == 0 || i % 5 == 0)
            total += i;
    }

    cout << "El total de multiplis de 3 y 5 hata " << lim << " es: " << total << endl;

    return 0;
}