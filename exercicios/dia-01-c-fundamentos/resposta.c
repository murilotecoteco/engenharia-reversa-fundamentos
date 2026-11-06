// Escreva um programa em C que:
// 1. leia dois números inteiros;
// 2. calcule a soma;
// 3. mostre a soma;
// 4. informe se a soma é par ou ímpar.
#include <stdio.h>

int numero1 = 0;
int numero2 = 0;

int soma(int numero1, int numero2)
{
    int resultado = numero1 + numero2;

    return resultado;
}

int main()
{
    int resultado = 0;

    scanf("%d", &numero1);
    scanf("%d", &numero2);

    resultado = soma(numero1, numero2);

    printf("O resultado da soma e %d.\n", resultado);

    if (resultado % 2 == 0)
    {
        printf("O resultado e par.\n");
    }
    else
    {
        printf("O resultado e impar.\n");
    }

    return 0;
}
