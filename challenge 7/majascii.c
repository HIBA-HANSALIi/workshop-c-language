#include <stdio.h>
int main()
{
char caractere ;
printf("entrer un caractere :");
scanf("%c", &caractere );
if (caractere >= 65 && caractere <= 90)
{
printf ( "ce caractere est majuscule ") ;
}
else
{
printf("ce caractere est minuscule");
}
}
