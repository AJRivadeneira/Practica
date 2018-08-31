#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int factorial = 1;
    int i;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    for(i = numero; i >= 1; i--)
    {
        factorial = factorial * i;
    }

    printf("El factorial es: %d", factorial);

    return 0;
}
