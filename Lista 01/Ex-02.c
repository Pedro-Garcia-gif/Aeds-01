#include <stdio.h>

int soma(int N1,int N2)
{   
    return((N1+N2) * 5);
}
int main()
{
    int N1,N2;
    printf("Informe os dois numeros :\n");
    scanf("%d%d",&N1,&N2);
    
    printf("O resultado:%d",soma(N1,N2));
}