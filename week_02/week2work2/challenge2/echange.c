#include<stdio.h>

void echange(int a,int b){

int c=0;
c=a;
a=b;
b=c;

printf("Lechange  de a=%d et b=%d ",a,b);


}


int main(){
	int a,b;
	printf("Entrer la valeur de a:");
	scanf("%d",&a);
	printf("Entrer la valeur de b:");
	scanf("%d",&b);
	

	
	printf(" la valeur de  a=%d et b=%d\n ",a,b);
		echange(a,b);
}
