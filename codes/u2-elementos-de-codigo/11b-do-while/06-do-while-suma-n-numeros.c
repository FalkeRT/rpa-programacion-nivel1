#include <stdio.h>
// Ingrese 10 numeros y sumarlos

int main()
{
    int n;
    int suma = 0;
    int cont = 0;  // variable de control cont - 1� inicializacion

    printf("Ingrese 10 n�meros enteros\n");

    do {
        scanf("%d", &n);
        suma = suma + n;
        cont++;  // 3� modificacion o alteraci�n
    } while( cont < 10 );  // 2� condicion de parada

    printf("La suma total es: %d", suma);
}
