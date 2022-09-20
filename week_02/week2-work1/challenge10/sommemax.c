#include<stdio.h>
#include<math.h>


int main(){

int i , n , max,somme;
max=0;
somme=0;
for(i=0 ; i<10; i++){
printf("Entrer le nombre %d  : ", i+1);
scanf("%d",&n);
if(n<0)
continue;
somme=somme+n;
if(n>max)
max=n;

}
printf("le max = %d \n",max);
printf("la somme = %d",somme);
}

