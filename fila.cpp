#include <stdio.h>
#include <stdlib.h>

#include "fila.h"

int main()
{
    Fila *F = criaFila();
    int opcao, i;

    printf("Vamos montar uma fila do tipo inteiro!");

    do
    {
        printf("\n1 - Inserir inteiro na fila\n2 - Remover inteiro da fila\n3- Procurar inteiro na fila\n4 - Imprimir a fila!\n5 -  Liberar a fila\n6 - Sair\n\n");
        scanf("%d", &opcao);

        switch(opcao)
        {
        /*case 1:
            Pilha *P1=criaPilha();
            break;*/
        case 1:
            printf("\nDigite um valor a ser inserido na pilha: ");
            scanf("%d", &i);
            F = insereFila(F, i);
            break;
        case 2:
            printf("\nInforme um valor para remover da pilha: ");
            scanf("%d",&i);
            F = RemoveFila(F);
            break;
        case 3:
            printf("\nDigite um valor pra buscar na fila: ");
            scanf("%d", &i);
            if(BuscaFila(F,i)!=NULL)
                printf("\nElemento %d encontrado\n",i);
            else
                printf("\nElemento %d nao encontrado\n",i);
            break;
        case 4:
            imprimeFila(F);
            break;
        case 5:
            liberaFila(F);
            break;
        case 6:
            printf("\nFinalizando...\n");
            break;
        default:
            printf("\nOpcao invalida!");
        }
    }
    while(opcao != 6);

    return 0;

}
