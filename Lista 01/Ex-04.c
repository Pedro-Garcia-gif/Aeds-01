#include <stdio.h>
#include<math.h>

float hipotenusa(float cat1,float cat2)
{   
    float H;
    H=sqrt((cat1*cat1)+(cat2*cat2)) ;   
    return(H);
}
int main()
{
    float cat1,cat2,res;
    printf("Informe os valores dos catetos :\n");
    scanf("%f%f",&cat1,&cat2);
    res=hipotenusa(cat1,cat2);
    
    printf("O resultado da hipotenuza:%f",res);
}