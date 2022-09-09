#include<stdio.h>

int main(){
	
  float a ,b,c,d,somme;
    float moyenne;
    printf ("Entrer la valeur de a:");
    scanf("%f",&a);
    printf ("Entrer la valeur de b:");
    scanf("%f",&b);
    printf ("Entrer la valeur de c:");
    scanf("%f",&c);
    printf ("Entrer la valeur de d:");
    scanf("%f",&d);

    somme=a+b+c+d;
    moyenne=somme/4;
    printf ("la somme des nombres est %.2f\n ", somme);
    printf ("la moyenne des nombres est %.2f\n ",moyenne);
	
	
}



