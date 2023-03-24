#include <stdio.h>
int cuadrado(int numero);
void cuadrado(int *numero);
void infoVar(int var);
void invertir(int *a, int *b);
void orden(int *a, int *b);
void saltodeLinea();
int main() {

    int a;
    int b;
    // ------------------------------ funcion del punto 4a ------------------------------
    printf("========= cuadrado de un numero =========");
    saltodeLinea();
    printf("Ingrese un numero: ");
    scanf("%d", &a);
    printf("El cuadrado de %d es: %d", a, cuadrado(a));
    saltodeLinea();
    // ------------------------------ funcion del punto 4b ------------------------------
    printf("========= cuadrado de un numero de tipo void =========");
    saltodeLinea();
    printf("Ingrese un numero: ");
    scanf("%d", &a);
    int aux = a;
    cuadrado(&a);
    printf("El cuadrado de %d es: %d", aux, a);
    saltodeLinea();
    // ------------------------------ funcion del punto 4c ------------------------------
    printf("========= mostrar por pantalla la direccion y el contenido de la variable =========");
    saltodeLinea();
    printf("Ingrese un dato entero: ");
    scanf("%d", &a);
    infoVar(a);
    saltodeLinea();
    // ------------------------------ funcion del punto 4d ------------------------------
    printf("========= Dado dos parametros de entrada, invertir los valores entre ambos =========");
    saltodeLinea();
    printf("Ingrese un dato entero: ");
    scanf("%d", &a);
    printf("Ingrese otro dato entero: ");
    scanf("%d", &b);
    invertir(&a, &b);
    saltodeLinea();
    printf("a: %d \t b: %d", a, b);
    saltodeLinea();
    // ------------------------------ funcion del punto 4e ------------------------------
    printf("========= Ordenar parametros en el primer parametro el menor y en el segundo el mayor =========");
    saltodeLinea();
    printf("Ingrese un dato entero: ");
    scanf("%d", &a);
    printf("Ingrese otro dato entero: ");
    scanf("%d", &b);
    orden(&a, &b);
    saltodeLinea();
    printf("a: %d \t b: %d", a, b);
    


    return 0;
}

int cuadrado(int numero) {
    return numero*numero;
}

void cuadrado(int *numero) {
    *numero = (*numero) * (*numero);
}

void infoVar(int var) {
    printf("Direccion de variable: %p \t contenido de variable: %d\n", &var, var);
}

void invertir(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b) {
    
    if(*a>*b) {
        invertir(a,b);    
    }
}

void saltodeLinea() {
    printf("\n");
}