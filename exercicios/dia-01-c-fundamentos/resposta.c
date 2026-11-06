// Escreva um programa em C que:
// 1. leia dois números inteiros;
// 2. calcule a soma;
// 3. mostre a soma;
// 4. informe se a soma é par ou ímpar.
#include <stdio.h>

int numero1 = 0;
int numero2 = 0;
int soma(int numero1, int numero2){
     int resultado = numero1 + numero2;
     if(resultado %2 == 0 ){
    printf("o resultado e par");
} else { printf("o resultado e impar");
}
return resultado;
}
int main(){
scanf("%d", &numero1);
scanf("%d", &numero2);
printf("o resultado da soma e %d", soma(numero1, numero2));
return 0;}
