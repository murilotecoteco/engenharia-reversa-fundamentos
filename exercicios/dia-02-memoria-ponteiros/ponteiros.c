#include <stdio.h>

int main(void)
{
    int idade = 25;
    int *ponteiro = &idade;

    printf("1. Valor de idade: %d\n", idade);//25
    printf("2. Endereco de idade (&idade): %p\n", (void *)&idade);//algum endereco de memoria
    printf("3. Valor guardado em ponteiro: %p\n", (void *)ponteiro); //valor do endereco de idade (numero de memoria)
    printf("4. Valor acessado por *ponteiro: %d\n", *ponteiro); //25

    *ponteiro = 50; //modifica o valor de idade

    printf("\nDepois de *ponteiro = 50:\n");
    printf("5. Valor de idade: %d\n", idade); //50
    printf("6. Valor acessado por *ponteiro: %d\n", *ponteiro);//50
    printf("\nEndereco da variavel ponteiro (&ponteiro): %p\n", //endereco de memoria da variavel ponteiro
           (void *)&ponteiro); 

    return 0;
}
