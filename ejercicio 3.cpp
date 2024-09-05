#include <stdio.h>
#include <stdlib.h>

int main() {
    char sucursales[25][20];
    float ventas[25], suma_ventas = 0.0, promedio;

    for (int i = 0; i < 25; i++) {
        snprintf(sucursales[i], sizeof(sucursales[i]), "Sucursal %d", i + 1);
    }

    for (int i = 0; i < 25; i++) {
        printf("Ingrese las ventas de la %s: ", sucursales[i]);
        scanf("%f", &ventas[i]);
        suma_ventas += ventas[i];
    }

    promedio = suma_ventas / 25;

    printf("Promedio de ventas: %.2f\n", promedio);

    printf("Sucursales con ventas mayores al promedio:\n");
    for (int i = 0; i < 25; i++) {
        if (ventas[i] > promedio) {
            printf("%s - Ventas: %.2f\n", sucursales[i], ventas[i]);
        }
    }

    return 0;
}