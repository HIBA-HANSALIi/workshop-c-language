
#include <stdio.h>

int main(){
	
    int a,b,somme;
    
    printf("entrer la 1ere valeur :");
    scanf("%d",&a);
    printf("entrer la 2eme valeur :");
    scanf("%d",&b);
    
    somme=a+b;
    if(a==b){
        somme=somme*3;
    }
 printf("le triple de la somme est  :%d",somme);   
}
