#include <stdio.h>

int main() {
    //TODO: (17) Asigna lo valores del 1 al 9 para rellenar la matriz de 3x3
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    // Acceso usando índices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", arr [i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%p\t", &arr[i][j]); //dirección de memoria
        }
        printf("\n");
    }
    
    return 0;
}
