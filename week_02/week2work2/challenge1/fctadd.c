#include<stdio.h>



int add(int a,int b){
	
	return a+b;
}
	

	
int main(){
	
	int a,b,somme;
	printf("Entrer la valeur de a:");
	scanf("%d",&a);
	printf("Entrer la valeur de b:");
	scanf("%d",&b);
	
	somme=add(a,b);
	printf("la somme est :%d",somme);
	
}

	

