#include <stdio.h>
#include <math.h>
int main(){
    int xa,ya,xb,yb,distance;
    printf ("Entrer la coordonnee de xa:");
    scanf("%d",&xa);
   printf ("Entrer la coordonnee de ya:");
    scanf("%d",&ya);
   printf ("Entrer coordonnee de xb:");
    scanf("%d",&xb);

   printf ("Entrer la coordonnee de yb:");
    scanf("%d",&yb);

    distance=sqrt(pow(xb-xa,2)+pow(yb-ya,2));
    printf ("la distance entre A et B est %d\n ", distance);

 
   


}
























