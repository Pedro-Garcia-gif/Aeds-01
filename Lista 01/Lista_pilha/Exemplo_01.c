#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define inicioarranjo 1
#define MaxTam 5

typedef int Apontador;

typedef struct 
{
    int cod;
    int idade;
}TipoItem;

typedef struct 
{
    TipoItem Item[MaxTam + 1];
    Apontador primeiro;
    Apontador ultimo;
}Tipolista;

Tipolista Lista;
TipoItem x;
Apontador pos;

void FLVazia(Tipolista *Lista)
{
    Lista->primeiro=inicioarranjo;
    Lista->ultimo=Lista->primeiro;
}

int Vazia (Tipolista Lista)
{
    return (Lista.primeiro==Lista.ultimo);
}
int main(){
    int opcao, resposta;
    setlocale(LC_ALL,""); //aceitar acentos
    //FLVazia(&Lista);
    do
    {
      printf("\n\nMENU\n\n");
      printf("Digite a opcao desejada:\n");
      printf("0 - Sair\n");
      printf("1 - Esvaziar lista\n");
      printf("2 - Verificar se a lista esta vazia\n");

    scanf("%d", &opcao);
    switch (opcao)
    {
    case 0:
       printf("PROGRAMA ENCERRADO!\n");
        break;
    case 1:
        //FLVazia(&lista);
        printf("\nA LISTA VAZIA\n");
         break;
    case 2:
        resposta=Vazia(Lista);
        if(resposta==1)
         printf("\nA LISTA VAZIA\n");
         else
         printf("\nLista não esta vazia\n");
        break;
    
    default:
     printf("\n\nOpcao invalidade\n\n");
    }
    _getch();
    system("cls");
} while (opcao != 0);//fim do while
return (0);

}
