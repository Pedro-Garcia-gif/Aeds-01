#include <stdio.h>

int Media(int N1,int N2)
{
    int M;
    M=(N1+N2)/2;
    return(M);
}
int main()
{
    int N1,N2,res;
    printf("Informe a nota dos alunos:\n");
    scanf("%d%d", &N1,&N2);
    res=Media(N1,N2);
    printf("Media dos alunos:%d",res);

    printf("TESTE");
}