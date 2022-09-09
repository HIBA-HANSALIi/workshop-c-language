#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() {
   char nom[15];
   char prenom[15];
   int age;
   char sexe[10];
   int tel;
  printf("Entrer votre nom:");
  scanf("%s", &nom);
  printf("Entrer votre prenom: ");
  scanf("%s", &prenom);
  printf("Entrer votre age: ");
  scanf("%d", &age);
  printf("Entrer votre sexe: ");
  scanf("%s", &sexe);
  printf("Entrer votre numéro de téléphone: ");
  scanf("%d", &tel);
  
  
  printf("votre nom est:%s\n votre prenom:%s\n votre age:%d\n votre sexe:%s\n votre numero de telephone:%d\n",nom,prenom,age,sexe,tel);
  
  return 0;
}

