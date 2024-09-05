#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int pares = 0, impares = 0;
    int numero; 

    // Usamos la función time para generar una semilla aleatoria
    srand(time(0));

    for (int i = 0; i < 500; i++) {
        numero = rand() % 51 + 50;  // Genera un número aleatorio entre 50 y 100

        if (numero % 2 == 0) {
            pares++;  
        } else {
            impares++; 
        }
    }

    printf("Cantidad de números pares: %d\n", pares);
    printf("Cantidad de números impares: %d\n", impares);

    return 0;
}
