#include <stdio.h>

int main() {
    float valor, suma = 0.0;
    int i;

    for (i = 0; i < 10; i++) {
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%f", &valor);  // Leemos un valor de tipo float
        suma += valor; 
    }

    float promedio = suma / 10;

    printf("La suma de los 10 valores es: %.2f\n", suma);
    printf("El promedio de los 10 valores es: %.2f\n", promedio);

    return 0;
}
