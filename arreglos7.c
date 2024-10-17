#include <stdio.h>

int main() {
    //TODO: (19) Asigna lo valores del 1 al 9 para rellenar la matriz de 3x3
    int arr[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    
    //TODO: (20) Crea un apuntador que apunte al primer elemento de la matriz
    int *ptr = &arr[0][0]; //el primer elemento es 0,0

    // Acceso usando índices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            //TODO: (21) Usa la lógica de apuntadores para acceder al arreglo
            printf("%d\t", *(ptr + i*3 +j)); //i se multiplica por 3 para recorrer los renglones, ptr =direcciòn de memoria del primer elemento
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 9; i++) {
            printf("%d\t", *(ptr + i)); 
            ((i+1)%3==0)?printf("\n") : printf ("");  //ternario si una conclución se cumple hace algo, si no hace otra
    }
    //una direcciòn que van seguida una despues de otras e conocen como direcciones contiguas
       return 0;
}