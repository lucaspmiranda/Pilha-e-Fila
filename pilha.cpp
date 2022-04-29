#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

int main()
{
    Pilha *P1=criaPilha();
    Pilha *busca;
    int opcao, num;

    printf("Vamos criar um pilha com tipo de dados inteiro");

    do
    {
        printf("\n1 - Inserir inteiro na pilha\n2 - Remover inteiro da pilha\n3- Procurar inteiro na pilha: \n4 - Imprimir a pilha!\n5 -  Liberar a pilha\n6 - Sair\n\n");
        scanf("%d", &opcao);

        switch(opcao)
        {
        case 1:
            printf("\nDigite um valor a ser inserido na pilha: ");
            scanf("%d", &num);
            P1 = InserePilha(P1,num);
            break;
        case 2:
            printf("\nInforme um valor para remover da pilha: ");
            scanf("%d",&num);
            P1=RemovePilha(P1);
            break;
        case 3:
            printf("\nInforme o valor para buscar na pilha: ");
            scanf("%d",&num);
            busca=BuscaPilha(P1,num);
            if(busca!=NULL)
                printf("\nEncontrado o elemento %d", busca->info);
            else
                printf("\nElemento nao encontrado!");
            break;
        case 4:
            imprimePilha(P1);
            break;
        case 5:
            liberaPilha(P1);
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
