#include<stdio.h>


int main(){

int i ,n[10], somme, max;
 
  for(i=0;i<10;i++)
  {
 do{
  printf("entrer le nombre (maximum 100 et qui terminer par 0) N%d : ", i+1);
  scanf("%d",&n[i]);  

 }while( n[i] % 10 != 0 || n[i] >= 100);
 
   }
  max = n[0];
  for(i=0;i<10;i++)
  {
  somme += n[i];
  if(n[i]> max) max = n[i];
 
  }
 
  printf("la somme = %d \n Max = %d", somme, max);
 
 
   
   }
