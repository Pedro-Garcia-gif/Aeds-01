#include <stdio.h>
#include<math.h>

int C(int M,int W)
{     
    return (M + W);
}
int C2(int M,int W)
{   
    int C;
    C=M+W;   
    printf("(a)A soma: %d",C);
}
int main()
{
   int  c;
   int  M,W;
   scanf("%d",&M);
   scanf("%d",&W);

    c=C2(M,W);
    printf("\n(b)A soma: %d",C(M,W)); 
    
}