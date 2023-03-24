#include <stdio.h>

int main() {

    int numero = 3;
    int *puntNumero = &numero;

    printf("hola mundo\n");
    printf("contenido del puntero: %d\n", *puntNumero);
    printf("direccion de memoria almacenada por el puntero: %p\n", puntNumero);
    printf("direccion de memoria de la variable: %p\n", &numero);
    printf("direccion de memoria del puntero: %p\n", &puntNumero);
    printf("tamanio en bytes de la variable: %d\n", sizeof(numero));

    return 0;
}