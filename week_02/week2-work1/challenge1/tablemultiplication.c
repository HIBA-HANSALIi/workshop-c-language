#include<stdio.h>

int main()
{
    int nbr,multiplication, i;
    
    printf("entrer un nombre :");
    scanf("%d",&nbr);
    for(i=0; i<=10; i++) {
        multiplication =nbr*i;

        printf("%d * %d= %d \n",nbr,i,multiplication );
    }


}
