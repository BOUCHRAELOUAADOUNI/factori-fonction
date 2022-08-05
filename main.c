#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,fact,nb;
    fact=1;
    printf("donnez la valeur de nb\n");
    scanf("%d",&nb);
    if(nb<0)
    printf("impossible");
    else
        for (i=0 ; i<=nb ; i++);
   {    fact= fact*i;
   printf("la factorielle est :%d",fact);
}
return 0;
}
