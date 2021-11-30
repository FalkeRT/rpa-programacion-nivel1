/**
    Tema: Funcion de usuario que retorna un valor
    Problema: calcular el promedio de tres notas
**/

#include <stdio.h>

// (1) declaraci�n del prototipo de funci�n de usuario
float calcularpromedio(int n1, int n2, int n3);

int main()
{
    int nota1, nota2, nota3;
    float prom;

    printf("Ingrese nota 1: "); scanf("%d", &nota1);
    printf("Ingrese nota 2: "); scanf("%d", &nota2);
    printf("Ingrese nota 3: "); scanf("%d", &nota3);

    // (3) invocaci�n de funci�n de usuario
    prom = calcularpromedio(nota1, nota2, nota3);
    printf("El promedio es %.2f", prom);

    return 0;
}

// (2) definici�n del prototipo de funcion de usuario
float calcularpromedio(int n1, int n2, int n3)
{
    float promedio = (n1 + n2 + n3) / 3.0;

    return promedio;
}
