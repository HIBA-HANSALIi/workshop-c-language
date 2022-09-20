
	
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	
    float a,b,c;
    float d;
    printf ("Entrer a:");
    scanf("%f",&a);
    printf ("Entrer b:");
    scanf("%f",&b); 
    printf ("Entrer c:");
    scanf("%f",&c);
    d=pow(b,2)-4*a*c;
    
    if(d>0){
        printf("le resultat 1 est:%f",(-b+sqrt(d))/2*a);
        printf("le resultat 1 est:%f",(-b-sqrt(d))/2*a);
        
    }
    else if(d==0){
        printf("le resultat est:%.2f",-b/(2*a));
    }
    else {
    printf("pas de solution");
    }
}
	
	

