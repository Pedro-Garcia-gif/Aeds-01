#include <stdio.h>
#include <stdlib.h>

#define maxtam 3

typedef int apontador;

typedef struct
{
    int cod;
}tipoitem;

typedef struct 
{
tipoitem[maxtam];
apontador frente;
apontador tras;
}tipo fila;

tipofila fila;
tipoitem x;
int tamanho=0;

void ffvazia (tipofila*fila) //fazer fila ficar vazia
{
    fila->frente=1;
    fila->tras= fila->frente;
    tamanho=0;

}
 

int main()
{
    int opcao, resposta;
    ffvazia(&fila);

 do
{
    printf("\n\nMENU\n\n");
    printf("digite a opcao desejada: \n");
    printf("0 - SAIR\n");
    printf("1 - ESVAZIAR FILA\n")
    printf("2 - Verificar se a fila esta vazia\n");
    scanf("%d", &opcao);
 
    switch (opcao)
    {
    case 0:
    {
        printf("PROGRAMA ENCERRADO!\n");
     break;
    }
    case 1:
    {
        ffvazia(&fila);
        printf("\nA FILA VAZIA\n");
      break;
    }
    case 2:
    {
        resposta=vazia(fila);
        if(resposta == 1)
        printf("\nFila esta vazia\n");
        else
        {
            printf("\nA fila não esta vazia\n");
            else
            {
                printf("A fila esta vazia");
            }
            
        }
    }
    
    default: printf("\n\nOPCAO INVALIDA\n\n");
    }
    _getch();
    system("cls");
    } while (opcao!=0);
    return(0);

}