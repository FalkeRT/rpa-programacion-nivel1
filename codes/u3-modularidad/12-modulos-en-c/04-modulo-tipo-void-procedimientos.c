/**
    Tema: Funcion de usuario de tipo void (procedimiento)
    Problema: Mostrar men� de opciones
**/

#include <stdio.h>

// (1) declaraci�n del prototipo de funci�n de usuario
void mostrarmenu();

int main()
{
    int opcion = 0;
    while(opcion!=3)
    {
        // (3) invocaci�n de funci�n de usuario
        mostrarmenu();

        printf("Seleccion opci�n: ");
        scanf("%d", &opcion);
        switch (opcion)
        {
            case 1: printf("Cargando notas\n"); break;
            case 2: printf("Calculando promedio\n"); break;
            case 3: printf("Terminar la sesi�n\n"); break;
            default: printf("Opci�n inv�lida\n");
        }

    }


    return 0;
}

// (2) definici�n del prototipo de funcion de usuario
void mostrarmenu()
{
    printf("Menu de opciones\n");
    printf("(1) Cargar notas\n");
    printf("(2) Calcular promedio\n");
    printf("(3) Salir\n");
}
