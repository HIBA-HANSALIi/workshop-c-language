#include<stdio.h>

int main(){
	
int jour, mois, annee ;

printf("entrer jour :");
scanf("%d",&jour);
printf("entrer mois :");
scanf("%d",&mois);
printf("entrer annee :");
scanf("%d",&annee);
printf("%d",jour) ;
switch(mois){
case 1: printf ("janvier");
break;
case 2: printf ("février ");
break; 
case 3: printf("Mars");
break;
case 4: printf("Avril");
 break;
case 5: printf("Mai");
break;
case 6: printf("Juin");
break;
case 7: printf("Juillet");
break;
case 8: printf("Aout");
break;
case 9: printf("Septembre");
break;
case 10: printf("Octobre");
break;
case 11: printf("Novembre");
break;
case 12: printf("Decembre");
break;

}

printf("%d",annee);
    
    return 0;
}
