#include <stdio.h>
// obtener desde teclado solo n�meros positivos y mustran la suma

int main()
{
    int n; // variable de control
    int suma = 0;

    scanf("%d", &n);  // inicializaci�n

    while( n>0 )  // mientras n sea positivos
    {
        suma = suma + n;
        scanf("%d", &n);  // modificacion

    }

    printf("El ciclo termino con el valor: %d", n);
    printf("Suma positivos: %d", suma);
}
