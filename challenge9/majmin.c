#include <stdio.h>
 
int main()
{
    char ch;
 
    
    printf("Saisir un caractere: ");
    scanf("%c", &ch);
 
 
    
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' est un alphabet.", ch);
    }

if (ch >= 'A' && ch <= 'Z')
{
printf ( "c'est une majuscule") ;
}
else if(ch >= 'a' && ch <= 'a')
{
printf("c'est une misucule");
}
else printf("c'est pas une alphabet");
}
