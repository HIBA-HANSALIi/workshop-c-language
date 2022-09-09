#include <stdio.h>

void main(){
	
    float longueur ,largeur ,surface;
    printf("entrer la largeur :");
    scanf("%f",&largeur);
    printf("entrer la longueur :");
    scanf("%f",&longueur);
    
    surface =2*(longueur + largeur);
    
    printf("la surface du rectangle est :%f",surface);


}
